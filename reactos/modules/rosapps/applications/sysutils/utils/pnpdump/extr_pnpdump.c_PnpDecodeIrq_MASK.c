
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef unsigned char USHORT ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static VOID
FUNC_1(unsigned char *VAR_0)
{
  USHORT VAR_1;
  int VAR_2;

  VAR_1 = *VAR_0;
  VAR_0++;
  VAR_1 |= (*VAR_0 << 8);

  FUNC_0("      IRQs:");

  for (VAR_2 = 0; VAR_2 < 16; VAR_2++)
    {
      if (VAR_1 & (1 << VAR_2))
 {
   FUNC_0(" %u", VAR_2);
 }
    }

  FUNC_0("\n");
}
