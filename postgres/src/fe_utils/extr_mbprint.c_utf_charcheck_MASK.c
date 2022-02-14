
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const unsigned char *VAR_0)
{
 if ((*VAR_0 & 0x80) == 0)
  return 1;
 else if ((*VAR_0 & 0xe0) == 0xc0)
 {

  if (((VAR_0[1] & 0xc0) == 0x80) && ((VAR_0[0] & 0x1f) > 0x01))
   return 2;
  return -1;
 }
 else if ((*VAR_0 & 0xf0) == 0xe0)
 {

  if (((VAR_0[1] & 0xc0) == 0x80) &&
   (((VAR_0[0] & 0x0f) != 0x00) || ((VAR_0[1] & 0x20) == 0x20)) &&
   ((VAR_0[2] & 0xc0) == 0x80))
  {
   int VAR_1 = VAR_0[0] & 0x0f;
   int VAR_2 = ((VAR_0[1] & 0x3f) << 6) | (VAR_0[0] & 0x3f);
   int VAR_3 = VAR_2 & 0x7f;


   if (((VAR_1 == 0x0f) &&
     (((VAR_2 & 0xffe) == 0xffe) ||
      (((VAR_2 & 0xf80) == 0xd80) && (VAR_3 >= 0x30) && (VAR_3 <= 0x4f)))) ||
    ((VAR_1 == 0x0d) && ((VAR_2 & 0xb00) == 0x800)))
    return -1;
   return 3;
  }
  return -1;
 }
 else if ((*VAR_0 & 0xf8) == 0xf0)
 {
  int VAR_4 = ((VAR_0[0] & 0x07) << 2) | ((VAR_0[1] & 0x30) >> 4);


  if (((VAR_0[1] & 0xc0) == 0x80) &&
   (VAR_4 > 0x00) && (VAR_4 <= 0x10) &&
   ((VAR_0[2] & 0xc0) == 0x80) && ((VAR_0[3] & 0xc0) == 0x80))
  {

   if (((VAR_0[1] & 0x0f) == 0x0f) && ((VAR_0[2] & 0x3f) == 0x3f) &&
    ((VAR_0[3] & 0x3e) == 0x3e))
    return -1;
   return 4;
  }
  return -1;
 }
 return -1;
}
