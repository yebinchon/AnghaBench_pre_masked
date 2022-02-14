
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int NTSTATUS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (int,int **,char*,scalar_t__*) ;

NTSTATUS FUNC_2(int VAR_3, wchar_t * VAR_4[])
{
 if(!FUNC_1(VAR_3, VAR_4, L"in", &VAR_1))
  FUNC_1(VAR_3, VAR_4, L"input", &VAR_1);

 if(!FUNC_1(VAR_3, VAR_4, L"out", &VAR_2))
  FUNC_1(VAR_3, VAR_4, L"output", &VAR_2);

 FUNC_0(L"isBase64InterceptInput  is %s\nisBase64InterceptOutput is %s\n", VAR_1 ? L"true" : L"false", VAR_2 ? L"true" : L"false");
 return VAR_0;
}
