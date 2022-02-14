
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static VOID
FUNC_1(unsigned char *VAR_0)
{
  unsigned char VAR_1;
  unsigned char VAR_2;
  int VAR_3;

  VAR_1 = *VAR_0;
  VAR_0++;
  VAR_2 = *VAR_0;

  FUNC_0("      DMAs:");

  for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
    {
      if (VAR_1 & (1 << VAR_3))
 {
   FUNC_0(" %u", VAR_3);
 }
    }

  FUNC_0("\n");
}
