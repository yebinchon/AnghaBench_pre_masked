
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int shm_toc ;
typedef int shm_mq_handle ;
typedef int shm_mq ;
typedef int dsm_segment ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int,int) ;

__attribute__((used)) static void
FUNC_4(dsm_segment *VAR_1, shm_toc *VAR_2, int VAR_3,
     shm_mq_handle **VAR_4, shm_mq_handle **VAR_5)
{
 shm_mq *VAR_6;
 shm_mq *VAR_7;

 VAR_6 = FUNC_3(VAR_2, VAR_3, 0);
 FUNC_1(VAR_6, VAR_0);
 *VAR_4 = FUNC_0(VAR_6, VAR_1, ((void*)0));
 VAR_7 = FUNC_3(VAR_2, VAR_3 + 1, 0);
 FUNC_2(VAR_7, VAR_0);
 *VAR_5 = FUNC_0(VAR_7, VAR_1, ((void*)0));
}
