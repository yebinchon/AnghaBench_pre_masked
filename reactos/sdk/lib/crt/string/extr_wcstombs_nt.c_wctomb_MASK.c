
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int WCHAR ;
typedef scalar_t__ ULONG ;
typedef int NTSTATUS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,scalar_t__*,int *,int) ;

int FUNC_2 (char *VAR_0, wchar_t VAR_1)
{
 NTSTATUS VAR_2;
 ULONG VAR_3;

 if (VAR_0 == ((void*)0))
  return 0;

 VAR_2 = FUNC_1 (VAR_0,
                                  1,
                                  &VAR_3,
                                  &VAR_1,
                                  sizeof(WCHAR));
 if (!FUNC_0(VAR_2))
  return -1;

 return (int)VAR_3;
}
