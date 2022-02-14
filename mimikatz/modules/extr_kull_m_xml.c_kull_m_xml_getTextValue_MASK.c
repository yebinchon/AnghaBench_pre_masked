
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ PCWSTR ;
typedef int IXMLDOMNode ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int *,int **) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int **) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int **,int ) ;

wchar_t * FUNC_5(IXMLDOMNode *VAR_1, PCWSTR VAR_2)
{
 wchar_t *VAR_3 = ((void*)0);
 IXMLDOMNode *VAR_4, *VAR_5;
 BSTR VAR_6;

 if((FUNC_2(VAR_1, (BSTR) VAR_2, &VAR_4) == VAR_0) && VAR_4)
 {
  if((FUNC_0(VAR_4, &VAR_5) == VAR_0) && VAR_5)
  {
   if(FUNC_1(VAR_5, &VAR_6) == VAR_0)
   {
    FUNC_4(&VAR_3, VAR_6);
    FUNC_3(VAR_6);
   }
  }
 }
 return VAR_3;
}
