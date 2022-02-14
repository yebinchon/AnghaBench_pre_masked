
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int PUCHAR ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static ULONG FUNC_2(ULONG VAR_0)
{
   if (VAR_0 < 16)
   {
      PUCHAR VAR_1 = (PUCHAR)(0x4d0 + (VAR_0 >> 3));
      return (FUNC_1(VAR_1) >> (VAR_0 & 7)) & 1;
   }
   FUNC_0("Broken MPtable reports ISA irq %d\n", VAR_0);
   return 0;
}
