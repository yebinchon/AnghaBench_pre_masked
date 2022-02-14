
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rchan_buf {struct rchan_buf* padding; struct rchan* chan; int start; } ;
struct rchan {int n_subbufs; int kref; int alloc_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rchan_buf*) ;
 struct rchan_buf* FUNC_1 (int,int,int ) ;
 int FUNC_2 (int *) ;
 struct rchan_buf* FUNC_3 (int,int ) ;
 int FUNC_4 (struct rchan_buf*,int *) ;

__attribute__((used)) static struct rchan_buf *FUNC_5(struct rchan *VAR_2)
{
 struct rchan_buf *VAR_3;

 if (VAR_2->n_subbufs > VAR_1 / sizeof(size_t *))
  return ((void*)0);

 VAR_3 = FUNC_3(sizeof(struct rchan_buf), VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->padding = FUNC_1(VAR_2->n_subbufs, sizeof(size_t *),
         VAR_0);
 if (!VAR_3->padding)
  goto free_buf;

 VAR_3->start = FUNC_4(VAR_3, &VAR_2->alloc_size);
 if (!VAR_3->start)
  goto free_buf;

 VAR_3->chan = VAR_2;
 FUNC_2(&VAR_3->chan->kref);
 return VAR_3;

free_buf:
 FUNC_0(VAR_3->padding);
 FUNC_0(VAR_3);
 return ((void*)0);
}
