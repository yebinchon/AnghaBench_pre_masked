
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int int64_t ;


 int FUNC_0 (char) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1(char *VAR_1, size_t VAR_2, int64_t VAR_3, int VAR_4, int VAR_5,
                  int VAR_6) {
  char VAR_7[40];
  int VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;

  if (VAR_3 < 0) {
    VAR_10++;
    VAR_3 = -VAR_3;
  }


  do {
    int VAR_11 = VAR_3 % VAR_4;
    if (VAR_11 < 10) {
      VAR_7[VAR_9++] = '0' + VAR_11;
    } else {
      VAR_7[VAR_9++] = 'a' + (VAR_11 - 10);
    }
    VAR_3 /= VAR_4;
  } while (VAR_3 > 0);


  if (VAR_5 && VAR_0) {
    while (VAR_9 < VAR_6 && VAR_9 < (int) sizeof(VAR_7) - 1) {
      VAR_7[VAR_9++] = '0';
    }
  }


  if (VAR_10) {
    VAR_7[VAR_9++] = '-';
  }


  while (--VAR_9 >= 0) {
    FUNC_0(VAR_7[VAR_9]);
  }

  return VAR_8;
}
