
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mrb_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_1(char *VAR_7, size_t VAR_8, int VAR_9, int VAR_10, mrb_int VAR_11, mrb_int VAR_12)
{
  char *VAR_13 = VAR_7 + VAR_8;
  int VAR_14;

  *VAR_7++ = '%';
  if (VAR_10 & VAR_3) *VAR_7++ = '#';
  if (VAR_10 & VAR_1) *VAR_7++ = '+';
  if (VAR_10 & VAR_0) *VAR_7++ = '-';
  if (VAR_10 & VAR_6) *VAR_7++ = '0';
  if (VAR_10 & VAR_4) *VAR_7++ = ' ';

  if (VAR_10 & VAR_5) {
    VAR_14 = FUNC_0(VAR_7, VAR_13 - VAR_7, "%d", (int)VAR_11);
    VAR_7 += VAR_14;
  }

  if (VAR_10 & VAR_2) {
    VAR_14 = FUNC_0(VAR_7, VAR_13 - VAR_7, ".%d", (int)VAR_12);
    VAR_7 += VAR_14;
  }

  *VAR_7++ = VAR_9;
  *VAR_7 = '\0';
}
