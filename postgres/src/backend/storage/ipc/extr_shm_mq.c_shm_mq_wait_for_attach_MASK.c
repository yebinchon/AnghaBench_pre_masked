
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int shm_mq_result ;
struct TYPE_7__ {int mqh_handle; TYPE_2__* mqh_queue; } ;
typedef TYPE_1__ shm_mq_handle ;
struct TYPE_8__ {int * mq_receiver; int * mq_sender; } ;
typedef TYPE_2__ shm_mq ;
typedef int PGPROC ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int **,int ) ;

shm_mq_result
FUNC_4(shm_mq_handle *VAR_3)
{
 shm_mq *VAR_4 = VAR_3->mqh_queue;
 PGPROC **VAR_5;

 if (FUNC_1(VAR_4) == VAR_0)
  VAR_5 = &VAR_4->mq_sender;
 else
 {
  FUNC_0(FUNC_2(VAR_4) == VAR_0);
  VAR_5 = &VAR_4->mq_receiver;
 }

 if (FUNC_3(VAR_4, VAR_5, VAR_3->mqh_handle))
  return VAR_2;
 else
  return VAR_1;
}
