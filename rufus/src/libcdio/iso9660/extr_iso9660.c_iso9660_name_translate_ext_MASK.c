
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (char const*) ;
 unsigned char FUNC_2 (unsigned char) ;

int
FUNC_3(const char *VAR_0, char *VAR_1,
                           uint8_t VAR_2)
{
  int VAR_3 = FUNC_1(VAR_0);
  int VAR_4;

  if (0 == VAR_3) return 0;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
    unsigned char VAR_5 = VAR_0[VAR_4];
    if (!VAR_5)
      break;


    if (!VAR_2 && FUNC_0(VAR_5)) VAR_5 = FUNC_2(VAR_5);


    if (VAR_5 == '.' && VAR_4 == VAR_3 - 3
        && VAR_0[VAR_4 + 1] == ';' && VAR_0[VAR_4 + 2] == '1')
      break;


    if (VAR_5 == ';' && VAR_4 == VAR_3 - 2 && VAR_0[VAR_4 + 1] == '1')
      break;


    if (VAR_5 == ';')
      VAR_5 = '.';

    VAR_1[VAR_4] = VAR_5;
  }
  VAR_1[VAR_4] = '\0';
  return VAR_4;
}
