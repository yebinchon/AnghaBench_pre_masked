
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char mpc_val_t ;


 char* FUNC_0 (int,int) ;
 char* FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static mpc_val_t *FUNC_4(mpc_val_t *VAR_0, const char *VAR_1, const char **VAR_2) {

  int VAR_3;
  int VAR_4 = 0;
  char VAR_5[2];
  char *VAR_6 = VAR_0;
  char *VAR_7 = FUNC_0(1, 1);

  while (*VAR_6) {

    VAR_3 = 0;
    VAR_4 = 0;

    while (VAR_2[VAR_3]) {
      if ((*(VAR_6+0)) == VAR_2[VAR_3][0] &&
          (*(VAR_6+1)) == VAR_2[VAR_3][1]) {
        VAR_7 = FUNC_1(VAR_7, FUNC_3(VAR_7) + 1 + 1);
        VAR_5[0] = VAR_1[VAR_3]; VAR_5[1] = '\0';
        FUNC_2(VAR_7, VAR_5);
        VAR_4 = 1;
        VAR_6++;
        break;
      }
      VAR_3++;
    }

    if (!VAR_4) {
      VAR_7 = FUNC_1(VAR_7, FUNC_3(VAR_7) + 1 + 1);
      VAR_5[0] = *VAR_6; VAR_5[1] = '\0';
      FUNC_2(VAR_7, VAR_5);
    }

    if (*VAR_6 == '\0') { break; }
    else { VAR_6++; }
  }

  return VAR_7;

}
