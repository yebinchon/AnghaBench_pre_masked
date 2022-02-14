
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef int IXMLDOMNodeList ;
typedef int IXMLDOMNode ;
typedef int DOMNodeType ;
typedef int BSTR ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int **) ;
 scalar_t__ FUNC_1 (int *,long,int **) ;
 scalar_t__ FUNC_2 (int *,long*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,char*,int **) ;
 int VAR_1 ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

BOOL FUNC_10(IXMLDOMNode *VAR_3, LPCWSTR VAR_4)
{
 BOOL VAR_5 = VAR_0;
 IXMLDOMNode *VAR_6, *VAR_7;
 IXMLDOMNodeList *VAR_8;
 DOMNodeType VAR_9;
 long VAR_10, VAR_11;
 BSTR VAR_12;

 if((FUNC_0(VAR_3, (BSTR) L"TN", &VAR_6) == VAR_2) && VAR_6)
 {
  if((FUNC_6(VAR_6, L"T", &VAR_8) == VAR_2) && VAR_8)
  {
   if(FUNC_2(VAR_8, &VAR_10) == VAR_2)
   {
    for(VAR_11 = 0; (VAR_11 < VAR_10) && !VAR_5; VAR_11++)
    {
     if((FUNC_1(VAR_8, VAR_11, &VAR_7) == VAR_2) && VAR_7)
     {
      if((FUNC_4(VAR_7, &VAR_9) == VAR_2) && (VAR_9 == VAR_1))
      {
       if(FUNC_5(VAR_7, &VAR_12) == VAR_2)
       {
        VAR_5 = !FUNC_9(VAR_12, VAR_4);
        FUNC_8(VAR_12);
       }
      }
      FUNC_3(VAR_7);
     }
    }
   }
  }
  else FUNC_7(L"No types\n");
 }
 else FUNC_7(L"No TN\n");
 return VAR_5;
}
