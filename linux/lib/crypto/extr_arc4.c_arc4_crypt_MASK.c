
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct arc4_ctx {size_t* S; size_t x; size_t y; } ;



void FUNC_0(struct arc4_ctx *VAR_0, u8 *VAR_1, const u8 *VAR_2, unsigned int VAR_3)
{
 u32 *const VAR_4 = VAR_0->S;
 u32 VAR_5, VAR_6, VAR_7, VAR_8;
 u32 VAR_9, VAR_10, VAR_11;

 if (VAR_3 == 0)
  return;

 VAR_5 = VAR_0->x;
 VAR_6 = VAR_0->y;

 VAR_7 = VAR_4[VAR_5];
 VAR_6 = (VAR_6 + VAR_7) & 0xff;
 VAR_8 = VAR_4[VAR_6];

 do {
  VAR_4[VAR_6] = VAR_7;
  VAR_7 = (VAR_7 + VAR_8) & 0xff;
  VAR_4[VAR_5] = VAR_8;
  VAR_5 = (VAR_5 + 1) & 0xff;
  VAR_10 = VAR_4[VAR_5];
  VAR_9 = (VAR_6 + VAR_10) & 0xff;
  VAR_11 = VAR_4[VAR_9];
  *VAR_1++ = *VAR_2++ ^ VAR_4[VAR_7];
  if (--VAR_3 == 0)
   break;
  VAR_6 = VAR_9;
  VAR_7 = VAR_10;
  VAR_8 = VAR_11;
 } while (1);

 VAR_0->x = VAR_5;
 VAR_0->y = VAR_6;
}
