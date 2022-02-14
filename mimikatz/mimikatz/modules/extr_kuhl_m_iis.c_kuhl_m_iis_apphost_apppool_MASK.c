
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int PWSTR ;
typedef int IXMLDOMNode ;
typedef int IXMLDOMDocument ;


 scalar_t__ FUNC_0 (int *,char*,int **) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,int **,int *,int ) ;
 int FUNC_4 (int *,char*) ;

void FUNC_5(int VAR_1, wchar_t * VAR_2[], IXMLDOMDocument *VAR_3, IXMLDOMNode *VAR_4)
{
 PWSTR VAR_5;
 IXMLDOMNode *VAR_6;
 if((VAR_5 = FUNC_4(VAR_4, L"name")))
 {
  FUNC_2(L"\n* ApplicationPool: \'%s\'\n", VAR_5);
  FUNC_1(VAR_5);
  if((FUNC_0(VAR_4, L"processModel", &VAR_6) == VAR_0) && VAR_6)
  {
   if((VAR_5 = FUNC_4(VAR_6, L"userName")))
   {
    FUNC_2(L"  Username: %s\n", VAR_5);
    FUNC_1(VAR_5);
    if((VAR_5 = FUNC_4(VAR_6, L"password")))
    {
     FUNC_2(L"  Password: %s\n", VAR_5);
     FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5);
     FUNC_1(VAR_5);
    }
   }
  }
 }
}
