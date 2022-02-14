
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct arc4_ctx {int x; int* S; scalar_t__ y; } ;



int FUNC_0(struct arc4_ctx *VAR_0, const u8 *VAR_1, unsigned int VAR_2)
{
 int VAR_3, VAR_4 = 0, VAR_5 = 0;

 VAR_0->x = 1;
 VAR_0->y = 0;

 for (VAR_3 = 0; VAR_3 < 256; VAR_3++)
  VAR_0->S[VAR_3] = VAR_3;

 for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
  u32 VAR_6 = VAR_0->S[VAR_3];

  VAR_4 = (VAR_4 + VAR_1[VAR_5] + VAR_6) & 0xff;
  VAR_0->S[VAR_3] = VAR_0->S[VAR_4];
  VAR_0->S[VAR_4] = VAR_6;
  if (++VAR_5 >= VAR_2)
   VAR_5 = 0;
 }

 return 0;
}
