
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

void
FUNC_1(unsigned char *VAR_0, unsigned int VAR_1)
{
 unsigned char *VAR_2 = VAR_0;
 int VAR_3, VAR_4, VAR_5 = 0;

 while (VAR_5 < VAR_1)
 {
  FUNC_0("%04x ", VAR_5);
  VAR_4 = VAR_1 - VAR_5;
  if (VAR_4 > 16)
   VAR_4 = 16;

  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
   FUNC_0("%02x ", VAR_2[VAR_3]);

  for (; VAR_3 < 16; VAR_3++)
   FUNC_0("   ");

  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
   FUNC_0("%c", (VAR_2[VAR_3] >= 0x20 && VAR_2[VAR_3] < 0x7f) ? VAR_2[VAR_3] : '.');

  FUNC_0("\n");
  VAR_5 += VAR_4;
  VAR_2 += VAR_4;
 }
}
