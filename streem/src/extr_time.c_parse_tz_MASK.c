
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_int ;


 int VAR_0 ;
 int FUNC_0 (char const**,char const*) ;

__attribute__((used)) static int
FUNC_1(const char* VAR_1, strm_int VAR_2)
{
  int VAR_3, VAR_4;
  char VAR_5;
  const char* VAR_6 = VAR_1+VAR_2;

  switch (VAR_1[0]) {
  case 'Z':
    return 0;
  case '+':
  case '-':
    VAR_5 = *VAR_1++;
    VAR_3 = FUNC_0(&VAR_1, VAR_6);
    if (VAR_3 < 0) return VAR_0;
    if (*VAR_1 == ':') {
      VAR_1++;
      VAR_4 = FUNC_0(&VAR_1, VAR_6);
    }
    else if (VAR_3 >= 100) {
      int VAR_7 = VAR_3;
      VAR_3 = VAR_7 / 100;
      VAR_4 = VAR_7 % 100;
    }
    else {
      VAR_4 = 0;
    }
    if (VAR_3 > 14) return VAR_0;
    if (VAR_4 > 59) return VAR_0;
    return (VAR_3*60+VAR_4) * (VAR_5 == '-' ? -1 : 1) * 60;
  default:
    return VAR_0;
  }
}
