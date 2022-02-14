
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int IXMLDOMNodeList ;
typedef int IXMLDOMNode ;
typedef int DOMNodeType ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,long,int **) ;
 scalar_t__ FUNC_3 (int *,long*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int **) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;
 int FUNC_8 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_9 (char*,int *) ;
 int FUNC_10 (int *,int,int **) ;
 int * FUNC_11 (int *,char*) ;

void FUNC_12(IXMLDOMNode *VAR_2, int VAR_3, wchar_t * VAR_4[])
{
 IXMLDOMNode *VAR_5, *VAR_6;
 IXMLDOMNodeList *VAR_7;
 long VAR_8, VAR_9;
 DOMNodeType VAR_10;
 wchar_t *VAR_11;

 if((FUNC_0(VAR_2, (BSTR) L"Props", &VAR_5) == VAR_1) && VAR_5)
 {
  if(FUNC_5(VAR_5, &VAR_7) == VAR_1)
  {
   if(FUNC_3(VAR_7, &VAR_8) == VAR_1)
   {
    for(VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
    {
     if((FUNC_2(VAR_7, VAR_9, &VAR_6) == VAR_1) && VAR_6)
     {
      if((FUNC_6(VAR_6, &VAR_10) == VAR_1) && (VAR_10 == VAR_0))
      {
       if((VAR_11 = FUNC_11(VAR_6, L"N")))
       {
        FUNC_9(L"%s: ", VAR_11);
        FUNC_7(VAR_11);
        FUNC_10(VAR_6, VAR_3, VAR_4);
       }
       else FUNC_8(L"No NAME\n");
      }
      else FUNC_8(L"Not ELEMENT\n");
      FUNC_4(VAR_6);
     }
    }
   }
   FUNC_1(VAR_7);
  }
 }
 else FUNC_8(L"No Props\n");
}
