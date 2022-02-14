
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uchar_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, uchar_t *VAR_1)
{
 const unsigned char *VAR_2 = (const unsigned char*) VAR_0;

 FUNC_0(FUNC_1(VAR_0));

 if (VAR_2[0] <= 0x7F) {

  *VAR_1 = VAR_2[0];
  return 1;
 } else if (VAR_2[0] <= 0xDF) {

  *VAR_1 = ((uchar_t)VAR_2[0] & 0x1F) << 6 |
         ((uchar_t)VAR_2[1] & 0x3F);
  return 2;
 } else if (VAR_2[0] <= 0xEF) {

  *VAR_1 = ((uchar_t)VAR_2[0] & 0xF) << 12 |
         ((uchar_t)VAR_2[1] & 0x3F) << 6 |
         ((uchar_t)VAR_2[2] & 0x3F);
  return 3;
 } else {

  *VAR_1 = ((uchar_t)VAR_2[0] & 0x7) << 18 |
         ((uchar_t)VAR_2[1] & 0x3F) << 12 |
         ((uchar_t)VAR_2[2] & 0x3F) << 6 |
         ((uchar_t)VAR_2[3] & 0x3F);
  return 4;
 }
}
