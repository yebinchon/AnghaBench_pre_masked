
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int shm_toc ;
typedef int shm_mq ;
typedef int dsm_segment ;
typedef int DestReceiver ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int ) ;
 char* FUNC_3 (int *,int ,int) ;

__attribute__((used)) static DestReceiver *
FUNC_4(dsm_segment *VAR_4, shm_toc *VAR_5)
{
 char *VAR_6;
 shm_mq *VAR_7;

 VAR_6 = FUNC_3(VAR_5, VAR_1, 0);
 VAR_6 += VAR_3 * VAR_2;
 VAR_7 = (shm_mq *) VAR_6;
 FUNC_2(VAR_7, VAR_0);
 return FUNC_0(FUNC_1(VAR_7, VAR_4, ((void*)0)));
}
