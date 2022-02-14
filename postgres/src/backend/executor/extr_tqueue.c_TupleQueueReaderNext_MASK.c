
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ shm_mq_result ;
struct TYPE_5__ {int queue; } ;
typedef TYPE_1__ TupleQueueReader ;
struct TYPE_6__ {void* t_data; int t_len; int t_tableOid; int t_self; } ;
typedef int Size ;
typedef TYPE_2__ HeapTupleData ;
typedef int * HeapTuple ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,int *,void**,int) ;

HeapTuple
FUNC_4(TupleQueueReader *VAR_4, bool VAR_5, bool *VAR_6)
{
 HeapTupleData VAR_7;
 shm_mq_result VAR_8;
 Size VAR_9;
 void *VAR_10;

 if (VAR_6 != ((void*)0))
  *VAR_6 = 0;


 VAR_8 = FUNC_3(VAR_4->queue, &VAR_9, &VAR_10, VAR_5);


 if (VAR_8 == VAR_1)
 {
  if (VAR_6 != ((void*)0))
   *VAR_6 = 1;
  return ((void*)0);
 }


 if (VAR_8 == VAR_3)
  return ((void*)0);
 FUNC_0(VAR_8 == VAR_2);





 FUNC_1(&VAR_7.t_self);
 VAR_7.t_tableOid = VAR_0;
 VAR_7.t_len = VAR_9;
 VAR_7.t_data = VAR_10;

 return FUNC_2(&VAR_7);
}
