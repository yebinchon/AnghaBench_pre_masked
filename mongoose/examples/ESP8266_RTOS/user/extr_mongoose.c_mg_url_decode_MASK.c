
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned char const) ;
 int FUNC_2 (unsigned char const) ;

int FUNC_3(const char *VAR_0, int VAR_1, char *VAR_2, int VAR_3,
                  int VAR_4) {
  int VAR_5, VAR_6, VAR_7, VAR_8;


  for (VAR_5 = VAR_6 = 0; VAR_5 < VAR_1 && VAR_6 < VAR_3 - 1; VAR_5++, VAR_6++) {
    if (VAR_0[VAR_5] == '%') {
      if (VAR_5 < VAR_1 - 2 && FUNC_1(*(const unsigned char *) (VAR_0 + VAR_5 + 1)) &&
          FUNC_1(*(const unsigned char *) (VAR_0 + VAR_5 + 2))) {
        VAR_7 = FUNC_2(*(const unsigned char *) (VAR_0 + VAR_5 + 1));
        VAR_8 = FUNC_2(*(const unsigned char *) (VAR_0 + VAR_5 + 2));
        VAR_2[VAR_6] = (char) (((isdigit(VAR_7) ? VAR_7 - '0' : VAR_7 - 'W') << 4) | (FUNC_0(VAR_8) ? VAR_8 - '0' : VAR_8 - 'W'));
        VAR_5 += 2;
      } else {
        return -1;
      }
    } else if (VAR_4 && VAR_0[VAR_5] == '+') {
      VAR_2[VAR_6] = ' ';
    } else {
      VAR_2[VAR_6] = VAR_0[VAR_5];
    }
  }

  VAR_2[VAR_6] = '\0';

  return VAR_5 >= VAR_1 ? VAR_6 : -1;
}
