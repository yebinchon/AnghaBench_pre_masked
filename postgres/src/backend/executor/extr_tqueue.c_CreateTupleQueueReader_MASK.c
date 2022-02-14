
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int shm_mq_handle ;
struct TYPE_4__ {int * queue; } ;
typedef TYPE_1__ TupleQueueReader ;


 TYPE_1__* FUNC_0 (int) ;

TupleQueueReader *
FUNC_1(shm_mq_handle *VAR_0)
{
 TupleQueueReader *VAR_1 = FUNC_0(sizeof(TupleQueueReader));

 VAR_1->queue = VAR_0;

 return VAR_1;
}
