
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int PWSTR ;
typedef int IXMLDOMNodeList ;
typedef int IXMLDOMNode ;
typedef int IXMLDOMDocument ;
typedef int DOMNodeType ;


 scalar_t__ FUNC_0 (int *,long,int **) ;
 scalar_t__ FUNC_1 (int *,long*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,char*,int **) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int,int **,int *,int ) ;
 int FUNC_8 (int *,char*) ;

void FUNC_9(int VAR_2, wchar_t * VAR_3[], IXMLDOMDocument *VAR_4, IXMLDOMNode *VAR_5)
{
 PWSTR VAR_6;
 IXMLDOMNodeList *VAR_7, *VAR_8;
 IXMLDOMNode *VAR_9, *VAR_10;
 DOMNodeType VAR_11;
 long VAR_12, VAR_13, VAR_14, VAR_15;

 if((VAR_6 = FUNC_8(VAR_5, L"name")))
 {
  FUNC_6(L"\n* Site: \'%s\'\n", VAR_6);
  FUNC_5(VAR_6);
  if((FUNC_4(VAR_5, L"application", &VAR_7) == VAR_1) && VAR_7)
  {
   if(FUNC_1(VAR_7, &VAR_12) == VAR_1)
   {
    for(VAR_14 = 0; VAR_14 < VAR_12; VAR_14++)
    {
     if((FUNC_0(VAR_7, VAR_14, &VAR_9) == VAR_1) && VAR_9)
     {
      if((FUNC_3(VAR_9, &VAR_11) == VAR_1) && (VAR_11 == VAR_0))
      {
       if((VAR_6 = FUNC_8(VAR_9, L"path")))
       {
        FUNC_6(L"  > Application Path: %s\n", VAR_6);
        FUNC_5(VAR_6);

        if((FUNC_4(VAR_9, L"virtualDirectory", &VAR_8) == VAR_1) && VAR_8)
        {
         if(FUNC_1(VAR_8, &VAR_13) == VAR_1)
         {
          for(VAR_15 = 0; VAR_15 < VAR_13; VAR_15++)
          {
           if((FUNC_0(VAR_8, VAR_15, &VAR_10) == VAR_1) && VAR_10)
           {
            if((FUNC_3(VAR_10, &VAR_11) == VAR_1) && (VAR_11 == VAR_0))
            {
             if((VAR_6 = FUNC_8(VAR_10, L"path")))
             {
              FUNC_6(L"    - VirtualDirectory Path: %s ( ", VAR_6);
              FUNC_5(VAR_6);

              if((VAR_6 = FUNC_8(VAR_10, L"physicalPath")))
              {
               FUNC_6(L"%s", VAR_6);
               FUNC_5(VAR_6);
              }
              FUNC_6(L" )\n");

              if((VAR_6 = FUNC_8(VAR_10, L"userName")))
              {
               FUNC_6(L"      Username: %s\n", VAR_6);
               FUNC_5(VAR_6);
               if((VAR_6 = FUNC_8(VAR_10, L"password")))
               {
                FUNC_6(L"      Password: %s\n", VAR_6);
                FUNC_7(VAR_2, VAR_3, VAR_4, VAR_6);
                FUNC_5(VAR_6);
               }
              }
             }
            }
            FUNC_2(VAR_10);
           }
          }
         }
        }
       }
      }
      FUNC_2(VAR_9);
     }
    }
   }
  }
 }
}
