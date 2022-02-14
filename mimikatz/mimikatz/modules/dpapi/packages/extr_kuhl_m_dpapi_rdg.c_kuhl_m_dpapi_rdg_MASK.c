
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
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int *,int,int **) ;
 scalar_t__ FUNC_4 (int,int **,char*,int *,int *) ;
 int * FUNC_5 () ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;

NTSTATUS FUNC_8(int VAR_2, wchar_t * VAR_3[])
{
 PCWSTR VAR_4;
 IXMLDOMDocument *VAR_5;
 IXMLDOMNode *VAR_6;

 if(FUNC_4(VAR_2, VAR_3, L"in", &VAR_4, ((void*)0)))
 {
  if((VAR_5 = FUNC_5()))
  {
   if(FUNC_6(VAR_5, VAR_4))
   {
    if((FUNC_0(VAR_5, (BSTR) L"//RDCMan/file", &VAR_6) == VAR_1) && VAR_6)
    {
     FUNC_2(L"<ROOT>\n");
     FUNC_3(1, VAR_6, VAR_2, VAR_3);
    }
   }
   FUNC_7(VAR_5);
  }
 }
 else FUNC_1(L"Missing /in:filename.rdg\n");
 return VAR_0;
}
