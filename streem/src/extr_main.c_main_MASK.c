
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int strm_value ;
typedef int strm_array ;
struct TYPE_8__ {int lval; } ;
typedef TYPE_1__ parser_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,char const*,char const) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,char const*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int *,int) ;
 int * FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 void* VAR_6 ;
 int FUNC_15 (char const*,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *,char*,int ) ;

int
FUNC_18(int VAR_7, const char**VAR_8)
{
  const char *VAR_9 = VAR_8[0];
  const char *VAR_10 = ((void*)0);
  int VAR_11, VAR_12 = 0, VAR_13 = VAR_2, VAR_14 = VAR_2;
  parser_state VAR_15;

  while (VAR_7 > 1 && VAR_8[1][0] == '-') {
    const char *VAR_16 = VAR_8[1]+1;
    while (*VAR_16) {
      switch (*VAR_16) {
      case 'v':
        VAR_13 = VAR_3;

      case 'w':
        VAR_6 = VAR_3;
        break;
      case 'c':
        VAR_14 = VAR_3;
        break;
      case 'e':
        if (VAR_16[1] == '\0') {
          VAR_10 = VAR_8[2];
          VAR_7--; VAR_8++;
        }
        else {
          VAR_10 = &VAR_16[1];
        }
        goto next_arg;
      default:
        FUNC_1(VAR_4, "%s: unknown option -%c\n", VAR_9, *VAR_16);
      }
      VAR_16++;
    }
  next_arg:
    VAR_7--; VAR_8++;
  }
  FUNC_4(&VAR_15);

  if (VAR_10) {
    VAR_12 += FUNC_6(&VAR_15, VAR_10);
  }
  else if (VAR_7 == 1) {
    VAR_12 = FUNC_5(&VAR_15, VAR_5, "stdin");
  }
  else {
    for (VAR_11=1; VAR_11<VAR_7; VAR_11++) {
      VAR_12 += FUNC_2(&VAR_15, VAR_8[VAR_11]);
    }
  }

  if (VAR_12 == 0) {
    if (VAR_13) {
      FUNC_0(VAR_15.lval, 0);
    }
    if (VAR_14) {
      FUNC_9("Syntax OK");
    }
    else {
      strm_array VAR_17 = FUNC_11(((void*)0), VAR_7);
      strm_value* VAR_18 = FUNC_12(VAR_17);
      int VAR_19;

      for (VAR_19=0; VAR_19<VAR_7; VAR_19++) {
        VAR_18[VAR_19] = FUNC_16(FUNC_15(VAR_8[VAR_19], FUNC_10(VAR_8[VAR_19])));
      }
      FUNC_17(((void*)0), "ARGV", FUNC_13(VAR_17));
      FUNC_7(&VAR_15);
      FUNC_14();
      FUNC_8();
    }
  }
  else if (VAR_14) {
    FUNC_9("Syntax NG");
  }
  FUNC_3(&VAR_15);
  return VAR_12 > 0 ? VAR_0 : VAR_1;
}
