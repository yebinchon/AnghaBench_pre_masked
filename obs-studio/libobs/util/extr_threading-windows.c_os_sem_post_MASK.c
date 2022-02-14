
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int os_sem_t ;
typedef int HANDLE ;


 scalar_t__ FUNC_0 (int ,int,int *) ;

int FUNC_1(os_sem_t *VAR_0)
{
 if (!VAR_0)
  return -1;
 return FUNC_0((HANDLE)VAR_0, 1, ((void*)0)) ? 0 : -1;
}
