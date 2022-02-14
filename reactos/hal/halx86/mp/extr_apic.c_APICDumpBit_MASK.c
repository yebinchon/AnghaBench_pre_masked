
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int ULONG ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static VOID FUNC_2(ULONG VAR_0)
{
 ULONG VAR_1, VAR_2, VAR_3;

 FUNC_1("0123456789abcdef0123456789abcdef\n");
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
 {
  VAR_1 = FUNC_0(VAR_0 + VAR_2*0x10);
  for (VAR_3 = 0; VAR_3 < 32; VAR_3++)
  {
   if (VAR_1 & (1<<VAR_3))
    FUNC_1("1");
   else
    FUNC_1("0");
  }
  FUNC_1("\n");
 }
}
