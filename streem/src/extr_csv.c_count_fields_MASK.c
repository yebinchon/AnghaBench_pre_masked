
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_string ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(strm_string VAR_0, char VAR_1)
{
  const char *VAR_2 = FUNC_1(VAR_0);
  const char *VAR_3 = VAR_2 + FUNC_0(VAR_0);
  int VAR_4, VAR_5 = 0;

  for (VAR_4 = 1; VAR_2<VAR_3; VAR_2++) {
    if (VAR_5) {
      if (VAR_2[0] == '\"') {
        if (VAR_2[1] == '\"') {
          VAR_2++;
          continue;
        }
        VAR_5 = 0;
      }
      continue;
    }

    switch(*VAR_2) {
    case '\"':
      VAR_5 = 1;
      continue;
    case ',':
    case '\t':
      if (*VAR_2 == VAR_1)
        VAR_4++;
      continue;
    default:
      continue;
    }
  }

  if (VAR_5)
    return -1;

  return VAR_4;
}
