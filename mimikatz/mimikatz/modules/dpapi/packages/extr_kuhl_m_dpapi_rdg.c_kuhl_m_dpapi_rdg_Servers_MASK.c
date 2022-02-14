
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int IXMLDOMNodeList ;
typedef int IXMLDOMNode ;
typedef int DWORD ;
typedef int DOMNodeType ;


 scalar_t__ FUNC_0 (int *,long,int **) ;
 scalar_t__ FUNC_1 (int *,long*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,char*,int **) ;
 scalar_t__ FUNC_5 (int *,char*,int **) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (char*,int,char*,int *) ;
 int FUNC_8 (int,int *,int,int **) ;
 int * FUNC_9 (int *,char*) ;

void FUNC_10(DWORD VAR_2, IXMLDOMNode *VAR_3, int VAR_4, wchar_t * VAR_5[])
{
 IXMLDOMNodeList *VAR_6;
 IXMLDOMNode *VAR_7, *VAR_8;
 DOMNodeType VAR_9;
 long VAR_10, VAR_11;
 wchar_t *VAR_12;

 if((FUNC_4(VAR_3, L"server", &VAR_6) == VAR_1) && VAR_6)
 {
  if(FUNC_1(VAR_6, &VAR_10) == VAR_1)
  {
   for(VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
   {
    if((FUNC_0(VAR_6, VAR_11, &VAR_7) == VAR_1) && VAR_7)
    {
     if((FUNC_3(VAR_7, &VAR_9) == VAR_1) && (VAR_9 == VAR_0))
     {
      if((FUNC_5(VAR_7, L"properties", &VAR_8) == VAR_1) && VAR_8)
      {
       if((VAR_12 = FUNC_9(VAR_8, L"name")))
       {
        FUNC_7(L"%*s" L"| %s\n", VAR_2 << 1, L"", VAR_12);
        FUNC_6(VAR_12);
       }
      }
      FUNC_8(VAR_2 + 1, VAR_7, VAR_4, VAR_5);
     }
     FUNC_2(VAR_7);
    }
   }
  }
 }
}
