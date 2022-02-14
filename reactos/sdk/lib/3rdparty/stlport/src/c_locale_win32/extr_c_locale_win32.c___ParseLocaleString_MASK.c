
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,size_t,char const*,size_t) ;
 size_t FUNC_1 (char const*,char*) ;

int FUNC_2(const char* VAR_3,
                        char* VAR_4, char* VAR_5, char* VAR_6) {
  int VAR_7 = 0;
  size_t VAR_8;
  size_t VAR_9;

  if (VAR_3[0] == 0)
    return 0;


  VAR_8 = FUNC_1(VAR_3, "_");
  if (VAR_3[VAR_8] == '_') {
    if (VAR_8 == 0 || VAR_8 > VAR_2) return -1;
    FUNC_0(VAR_4, VAR_2 + 1, VAR_3, VAR_8);
    VAR_3 += VAR_8 + 1;
    ++VAR_7;
  }


  VAR_8 = -1;
  VAR_9 = FUNC_1(VAR_3, ".");
  while (VAR_3[VAR_9] == '.') {
    VAR_8 = VAR_9; ++VAR_9;
    VAR_9 += FUNC_1(VAR_3 + VAR_9, ".");
  }
  if (VAR_8 != -1) {
    if (VAR_7 == 0) {

      if (VAR_8 > VAR_2) return -1;
      if (VAR_8 == 0) {

        ++VAR_7;
      }
      else
      { FUNC_0(VAR_4, VAR_2 + 1, VAR_3, VAR_8); }
      ++VAR_7;
    }
    else {

      if (VAR_8 == 0) return -1;
      if (VAR_8 > VAR_1) return -1;
      FUNC_0(VAR_5, VAR_1 + 1, VAR_3, VAR_8);
    }
    ++VAR_7;
    VAR_3 += VAR_8 + 1;
  }


  VAR_8 = FUNC_1(VAR_3, ",");
  switch (VAR_7) {
    case 0:
      if (VAR_8 > VAR_2) return -1;
      FUNC_0(VAR_4, VAR_2 + 1, VAR_3, VAR_8);
      break;
    case 1:
      if (VAR_8 > VAR_1) return -1;
      FUNC_0(VAR_5, VAR_1 + 1, VAR_3, VAR_8);
      break;
    default:
      if (VAR_8 > VAR_0) return -1;
      FUNC_0(VAR_6, VAR_0 + 1, VAR_3, VAR_8);
      break;
  }


  return 0;
}
