
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int LPVOID ;
typedef int LPBYTE ;
typedef int IXMLDOMNode ;
typedef int DWORD ;
typedef int BSTR ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int,...) ;
 scalar_t__ FUNC_6 (int ,int,int *,int,int **,int *,int ,int *,int*,int *) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int *,int*) ;

void FUNC_9(IXMLDOMNode *VAR_2, int VAR_3, wchar_t * VAR_4[])
{
 BOOL VAR_5 = VAR_0;
 BSTR VAR_6;
 LPBYTE VAR_7;
 LPVOID VAR_8;
 DWORD VAR_9, VAR_10;

 if(FUNC_0(VAR_2, &VAR_6) == VAR_1)
 {
  VAR_5 = !FUNC_4(VAR_6, L"SS");
  FUNC_3(VAR_6);
  if(FUNC_1(VAR_2, &VAR_6) == VAR_1)
  {
   if(VAR_5)
   {
    if(FUNC_8(VAR_6, &VAR_7, &VAR_9))
    {
     FUNC_7(0, VAR_7);
     if(FUNC_6(VAR_7, VAR_9, ((void*)0), VAR_3, VAR_4, ((void*)0), 0, &VAR_8, &VAR_10, ((void*)0)))
     {
      FUNC_5(L">> cleartext: %.*s\n", VAR_10 / sizeof(wchar_t), VAR_8);
      FUNC_2(VAR_8);
     }
     FUNC_2(VAR_7);
    }
   }
   else FUNC_5(L"%s\n", VAR_6);
   FUNC_3(VAR_6);
  }
 }
}
