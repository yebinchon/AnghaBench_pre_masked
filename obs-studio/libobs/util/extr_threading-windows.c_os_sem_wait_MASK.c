
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int os_sem_t ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

int FUNC_1(os_sem_t *VAR_2)
{
 DWORD VAR_3;

 if (!VAR_2)
  return -1;
 VAR_3 = FUNC_0((HANDLE)VAR_2, VAR_0);
 return (VAR_3 == VAR_1) ? 0 : -1;
}
