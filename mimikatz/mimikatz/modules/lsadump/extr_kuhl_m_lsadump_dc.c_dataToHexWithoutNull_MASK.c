
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PCHAR ;
typedef int* PBYTE ;
typedef scalar_t__ LPCVOID ;
typedef int LPBYTE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int,char*,int) ;

BOOL FUNC_4(LPCVOID VAR_2, DWORD VAR_3, LPBYTE VAR_4, DWORD VAR_5)
{
 BOOL VAR_6 = VAR_0;
 PCHAR VAR_7;
 DWORD VAR_8 = VAR_3 * 2 + 1, VAR_9;
 if(VAR_5 >= (VAR_3 * 2))
 {
  if((VAR_7 = (PCHAR) FUNC_0(VAR_1, VAR_8)))
  {
   for(VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
    if(FUNC_3(VAR_7 + VAR_9 * 2, VAR_8 - VAR_9 * 2, "%02x", ((PBYTE) VAR_2)[VAR_9]) < 2)
     break;
   if((VAR_6 = (VAR_9 == VAR_3)))
    FUNC_2(VAR_4, VAR_7, VAR_8 - 1);
   FUNC_1(VAR_7);
  }
 }
 return VAR_6;
}
