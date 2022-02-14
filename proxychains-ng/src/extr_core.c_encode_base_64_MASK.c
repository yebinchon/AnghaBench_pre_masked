
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, char *VAR_1, int VAR_2) {
 static const char VAR_3[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
 int VAR_4, VAR_5, VAR_6;
 VAR_5 = FUNC_0(VAR_0);
 VAR_2 = (VAR_2 - 1) / 4;
 for(VAR_6 = 0; VAR_6 < VAR_2; VAR_6++, VAR_0 += 3, VAR_5 -= 3) {
  switch (VAR_5) {
   case 0:
    break;
   case 1:
    VAR_4 = VAR_0[0] << 16;
    *VAR_1++ = VAR_3[(VAR_4 >> 18) & 077];
    *VAR_1++ = VAR_3[(VAR_4 >> 12) & 077];
    *VAR_1++ = '=';
    *VAR_1++ = '=';
    break;
   case 2:
    VAR_4 = VAR_0[0] << 16 | VAR_0[1] << 8;
    *VAR_1++ = VAR_3[(VAR_4 >> 18) & 077];
    *VAR_1++ = VAR_3[(VAR_4 >> 12) & 077];
    *VAR_1++ = VAR_3[(VAR_4 >> 6) & 077];
    *VAR_1++ = '=';
    break;
   default:
    VAR_4 = VAR_0[0] << 16 | VAR_0[1] << 8 | VAR_0[2];
    *VAR_1++ = VAR_3[(VAR_4 >> 18) & 077];
    *VAR_1++ = VAR_3[(VAR_4 >> 12) & 077];
    *VAR_1++ = VAR_3[(VAR_4 >> 6) & 077];
    *VAR_1++ = VAR_3[VAR_4 & 077];
  }
  if(VAR_5 < 3)
   break;
 }
 *VAR_1++ = 0;
}
