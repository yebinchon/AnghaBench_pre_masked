
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ PBYTE ;
typedef int * LPVOID ;
typedef int * LPBYTE ;
typedef int IXMLDOMNode ;
typedef int GUID ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int *,char*,int **) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (scalar_t__,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char*,int,char*,int,int *,...) ;
 scalar_t__ FUNC_5 (int *,int,int *,int,int **,int *,int ,int **,int*,int *) ;
 scalar_t__ FUNC_6 (int *,int **,int*) ;
 int * FUNC_7 (int *,char*) ;

void FUNC_8(DWORD VAR_2, IXMLDOMNode *VAR_3, int VAR_4, wchar_t * VAR_5[])
{
 IXMLDOMNode *VAR_6;
 wchar_t *VAR_7, *VAR_8, *VAR_9;
 LPBYTE VAR_10;
 LPVOID VAR_11;
 DWORD VAR_12, VAR_13;

 if((FUNC_0(VAR_3, L"logonCredentials", &VAR_6) == VAR_1) && VAR_6)
 {
  if((VAR_7 = FUNC_7(VAR_6, L"userName")))
  {
   if((VAR_8 = FUNC_7(VAR_6, L"domain")))
   {
    if((VAR_9 = FUNC_7(VAR_6, L"password")))
    {
     FUNC_4(L"%*s" L"* %s \\ %s : %s\n", VAR_2 << 1, L"", *VAR_8, VAR_7, VAR_9);
     if(FUNC_6(VAR_9, &VAR_10, &VAR_12))
     {
      if(VAR_12 >= (sizeof(DWORD) + sizeof(GUID)))
      {
       if(FUNC_3((PBYTE) VAR_10 + sizeof(DWORD), &VAR_0))
       {
        if(FUNC_5(VAR_10, VAR_12, ((void*)0), VAR_4, VAR_5, ((void*)0), 0, &VAR_11, &VAR_13, ((void*)0)))
        {
         FUNC_4(L"%*s" L">> cleartext password: %.*s\n", VAR_2 << 1, L"", VAR_13 / sizeof(wchar_t), VAR_11);
         FUNC_1(VAR_11);
        }
       }
       else FUNC_2(L"Maybe certificate encryption (todo)\n");
      }
      else FUNC_2(L"szData: %u\n", VAR_12);
      FUNC_1(VAR_10);
     }
     FUNC_1(VAR_9);
    }
    FUNC_1(VAR_8);
   }
   FUNC_1(VAR_7);
  }
 }
}
