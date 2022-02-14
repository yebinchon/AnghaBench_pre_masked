
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct exception_handler_data {int cpu_info; } ;
typedef scalar_t__ LSTATUS ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ,char*,int *,int *,int ,int*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static inline void FUNC_4(struct exception_handler_data *VAR_4)
{
 HKEY VAR_5;
 LSTATUS VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3, &VAR_5);
 if (VAR_6 == VAR_1) {
  wchar_t VAR_7[1024];
  DWORD VAR_8 = 1024;

  VAR_6 = FUNC_1(VAR_5, L"ProcessorNameString", ((void*)0),
       ((void*)0), (LPBYTE)VAR_7, &VAR_8);
  if (VAR_6 == VAR_1)
   FUNC_3(&VAR_4->cpu_info, VAR_7);
  else
   FUNC_2(&VAR_4->cpu_info, VAR_0);
 } else {
  FUNC_2(&VAR_4->cpu_info, VAR_0);
 }
}
