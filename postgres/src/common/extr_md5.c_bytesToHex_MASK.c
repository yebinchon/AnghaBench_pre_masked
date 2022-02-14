
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;



__attribute__((used)) static void
FUNC_0(uint8 VAR_0[16], char *VAR_1)
{
 static const char *VAR_2 = "0123456789abcdef";
 int VAR_3,
    VAR_4;

 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < 16; VAR_3++)
 {
  VAR_1[VAR_4++] = VAR_2[(VAR_0[VAR_3] >> 4) & 0x0F];
  VAR_1[VAR_4++] = VAR_2[VAR_0[VAR_3] & 0x0F];
 }
 VAR_1[VAR_4] = '\0';
}
