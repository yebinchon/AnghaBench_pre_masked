
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rchan_buf {int offset; int prev_padding; size_t subbufs_produced; int* padding; TYPE_2__* chan; void* data; void* start; int wakeup_work; int read_wait; int early_bytes; scalar_t__ dentry; } ;
struct TYPE_6__ {int i_size; } ;
struct TYPE_5__ {size_t subbuf_size; size_t n_subbufs; size_t last_toobig; TYPE_1__* cb; } ;
struct TYPE_4__ {int (* subbuf_start ) (struct rchan_buf*,void*,void*,int) ;} ;


 TYPE_3__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct rchan_buf*,void*,void*,int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *) ;

size_t FUNC_6(struct rchan_buf *VAR_0, size_t VAR_1)
{
 void *VAR_2, *VAR_3;
 size_t VAR_4, VAR_5;

 if (FUNC_4(VAR_1 > VAR_0->chan->subbuf_size))
  goto toobig;

 if (VAR_0->offset != VAR_0->chan->subbuf_size + 1) {
  VAR_0->prev_padding = VAR_0->chan->subbuf_size - VAR_0->offset;
  VAR_4 = VAR_0->subbufs_produced % VAR_0->chan->n_subbufs;
  VAR_0->padding[VAR_4] = VAR_0->prev_padding;
  VAR_0->subbufs_produced++;
  if (VAR_0->dentry)
   FUNC_0(VAR_0->dentry)->i_size +=
    VAR_0->chan->subbuf_size -
    VAR_0->padding[VAR_4];
  else
   VAR_0->early_bytes += VAR_0->chan->subbuf_size -
         VAR_0->padding[VAR_4];
  FUNC_2();
  if (FUNC_5(&VAR_0->read_wait)) {






   FUNC_1(&VAR_0->wakeup_work);
  }
 }

 VAR_2 = VAR_0->data;
 VAR_5 = VAR_0->subbufs_produced % VAR_0->chan->n_subbufs;
 VAR_3 = VAR_0->start + VAR_5 * VAR_0->chan->subbuf_size;
 VAR_0->offset = 0;
 if (!VAR_0->chan->cb->subbuf_start(VAR_0, VAR_3, VAR_2, VAR_0->prev_padding)) {
  VAR_0->offset = VAR_0->chan->subbuf_size + 1;
  return 0;
 }
 VAR_0->data = VAR_3;
 VAR_0->padding[VAR_5] = 0;

 if (FUNC_4(VAR_1 + VAR_0->offset > VAR_0->chan->subbuf_size))
  goto toobig;

 return VAR_1;

toobig:
 VAR_0->chan->last_toobig = VAR_1;
 return 0;
}
