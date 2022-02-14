
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* abbrev; int name; } ;
typedef TYPE_1__ LOCALECONV ;


 int FUNC_0 (char const*,int ) ;

const char* FUNC_1(const char* VAR_0, LOCALECONV* VAR_1, int VAR_2) {
  int VAR_3;
  int VAR_4;
  int VAR_5 = 0;
  int VAR_6 = VAR_2 - 1;


  while (VAR_5 <= VAR_6) {
    VAR_3 = (VAR_5 + VAR_6) / 2;

    if ((VAR_4 = FUNC_0(VAR_0, (*(VAR_1 + VAR_3)).name)) == 0)
      return (*(VAR_1 + VAR_3)).abbrev;
    else if (VAR_4 < 0)
      VAR_6 = VAR_3 - 1;
    else
      VAR_5 = VAR_3 + 1;
  }
  return VAR_0;
}
