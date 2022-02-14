
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 char FUNC_1 (unsigned char) ;

__attribute__((used)) static size_t FUNC_2(char *VAR_0, size_t VAR_1, char **VAR_2,
                                  size_t *VAR_3) {
  unsigned char *VAR_4 = (unsigned char *) VAR_0;
  size_t VAR_5 = 0;
  size_t VAR_6 = 0;


  while (VAR_6 < VAR_1 && FUNC_0(VAR_4[VAR_6])) {
    VAR_5 *= 16;
    VAR_5 += (VAR_4[VAR_6] >= '0' && VAR_4[VAR_6] <= '9') ? VAR_4[VAR_6] - '0' : FUNC_1(VAR_4[VAR_6]) - 'a' + 10;
    VAR_6++;
    if (VAR_6 > 6) {

      return 0;
    }
  }


  if (VAR_6 == 0 || VAR_6 + 2 > VAR_1 || VAR_4[VAR_6] != '\r' || VAR_4[VAR_6 + 1] != '\n') {
    return 0;
  }
  VAR_6 += 2;


  *VAR_2 = (char *) VAR_4 + VAR_6;
  *VAR_3 = VAR_5;


  VAR_6 += VAR_5;


  if (VAR_6 == 0 || VAR_6 + 2 > VAR_1 || VAR_4[VAR_6] != '\r' || VAR_4[VAR_6 + 1] != '\n') {
    return 0;
  }
  return VAR_6 + 2;
}
