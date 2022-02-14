
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int os_event_t ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,unsigned long) ;

int FUNC_1(os_event_t *VAR_4, unsigned long VAR_5)
{
 DWORD VAR_6;

 if (!VAR_4)
  return VAR_0;

 VAR_6 = FUNC_0((HANDLE)VAR_4, VAR_5);
 if (VAR_6 == VAR_3)
  return VAR_1;
 else if (VAR_6 != VAR_2)
  return VAR_0;

 return 0;
}
