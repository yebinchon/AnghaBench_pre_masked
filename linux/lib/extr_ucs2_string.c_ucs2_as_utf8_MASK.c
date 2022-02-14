
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs2_char_t ;
typedef char u8 ;
typedef int u16 ;


 unsigned long FUNC_0 (int const*,unsigned long) ;

unsigned long
FUNC_1(u8 *VAR_0, const ucs2_char_t *VAR_1, unsigned long VAR_2)
{
 unsigned int VAR_3;
 unsigned long VAR_4 = 0;
 unsigned long VAR_5 = FUNC_0(VAR_1, VAR_2);

 for (VAR_3 = 0; VAR_2 && VAR_3 < VAR_5; VAR_3++) {
  u16 VAR_6 = VAR_1[VAR_3];

  if (VAR_6 >= 0x800) {
   if (VAR_2 < 3)
    break;
   VAR_2 -= 3;
   VAR_0[VAR_4++] = 0xe0 | (VAR_6 & 0xf000) >> 12;
   VAR_0[VAR_4++] = 0x80 | (VAR_6 & 0x0fc0) >> 6;
   VAR_0[VAR_4++] = 0x80 | (VAR_6 & 0x003f);
  } else if (VAR_6 >= 0x80) {
   if (VAR_2 < 2)
    break;
   VAR_2 -= 2;
   VAR_0[VAR_4++] = 0xc0 | (VAR_6 & 0x7c0) >> 6;
   VAR_0[VAR_4++] = 0x80 | (VAR_6 & 0x03f);
  } else {
   VAR_2 -= 1;
   VAR_0[VAR_4++] = VAR_6 & 0x7f;
  }
 }
 if (VAR_2)
  VAR_0[VAR_4] = '\0';
 return VAR_4;
}
