
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef long mrb_int ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 long FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,long) ;
 int FUNC_3 (int *,int ,long) ;

__attribute__((used)) static int
FUNC_4(mrb_state *VAR_2, mrb_value VAR_3, mrb_value VAR_4, mrb_int VAR_5, long VAR_6, unsigned int VAR_7)
{
  mrb_int VAR_8, VAR_9, VAR_10;
  char *VAR_11, *VAR_12, VAR_13, *VAR_14;

  VAR_14 = FUNC_1(VAR_3);
  VAR_9 = FUNC_0(VAR_3);

  if ((VAR_7 & VAR_1) || (VAR_7 & VAR_0))
    VAR_13 = '\0';
  else
    VAR_13 = ' ';

  if (VAR_6 == 0) {
    return 0;
  } else if (VAR_6 == -1) {
    VAR_8 = VAR_9;
    VAR_10 = (VAR_7 & VAR_0) ? 1 : 0;
  } else if (VAR_6 < VAR_9) {
    VAR_8 = VAR_6;
    VAR_10 = 0;
  } else {
    VAR_8 = VAR_9;
    VAR_10 = VAR_6 - VAR_9;
  }

  VAR_4 = FUNC_3(VAR_2, VAR_4, VAR_5 + VAR_8 + VAR_10);
  VAR_12 = VAR_11 = FUNC_1(VAR_4) + VAR_5;
  FUNC_2(VAR_11, VAR_14, VAR_8);
  VAR_11 += VAR_8;
  while (VAR_10-- > 0) {
    *VAR_11++ = VAR_13;
  }

  return (int)(VAR_11 - VAR_12);
}
