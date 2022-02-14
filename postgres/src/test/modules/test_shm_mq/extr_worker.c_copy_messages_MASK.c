
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ shm_mq_result ;
typedef int shm_mq_handle ;
typedef int Size ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,void**,int) ;
 scalar_t__ FUNC_2 (int *,int ,void*,int) ;

__attribute__((used)) static void
FUNC_3(shm_mq_handle *VAR_1, shm_mq_handle *VAR_2)
{
 Size VAR_3;
 void *VAR_4;
 shm_mq_result VAR_5;

 for (;;)
 {

  FUNC_0();


  VAR_5 = FUNC_1(VAR_1, &VAR_3, &VAR_4, 0);
  if (VAR_5 != VAR_0)
   break;


  VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4, 0);
  if (VAR_5 != VAR_0)
   break;
 }
}
