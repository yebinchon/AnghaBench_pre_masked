
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 size_t FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 size_t FUNC_2 (char*,char*,int) ;

__attribute__((used)) static char *FUNC_3(off_t VAR_0)
{
 const char * const VAR_1 = "BKMGTPEZY";
 static char VAR_2[12];
 off_t VAR_3 = 0;
 size_t VAR_4;
 int VAR_5 = 0;

 while (VAR_0 >= 1024) {
  VAR_3 = VAR_0 & (0x3FF);
  VAR_0 >>= 10;
  ++VAR_5;
 }

 if (VAR_5 == 1) {
  VAR_3 = (VAR_3 * 1000) >> 10;

  VAR_3 /= 10;
  if (VAR_3 % 10 >= 5) {
   VAR_3 = (VAR_3 / 10) + 1;
   if (VAR_3 == 10) {
    ++VAR_0;
    VAR_3 = 0;
   }
  } else
   VAR_3 /= 10;
 } else if (VAR_5 == 2) {
  VAR_3 = (VAR_3 * 1000) >> 10;

  if (VAR_3 % 10 >= 5) {
   VAR_3 = (VAR_3 / 10) + 1;
   if (VAR_3 == 100) {
    ++VAR_0;
    VAR_3 = 0;
   }
  } else
   VAR_3 /= 10;
 } else if (VAR_5 > 0) {
  VAR_3 = (VAR_3 * 10000) >> 10;

  if (VAR_3 % 10 >= 5) {
   VAR_3 = (VAR_3 / 10) + 1;
   if (VAR_3 == 1000) {
    ++VAR_0;
    VAR_3 = 0;
   }
  } else
   VAR_3 /= 10;
 }

 if (VAR_5 > 0 && VAR_5 < 6 && VAR_3) {
  VAR_4 = FUNC_2(VAR_2, FUNC_1(VAR_0), 12);
  VAR_2[VAR_4 - 1] = '.';

  char *VAR_6 = FUNC_1(VAR_3);
  size_t VAR_7 = VAR_5 > 3 ? 3 : VAR_5;
  size_t VAR_8 = FUNC_0(VAR_6);

  if (VAR_8 < VAR_7) {
   VAR_2[VAR_4] = VAR_2[VAR_4 + 1] = VAR_2[VAR_4 + 2] = '0';
   FUNC_2(VAR_2 + VAR_4 + (VAR_7 - VAR_8), VAR_6, VAR_8 + 1);
  } else
   FUNC_2(VAR_2 + VAR_4, VAR_6, VAR_7 + 1);

  VAR_4 += VAR_7;
 } else {
  VAR_4 = FUNC_2(VAR_2, VAR_0 ? FUNC_1(VAR_0) : "0", 12);
  --VAR_4;
 }

 VAR_2[VAR_4] = VAR_1[VAR_5];
 VAR_2[VAR_4 + 1] = '\0';

 return VAR_2;
}
