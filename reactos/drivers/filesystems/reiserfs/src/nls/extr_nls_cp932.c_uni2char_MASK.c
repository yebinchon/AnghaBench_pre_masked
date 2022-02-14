
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char** VAR_2 ;

__attribute__((used)) static int FUNC_0(const wchar_t VAR_3,
      unsigned char *VAR_4, int VAR_5)
{
 unsigned char *VAR_6;
 unsigned char VAR_7 = VAR_3&0xFF;
 unsigned char VAR_8 = (VAR_3>>8)&0xFF;

 if (VAR_5 <= 0)
  return -VAR_1;

 if (VAR_8 == 0xFF && 0x61 <= VAR_7 && VAR_7 <= 0x9F) {
  VAR_4[0] = VAR_7 + 0x40;
  return 1;
 }
 VAR_6 = VAR_2[VAR_8];
 if (VAR_6) {
  if (VAR_5 < 2)
   return -VAR_1;

  VAR_4[0] = VAR_6[VAR_7*2];
  VAR_4[1] = VAR_6[VAR_7*2+1];
  if (VAR_4[0] == 0x00 && VAR_4[1] == 0x00)
   return -VAR_0;
  return 2;
 } else if ((VAR_8 == 0) && (VAR_7 <= 0x7F)) {
  VAR_4[0] = VAR_7;
  return 1;
 }
 else
  return -VAR_0;
}
