
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char mpc_val_t ;
typedef char mpc_parser_t ;


 char* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char const) ;
 char* FUNC_6 (char*,int) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static mpc_val_t *FUNC_9(mpc_val_t *VAR_0) {

  mpc_parser_t *VAR_1;
  size_t VAR_2, VAR_3;
  size_t VAR_4, VAR_5;
  const char *VAR_6 = ((void*)0);
  const char *VAR_7 = VAR_0;
  int VAR_8 = VAR_7[0] == '^' ? 1 : 0;
  char *VAR_9;

  if (VAR_7[0] == '\0') { FUNC_1(VAR_0); return FUNC_2("Invalid Regex Range Expression"); }
  if (VAR_7[0] == '^' &&
      VAR_7[1] == '\0') { FUNC_1(VAR_0); return FUNC_2("Invalid Regex Range Expression"); }

  VAR_9 = FUNC_0(1,1);

  for (VAR_2 = VAR_8; VAR_2 < FUNC_8(VAR_7); VAR_2++){


    if (VAR_7[VAR_2] == '\\') {
      VAR_6 = FUNC_5(VAR_7[VAR_2+1]);
      if (VAR_6 != ((void*)0)) {
        VAR_9 = FUNC_6(VAR_9, FUNC_8(VAR_9) + FUNC_8(VAR_6) + 1);
        FUNC_7(VAR_9, VAR_6);
      } else {
        VAR_9 = FUNC_6(VAR_9, FUNC_8(VAR_9) + 1 + 1);
        VAR_9[FUNC_8(VAR_9) + 1] = '\0';
        VAR_9[FUNC_8(VAR_9) + 0] = VAR_7[VAR_2+1];
      }
      VAR_2++;
    }


    else if (VAR_7[VAR_2] == '-') {
      if (VAR_7[VAR_2+1] == '\0' || VAR_2 == 0) {
          VAR_9 = FUNC_6(VAR_9, FUNC_8(VAR_9) + FUNC_8("-") + 1);
          FUNC_7(VAR_9, "-");
      } else {
        VAR_4 = VAR_7[VAR_2-1]+1;
        VAR_5 = VAR_7[VAR_2+1]-1;
        for (VAR_3 = VAR_4; VAR_3 <= VAR_5; VAR_3++) {
          VAR_9 = FUNC_6(VAR_9, FUNC_8(VAR_9) + 1 + 1 + 1);
          VAR_9[FUNC_8(VAR_9) + 1] = '\0';
          VAR_9[FUNC_8(VAR_9) + 0] = VAR_3;
        }
      }
    }


    else {
      VAR_9 = FUNC_6(VAR_9, FUNC_8(VAR_9) + 1 + 1);
      VAR_9[FUNC_8(VAR_9) + 1] = '\0';
      VAR_9[FUNC_8(VAR_9) + 0] = VAR_7[VAR_2];
    }

  }

  VAR_1 = VAR_8 == 1 ? FUNC_3(VAR_9) : FUNC_4(VAR_9);

  FUNC_1(VAR_0);
  FUNC_1(VAR_9);

  return VAR_1;
}
