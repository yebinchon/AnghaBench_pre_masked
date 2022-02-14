
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t num_tbufs; int stopped; int lock; int num_bufs; int * tbufs; } ;
typedef int TBuffer ;
typedef TYPE_1__ Pool ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*,void (*) (void*,int),TYPE_1__*) ;
 int FUNC_4 (int *) ;

TBuffer* FUNC_5(Pool *VAR_2) {
  FUNC_1(&VAR_2->lock);

  FUNC_0(VAR_2->num_tbufs < VAR_0);
  TBuffer* VAR_3 = &VAR_2->tbufs[VAR_2->num_tbufs];
  VAR_2->num_tbufs++;
  FUNC_3(VAR_3, VAR_2->num_bufs,
                "pool", (void (*)(void *, int))VAR_1, VAR_2);

  bool VAR_4 = VAR_2->stopped;
  FUNC_2(&VAR_2->lock);




  if (VAR_4) {
    FUNC_4(VAR_3);
  }
  return VAR_3;
}
