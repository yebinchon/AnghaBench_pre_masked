
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int PCWSTR ;
typedef int IXMLDOMNode ;
typedef int IXMLDOMNamedNodeMap ;
typedef int BSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,long,int **) ;
 scalar_t__ FUNC_2 (int *,long*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int **,int ) ;

wchar_t * FUNC_10(IXMLDOMNode *VAR_2, PCWSTR VAR_3)
{
 wchar_t *VAR_4 = ((void*)0);
 IXMLDOMNamedNodeMap *VAR_5;
 IXMLDOMNode *VAR_6;
 BSTR VAR_7;
 long VAR_8, VAR_9;
 BOOL VAR_10 = VAR_0;

 if(FUNC_4(VAR_2, &VAR_5) == VAR_1)
 {
  if(FUNC_2(VAR_5, &VAR_8) == VAR_1)
  {
   for(VAR_9 = 0; (VAR_9 < VAR_8) && !VAR_10; VAR_9++)
   {
    if(FUNC_1(VAR_5, VAR_9, &VAR_6) == VAR_1)
    {
     if(FUNC_5(VAR_6, &VAR_7) == VAR_1)
     {
      VAR_10 = (FUNC_8(VAR_3, VAR_7) == 0);
      FUNC_7(VAR_7);
      if(VAR_10)
      {
       if(FUNC_6(VAR_6, &VAR_7) == VAR_1)
       {
        FUNC_9(&VAR_4, VAR_7);
        FUNC_7(VAR_7);
       }
      }
     }
     FUNC_3(VAR_6);
    }
   }
  }
  FUNC_0(VAR_5);
 }
 return VAR_4;
}
