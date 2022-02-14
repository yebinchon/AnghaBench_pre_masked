
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int grub_uint8_t ;
typedef int grub_uint32_t ;
typedef scalar_t__ grub_size_t ;



grub_size_t
FUNC_0 (grub_uint32_t *VAR_0, grub_size_t VAR_1,
     const grub_uint8_t *VAR_2, grub_size_t VAR_3,
     const grub_uint8_t **VAR_4)
{
  grub_uint32_t *VAR_5 = VAR_0;
  int VAR_6 = 0;
  grub_uint32_t VAR_7 = 0;

  if (VAR_4)
    *VAR_4 = VAR_2;

  while (VAR_3 && VAR_1)
    {
      grub_uint32_t VAR_8 = *VAR_2++;
      if (VAR_3 != (grub_size_t)-1)
 VAR_3--;
      if (VAR_6)
 {
   if ((VAR_8 & 0xc0) != 0x80)
     {

       VAR_7 = '?';

       VAR_2--;
       if (VAR_3 != (grub_size_t)-1)
  VAR_3++;
       VAR_6 = 0;
     }
   else
     {
       VAR_7 <<= 6;
       VAR_7 |= (VAR_8 & 0x3f);
       VAR_6--;
     }
 }
      else
 {
   if (VAR_8 == 0)
     break;

   if ((VAR_8 & 0x80) == 0x00)
     VAR_7 = VAR_8;
   else if ((VAR_8 & 0xe0) == 0xc0)
     {
       VAR_6 = 1;
       VAR_7 = VAR_8 & 0x1f;
     }
   else if ((VAR_8 & 0xf0) == 0xe0)
     {
       VAR_6 = 2;
       VAR_7 = VAR_8 & 0x0f;
     }
   else if ((VAR_8 & 0xf8) == 0xf0)
     {
       VAR_6 = 3;
       VAR_7 = VAR_8 & 0x07;
     }
   else if ((VAR_8 & 0xfc) == 0xf8)
     {
       VAR_6 = 4;
       VAR_7 = VAR_8 & 0x03;
     }
   else if ((VAR_8 & 0xfe) == 0xfc)
     {
       VAR_6 = 5;
       VAR_7 = VAR_8 & 0x01;
     }
   else
     {

       VAR_7 = '?';
       VAR_6 = 0;
     }
 }

      if (VAR_6 == 0)
 {
   *VAR_5++ = VAR_7;
   VAR_1--;
 }
    }

  if (VAR_4)
    *VAR_4 = VAR_2;
  return VAR_5 - VAR_0;
}
