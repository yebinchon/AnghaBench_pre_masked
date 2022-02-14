
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char*,...) ;
 scalar_t__ FUNC_1 (char*) ;

int FUNC_2(unsigned int VAR_0, char *VAR_1, int VAR_2){
  static const char *VAR_3[] = { "zero", "one", "two", "three", "four", "five",
                  "six", "seven", "eight", "nine", "ten", "eleven", "twelve",
                  "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
                  "eighteen", "nineteen" };
  static const char *VAR_4[] = { "", "ten", "twenty", "thirty", "forty",
                 "fifty", "sixty", "seventy", "eighty", "ninety" };
  int VAR_5 = 0;

  if( VAR_0>=1000000000 ){
    VAR_5 += FUNC_2(VAR_0/1000000000, VAR_1+VAR_5, VAR_2-VAR_5);
    FUNC_0(VAR_2-VAR_5, VAR_1+VAR_5, " billion");
    VAR_5 += (int)FUNC_1(VAR_1+VAR_5);
    VAR_0 = VAR_0 % 1000000000;
  }
  if( VAR_0>=1000000 ){
    if( VAR_5 && VAR_5<VAR_2-1 ) VAR_1[VAR_5++] = ' ';
    VAR_5 += FUNC_2(VAR_0/1000000, VAR_1+VAR_5, VAR_2-VAR_5);
    FUNC_0(VAR_2-VAR_5, VAR_1+VAR_5, " million");
    VAR_5 += (int)FUNC_1(VAR_1+VAR_5);
    VAR_0 = VAR_0 % 1000000;
  }
  if( VAR_0>=1000 ){
    if( VAR_5 && VAR_5<VAR_2-1 ) VAR_1[VAR_5++] = ' ';
    VAR_5 += FUNC_2(VAR_0/1000, VAR_1+VAR_5, VAR_2-VAR_5);
    FUNC_0(VAR_2-VAR_5, VAR_1+VAR_5, " thousand");
    VAR_5 += (int)FUNC_1(VAR_1+VAR_5);
    VAR_0 = VAR_0 % 1000;
  }
  if( VAR_0>=100 ){
    if( VAR_5 && VAR_5<VAR_2-1 ) VAR_1[VAR_5++] = ' ';
    FUNC_0(VAR_2-VAR_5, VAR_1+VAR_5, "%s hundred", VAR_3[VAR_0/100]);
    VAR_5 += (int)FUNC_1(VAR_1+VAR_5);
    VAR_0 = VAR_0 % 100;
  }
  if( VAR_0>=20 ){
    if( VAR_5 && VAR_5<VAR_2-1 ) VAR_1[VAR_5++] = ' ';
    FUNC_0(VAR_2-VAR_5, VAR_1+VAR_5, "%s", VAR_4[VAR_0/10]);
    VAR_5 += (int)FUNC_1(VAR_1+VAR_5);
    VAR_0 = VAR_0 % 10;
  }
  if( VAR_0>0 ){
    if( VAR_5 && VAR_5<VAR_2-1 ) VAR_1[VAR_5++] = ' ';
    FUNC_0(VAR_2-VAR_5, VAR_1+VAR_5, "%s", VAR_3[VAR_0]);
    VAR_5 += (int)FUNC_1(VAR_1+VAR_5);
  }
  if( VAR_5==0 ){
    FUNC_0(VAR_2-VAR_5, VAR_1+VAR_5, "zero");
    VAR_5 += (int)FUNC_1(VAR_1+VAR_5);
  }
  return VAR_5;
}
