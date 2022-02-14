
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rchan_buf {size_t subbufs_produced; size_t subbufs_consumed; size_t offset; size_t bytes_consumed; size_t* padding; int cpu; TYPE_1__* chan; } ;
struct TYPE_2__ {size_t subbuf_size; size_t n_subbufs; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct rchan_buf *VAR_0,
        size_t VAR_1,
        size_t VAR_2)
{
 size_t VAR_3 = VAR_0->chan->subbuf_size;
 size_t VAR_4 = VAR_0->chan->n_subbufs;
 size_t VAR_5;

 if (VAR_0->subbufs_produced == VAR_0->subbufs_consumed &&
     VAR_0->offset == VAR_0->bytes_consumed)
  return;

 if (VAR_0->bytes_consumed + VAR_2 > VAR_3) {
  FUNC_0(VAR_0->chan, VAR_0->cpu, 1);
  VAR_0->bytes_consumed = 0;
 }

 VAR_0->bytes_consumed += VAR_2;
 if (!VAR_1)
  VAR_5 = VAR_0->subbufs_consumed % VAR_4;
 else
  VAR_5 = VAR_1 / VAR_0->chan->subbuf_size;
 if (VAR_0->bytes_consumed + VAR_0->padding[VAR_5] == VAR_3) {
  if ((VAR_5 == VAR_0->subbufs_produced % VAR_4) &&
      (VAR_0->offset == VAR_3))
   return;
  FUNC_0(VAR_0->chan, VAR_0->cpu, 1);
  VAR_0->bytes_consumed = 0;
 }
}
