
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _args {char** libv; char** argv; int argc; int * rfp; void* verbose; int libc; void* debug; int member_0; } ;
typedef int mrb_state ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 char* FUNC_0 (int *,char*) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char**,char**,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,char**,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static int
FUNC_10(mrb_state *VAR_3, int VAR_4, char **VAR_5, struct _args *VAR_6)
{
  char **VAR_7 = VAR_5;
  static const struct _args VAR_8 = { 0 };

  *VAR_6 = VAR_8;

  for (VAR_4--,VAR_5++; VAR_4 > 0; VAR_4--,VAR_5++) {
    char *VAR_9;
    if (VAR_5[0][0] != '-') break;

    VAR_9 = VAR_5[0] + 1;
    switch (*VAR_9++) {
    case 'd':
      VAR_6->debug = VAR_2;
      break;
    case 'r':
      if (!VAR_9[0]) {
        if (VAR_4 <= 1) {
          FUNC_8("%s: No library specified for -r\n", *VAR_7);
          return VAR_0;
        }
        VAR_4--; VAR_5++;
        VAR_9 = VAR_5[0];
      }
      if (VAR_6->libc == 0) {
        VAR_6->libv = (char**)FUNC_4(VAR_3, sizeof(char*));
      }
      else {
        VAR_6->libv = (char**)FUNC_5(VAR_3, VAR_6->libv, sizeof(char*) * (VAR_6->libc + 1));
      }
      VAR_6->libv[VAR_6->libc++] = FUNC_0(VAR_3, VAR_9);
      break;
    case 'v':
      if (!VAR_6->verbose) FUNC_7(VAR_3);
      VAR_6->verbose = VAR_2;
      break;
    case '-':
      if (FUNC_9((*VAR_5) + 2, "version") == 0) {
        FUNC_7(VAR_3);
        FUNC_1(VAR_1);
      }
      else if (FUNC_9((*VAR_5) + 2, "verbose") == 0) {
        VAR_6->verbose = VAR_2;
        break;
      }
      else if (FUNC_9((*VAR_5) + 2, "copyright") == 0) {
        FUNC_6(VAR_3);
        FUNC_1(VAR_1);
      }
    default:
      return VAR_0;
    }
  }

  if (VAR_6->rfp == ((void*)0)) {
    if (*VAR_5 != ((void*)0)) {
      VAR_6->rfp = FUNC_2(VAR_5[0], "r");
      if (VAR_6->rfp == ((void*)0)) {
        FUNC_8("Cannot open program file. (%s)\n", *VAR_5);
        return VAR_0;
      }
      VAR_4--; VAR_5++;
    }
  }
  VAR_6->argv = (char **)FUNC_5(VAR_3, VAR_6->argv, sizeof(char*) * (VAR_4 + 1));
  FUNC_3(VAR_6->argv, VAR_5, (VAR_4+1) * sizeof(char*));
  VAR_6->argc = VAR_4;

  return VAR_1;
}
