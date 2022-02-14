
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ PCWSTR ;
typedef int LPCWSTR ;
typedef int LPCBYTE ;
typedef int IXMLDOMNodeList ;
typedef int IXMLDOMNode ;
typedef int IXMLDOMDocument ;
typedef int IISXMLType ;
typedef int DWORD ;
typedef int DOMNodeType ;
typedef int BSTR ;
typedef int BOOL ;


 int VAR_0 ;



 scalar_t__ FUNC_0 (int *,int ,int **) ;
 scalar_t__ FUNC_1 (int *,long,int **) ;
 scalar_t__ FUNC_2 (int *,long*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int,int **,int *,int *) ;
 int FUNC_6 (int,int **,int *,int *,int ,int ,int ) ;
 int FUNC_7 (int,int **,int *,int *) ;

void FUNC_8(int VAR_3, wchar_t * VAR_4[], IXMLDOMDocument *VAR_5, PCWSTR VAR_6, IISXMLType VAR_7, LPCWSTR VAR_8, LPCBYTE VAR_9, DWORD VAR_10)
{
 IXMLDOMNodeList *VAR_11;
 IXMLDOMNode *VAR_12;
 DOMNodeType VAR_13;
 BOOL VAR_14 = VAR_0;
 long VAR_15, VAR_16;

 if((FUNC_0(VAR_5, (BSTR) VAR_6, &VAR_11) == VAR_2) && VAR_11)
 {
  if(FUNC_2(VAR_11, &VAR_15) == VAR_2)
  {
   for(VAR_16 = 0; (VAR_16 < VAR_15) && !VAR_14; VAR_16++)
   {
    if((FUNC_1(VAR_11, VAR_16, &VAR_12) == VAR_2) && VAR_12)
    {
     if((FUNC_4(VAR_12, &VAR_13) == VAR_2) && (VAR_13 == VAR_1))
     {
      switch(VAR_7)
      {
      case 130:
       FUNC_5(VAR_3, VAR_4, VAR_5, VAR_12);
       break;
      case 128:
       FUNC_7(VAR_3, VAR_4, VAR_5, VAR_12);
       break;
      case 129:
       VAR_14 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_12, VAR_8, VAR_9, VAR_10);
       break;
      }
     }
     FUNC_3(VAR_12);
    }
   }
  }
 }
}
