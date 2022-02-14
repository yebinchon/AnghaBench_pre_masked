
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef size_t PWCHAR ;
typedef size_t PCWSTR ;
typedef size_t PCWCHAR ;
typedef size_t PBYTE ;
typedef int IXMLDOMDocument ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t,size_t,size_t) ;
 scalar_t__ FUNC_3 (size_t,char*,int) ;
 int FUNC_4 (char*,size_t,size_t) ;
 int FUNC_5 (int,int **,int *,char*,int ,size_t,size_t,int ) ;
 scalar_t__ FUNC_6 (size_t,size_t*,int *) ;
 size_t FUNC_7 (size_t,int) ;
 size_t FUNC_8 (size_t) ;

void FUNC_9(int VAR_3, wchar_t * VAR_4[], IXMLDOMDocument *VAR_5, PCWSTR VAR_6)
{
 BOOL VAR_7 = VAR_0;
 size_t VAR_8 = FUNC_8(VAR_6), VAR_9, VAR_10;
 PCWCHAR VAR_11, VAR_12, VAR_13, VAR_14;
 PWCHAR VAR_15, VAR_16;
 PBYTE VAR_17;
 DWORD VAR_18;

 if(VAR_8 > 10)
 {
  if((FUNC_3(VAR_6, L"[enc:", 5) == 0) && (FUNC_3(VAR_6 + (VAR_8 - 5), L":enc]", 5) == 0))
  {
   VAR_11 = VAR_6 + 5;
   VAR_12 = FUNC_7(VAR_6 + 5, L':');
   VAR_9 = (PBYTE) VAR_12 - (PBYTE) VAR_11;
   if(VAR_12 != (VAR_6 + (VAR_8 - 5)))
   {
    VAR_13 = VAR_12 + 1;
    VAR_14 = VAR_6 + (VAR_8 - 5);
    VAR_10 = (PBYTE) VAR_14 - (PBYTE) VAR_13;
    if((VAR_15 = (PWCHAR) FUNC_0(VAR_2, VAR_9 + sizeof(wchar_t))))
    {
     FUNC_2(VAR_15, VAR_11, VAR_9);
     if((VAR_16 = (PWCHAR) FUNC_0(VAR_2, VAR_10 + sizeof(wchar_t))))
     {
      FUNC_2(VAR_16, VAR_13, VAR_10);
      FUNC_4(L"  | Provider  : %s\n  | Data      : %s\n", VAR_15, VAR_16);

      if(FUNC_6(VAR_16, &VAR_17, &VAR_18))
      {



       FUNC_5(VAR_3, VAR_4, VAR_5, L"//configuration/configProtectedData/providers/add", VAR_1, VAR_15, VAR_17, VAR_18);
       FUNC_1(VAR_17);
      }
      FUNC_1(VAR_16);
     }
     FUNC_1(VAR_15);
    }
   }
  }
 }
}
