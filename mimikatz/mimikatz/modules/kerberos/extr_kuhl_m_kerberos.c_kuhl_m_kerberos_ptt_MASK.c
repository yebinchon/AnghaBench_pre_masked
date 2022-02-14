
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int ,int *,int ,int *) ;
 int FUNC_4 (int *,char*,int ,int ,int ,int (*) (int ,int *,int ,int *),int *) ;

NTSTATUS FUNC_5(int VAR_2, wchar_t * VAR_3[])
{
 int VAR_4;
 for(VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {
  if(FUNC_1(VAR_3[VAR_4]))
  {
   FUNC_2(L"* Directory: \'%s\'\n", VAR_3[VAR_4]);
   FUNC_4(VAR_3[VAR_4], L"*.kirbi", VAR_0, 0, VAR_0, FUNC_3, ((void*)0));
  }
  else FUNC_3(0, VAR_3[VAR_4], FUNC_0(VAR_3[VAR_4]), ((void*)0));
 }
 return VAR_1;
}
