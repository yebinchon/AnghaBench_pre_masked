
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPCVOID ;
typedef int * LPCBYTE ;
typedef int DWORD ;


 char** VAR_0 ;
 int FUNC_0 (char const*,...) ;

void FUNC_1(LPCVOID VAR_1, DWORD VAR_2, DWORD VAR_3)
{
 DWORD VAR_4, VAR_5 = VAR_3 >> 16;
 const char * VAR_6 = VAR_0[VAR_3 & 0x0000000f];
 for(VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {
  FUNC_0(VAR_6, ((LPCBYTE) VAR_1)[VAR_4]);
  if(VAR_5 && !((VAR_4+1) % VAR_5))
   FUNC_0("\n");
 }
}
