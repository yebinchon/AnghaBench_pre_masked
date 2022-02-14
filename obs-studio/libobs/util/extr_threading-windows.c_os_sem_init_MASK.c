
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int os_sem_t ;
typedef int LONG ;
typedef scalar_t__ HANDLE ;


 scalar_t__ FUNC_0 (int *,int ,int,int *) ;

int FUNC_1(os_sem_t **VAR_0, int VAR_1)
{
 HANDLE VAR_2 = FUNC_0(((void*)0), (LONG)VAR_1, 0x7FFFFFFF, ((void*)0));
 if (!VAR_2)
  return -1;

 *VAR_0 = (os_sem_t *)VAR_2;
 return 0;
}
