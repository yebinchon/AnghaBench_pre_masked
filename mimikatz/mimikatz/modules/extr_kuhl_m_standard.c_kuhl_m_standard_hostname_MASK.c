
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ,int **) ;

NTSTATUS FUNC_3(int VAR_3, wchar_t * VAR_4[])
{
 wchar_t *VAR_5;
 if(FUNC_2(VAR_2, &VAR_5))
 {
  FUNC_1(L"%s", VAR_5);
  FUNC_0(VAR_5);
 }
 if(FUNC_2(VAR_0, &VAR_5))
 {
  FUNC_1(L" (%s)", VAR_5);
  FUNC_0(VAR_5);
 }
 FUNC_1(L"\n");
 return VAR_1;
}
