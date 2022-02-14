
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rchan_buf {size_t subbufs_produced; size_t subbufs_consumed; size_t offset; size_t bytes_consumed; TYPE_1__* chan; } ;
struct TYPE_2__ {size_t subbuf_size; size_t n_subbufs; } ;


 int FUNC_0 (struct rchan_buf*,size_t,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct rchan_buf *VAR_0, size_t VAR_1)
{
 size_t VAR_2 = VAR_0->chan->subbuf_size;
 size_t VAR_3 = VAR_0->chan->n_subbufs;
 size_t VAR_4 = VAR_0->subbufs_produced;
 size_t VAR_5 = VAR_0->subbufs_consumed;

 FUNC_0(VAR_0, VAR_1, 0);

 VAR_5 = VAR_0->subbufs_consumed;

 if (FUNC_1(VAR_0->offset > VAR_2)) {
  if (VAR_4 == VAR_5)
   return 0;
  return 1;
 }

 if (FUNC_1(VAR_4 - VAR_5 >= VAR_3)) {
  VAR_5 = VAR_4 - VAR_3 + 1;
  VAR_0->subbufs_consumed = VAR_5;
  VAR_0->bytes_consumed = 0;
 }

 VAR_4 = (VAR_4 % VAR_3) * VAR_2 + VAR_0->offset;
 VAR_5 = (VAR_5 % VAR_3) * VAR_2 + VAR_0->bytes_consumed;

 if (VAR_5 > VAR_4)
  VAR_4 += VAR_3 * VAR_2;

 if (VAR_5 == VAR_4) {
  if (VAR_0->offset == VAR_2 &&
      VAR_0->subbufs_produced > VAR_0->subbufs_consumed)
   return 1;
  return 0;
 }

 return 1;
}
