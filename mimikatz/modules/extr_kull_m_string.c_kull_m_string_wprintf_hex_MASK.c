
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PCWCHAR ;
typedef scalar_t__ LPCVOID ;
typedef int * LPCBYTE ;
typedef int DWORD ;


 int * VAR_0 ;
 int FUNC_0 (char*,...) ;

void FUNC_1(LPCVOID VAR_1, DWORD VAR_2, DWORD VAR_3)
{
 DWORD VAR_4, VAR_5 = VAR_3 >> 16;
 PCWCHAR VAR_6 = VAR_0[VAR_3 & 0x0000000f];

 if((VAR_3 & 0x0000000f) == 2)
  FUNC_0(L"\nBYTE data[] = {\n\t");

 for(VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {
  FUNC_0(VAR_6, ((LPCBYTE) VAR_1)[VAR_4]);
  if(VAR_5 && !((VAR_4+1) % VAR_5))
  {
   FUNC_0(L"\n");
   if((VAR_3 & 0x0000000f) == 2)
    FUNC_0(L"\t");
  }
 }
 if((VAR_3 & 0x0000000f) == 2)
  FUNC_0(L"\n};\n");
}
