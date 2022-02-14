
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * handle; } ;
typedef TYPE_1__ worker_state ;
typedef int test_shm_mq_header ;
typedef int shm_mq_handle ;
typedef int shm_mq ;
typedef int int64 ;
typedef int int32 ;
typedef int dsm_segment ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int,int *) ;
 int FUNC_4 (int ,int,int **,int **,int **,int **) ;
 int * FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (TYPE_1__*,int *) ;

void
FUNC_7(int64 VAR_1, int32 VAR_2, dsm_segment **VAR_3,
      shm_mq_handle **VAR_4, shm_mq_handle **VAR_5)
{
 dsm_segment *VAR_6;
 test_shm_mq_header *VAR_7;
 shm_mq *VAR_8 = ((void*)0);
 shm_mq *VAR_9 = ((void*)0);
 worker_state *VAR_10;


 FUNC_4(VAR_1, VAR_2, &VAR_6, &VAR_7, &VAR_8, &VAR_9);
 *VAR_3 = VAR_6;


 VAR_10 = FUNC_3(VAR_2, VAR_6);


 *VAR_4 = FUNC_5(VAR_8, VAR_6, VAR_10->handle[0]);
 *VAR_5 = FUNC_5(VAR_9, VAR_6, VAR_10->handle[VAR_2 - 1]);


 FUNC_6(VAR_10, VAR_7);






 FUNC_1(VAR_6, VAR_0,
       FUNC_0(VAR_10));
 FUNC_2(VAR_10);
}
