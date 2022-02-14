
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 scalar_t__ FUNC_0 (char const) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_1 (char const*,char,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,char const*,int ) ;

__attribute__((used)) static int
FUNC_4(mrb_state *VAR_2, const void *VAR_3, int VAR_4, mrb_value VAR_5, long VAR_6, unsigned int VAR_7)
{
  mrb_value VAR_8;
  const char *VAR_9, *VAR_10;
  int VAR_11;

  VAR_10 = (const char *)VAR_3;
  if (VAR_6 != -1 && VAR_6 < VAR_4) {
    VAR_4 = VAR_6;
  }
  VAR_11 = VAR_4;

  if (VAR_4 >= 0 && VAR_7 & VAR_0) {
    if ((VAR_9 = (const char *)FUNC_1(VAR_10, '\0', VAR_4)) != ((void*)0)) {
      VAR_11 = (int)(VAR_9 - VAR_10);
      if (VAR_6 == -1) {
        VAR_4 = VAR_11 + 1;
      }
    }
  }
  else if (!(VAR_7 & VAR_1)) {
    while (VAR_11 > 0 && (VAR_10[VAR_11 - 1] == '\0' || FUNC_0(VAR_10[VAR_11 - 1]))) {
      VAR_11--;
    }
  }

  if (VAR_11 < 0) VAR_11 = 0;
  VAR_8 = FUNC_3(VAR_2, VAR_10, (mrb_int)VAR_11);
  FUNC_2(VAR_2, VAR_5, VAR_8);
  return VAR_4;
}
