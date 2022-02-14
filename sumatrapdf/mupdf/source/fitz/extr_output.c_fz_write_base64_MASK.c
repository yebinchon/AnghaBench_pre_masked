
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_output ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,char const) ;

void
FUNC_1(fz_context *VAR_0, fz_output *VAR_1, const unsigned char *VAR_2, int VAR_3, int VAR_4)
{
 static const char VAR_5[64] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
 int VAR_6;
 for (VAR_6 = 0; VAR_6 + 3 <= VAR_3; VAR_6 += 3)
 {
  int VAR_7 = VAR_2[VAR_6];
  int VAR_8 = VAR_2[VAR_6+1];
  int VAR_9 = VAR_2[VAR_6+2];
  if (VAR_4 && (VAR_6 & 15) == 0)
   FUNC_0(VAR_0, VAR_1, '\n');
  FUNC_0(VAR_0, VAR_1, VAR_5[VAR_7>>2]);
  FUNC_0(VAR_0, VAR_1, VAR_5[((VAR_7&3)<<4)|(VAR_8>>4)]);
  FUNC_0(VAR_0, VAR_1, VAR_5[((VAR_8&15)<<2)|(VAR_9>>6)]);
  FUNC_0(VAR_0, VAR_1, VAR_5[VAR_9&63]);
 }
 if (VAR_3 - VAR_6 == 2)
 {
  int VAR_10 = VAR_2[VAR_6];
  int VAR_11 = VAR_2[VAR_6+1];
  FUNC_0(VAR_0, VAR_1, VAR_5[VAR_10>>2]);
  FUNC_0(VAR_0, VAR_1, VAR_5[((VAR_10&3)<<4)|(VAR_11>>4)]);
  FUNC_0(VAR_0, VAR_1, VAR_5[((VAR_11&15)<<2)]);
  FUNC_0(VAR_0, VAR_1, '=');
 }
 else if (VAR_3 - VAR_6 == 1)
 {
  int VAR_12 = VAR_2[VAR_6];
  FUNC_0(VAR_0, VAR_1, VAR_5[VAR_12>>2]);
  FUNC_0(VAR_0, VAR_1, VAR_5[((VAR_12&3)<<4)]);
  FUNC_0(VAR_0, VAR_1, '=');
  FUNC_0(VAR_0, VAR_1, '=');
 }
}
