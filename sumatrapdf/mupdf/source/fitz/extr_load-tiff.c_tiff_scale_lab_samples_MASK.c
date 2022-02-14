
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;



__attribute__((used)) static void
FUNC_0(fz_context *VAR_0, unsigned char *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 if (VAR_2 == 8)
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++, VAR_1 += 3)
  {
   VAR_1[1] ^= 128;
   VAR_1[2] ^= 128;
  }
 else if (VAR_2 == 16)
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++, VAR_1 += 6)
  {
   VAR_1[2] ^= 128;
   VAR_1[4] ^= 128;
  }
}
