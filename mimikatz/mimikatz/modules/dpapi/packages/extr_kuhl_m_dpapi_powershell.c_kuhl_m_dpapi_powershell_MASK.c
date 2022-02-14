
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int PCWSTR ;
typedef int NTSTATUS ;
typedef int IXMLDOMNode ;
typedef int IXMLDOMDocument ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int,int **) ;
 int FUNC_4 (int *,int,int **) ;
 scalar_t__ FUNC_5 (int,int **,char*,int *,int *) ;
 int * FUNC_6 () ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;

NTSTATUS FUNC_9(int VAR_2, wchar_t * VAR_3[])
{
 PCWSTR VAR_4;
 IXMLDOMDocument *VAR_5;
 IXMLDOMNode *VAR_6;

 if(FUNC_5(VAR_2, VAR_3, L"in", &VAR_4, ((void*)0)))
 {
  if((VAR_5 = FUNC_6()))
  {
   if(FUNC_7(VAR_5, VAR_4))
   {
    if((FUNC_0(VAR_5, (BSTR) L"//Objs/Obj", &VAR_6) == VAR_1) && VAR_6)
    {
     if(FUNC_2(VAR_6, L"System.Management.Automation.PSCredential") || FUNC_2(VAR_6, L"System.Security.SecureString"))
      FUNC_3(VAR_6, VAR_2, VAR_3);
     else FUNC_1(L"XML doesn't seem to be a PSCredential/SecureString\n");
    }
    else if((FUNC_0(VAR_5, (BSTR) L"//Objs/SS", &VAR_6) == VAR_1) && VAR_6)
     FUNC_4(VAR_6, VAR_2, VAR_3);
    else FUNC_1(L"XML doesn't seem to be a SecureString\n");
   }
   FUNC_8(VAR_5);
  }
 }
 else FUNC_1(L"Missing /in:credentials.xml\n");
 return VAR_0;
}
