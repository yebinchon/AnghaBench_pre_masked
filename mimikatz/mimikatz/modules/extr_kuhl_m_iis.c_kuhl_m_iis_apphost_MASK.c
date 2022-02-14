
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int PCWSTR ;
typedef int NTSTATUS ;
typedef int IXMLDOMDocument ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (int,int **,int *,char*,int ,int *,int *,int ) ;
 scalar_t__ FUNC_2 (int,int **,char*,int *,int *) ;
 int * FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

NTSTATUS FUNC_6(int VAR_3, wchar_t * VAR_4[])
{
 PCWSTR VAR_5;
 IXMLDOMDocument *VAR_6;

 if(FUNC_2(VAR_3, VAR_4, L"in", &VAR_5, ((void*)0)))
 {
  if((VAR_6 = FUNC_3()))
  {
   if(FUNC_4(VAR_6, VAR_5))
   {
    FUNC_1(VAR_3, VAR_4, VAR_6, L"//configuration/system.applicationHost/applicationPools/add", VAR_0, ((void*)0), ((void*)0), 0);
    FUNC_1(VAR_3, VAR_4, VAR_6, L"//configuration/system.applicationHost/sites/site", VAR_1, ((void*)0), ((void*)0), 0);
   }
   FUNC_5(VAR_6);
  }
 }
 else FUNC_0(L"Missing /in:filename (applicationHost.config)\n");
 return VAR_2;
}
