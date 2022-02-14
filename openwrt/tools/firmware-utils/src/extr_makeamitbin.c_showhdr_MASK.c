
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

void FUNC_1(unsigned char *VAR_0)
{
 int VAR_1, VAR_2;
 for (VAR_2 = 0; VAR_2 < 5; VAR_2++)
 {
  for (VAR_1 = 0; VAR_1 < 16; VAR_1++)
  {
   FUNC_0("%02x ", (unsigned int)(VAR_0[VAR_2 * 16 + VAR_1]));
  }
  FUNC_0("   ");
  for (VAR_1 = 0; VAR_1 < 16; VAR_1++)
  {
   unsigned char VAR_3 = VAR_0[VAR_2 * 16 + VAR_1];
   FUNC_0("%c", (VAR_3 >= ' ' && VAR_3 < 127) ? VAR_3 : '.');
  }
  FUNC_0("\n");
 }
}
