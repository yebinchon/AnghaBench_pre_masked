
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int WCHAR ;
typedef int ULONG ;
typedef int NTSTATUS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int*,char const*,int) ;
 int FUNC_2 (int*,char const*,int) ;
 scalar_t__ FUNC_3 (char const*) ;

size_t FUNC_4 (wchar_t *VAR_0, const char *VAR_1, size_t VAR_2)
{
 NTSTATUS VAR_3;
 ULONG VAR_4;
 ULONG VAR_5;

 VAR_5 = (ULONG)FUNC_3 (VAR_1);

 if (VAR_0 == ((void*)0))
 {
  FUNC_2 (&VAR_4,
                             VAR_1,
                             VAR_5);

  return (size_t)(VAR_4 / sizeof(wchar_t));
 }

 VAR_3 = FUNC_1 (VAR_0,
                                  (ULONG)VAR_2 * sizeof(WCHAR),
                                  &VAR_4,
                                  VAR_1,
                                  VAR_5);
 if (!FUNC_0(VAR_3))
  return -1;

 return (size_t)(VAR_4 / sizeof(wchar_t));
}
