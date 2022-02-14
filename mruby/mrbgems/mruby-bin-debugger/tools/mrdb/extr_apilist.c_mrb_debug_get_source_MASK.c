
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* dbg; } ;
typedef TYPE_2__ mrdb_state ;
typedef int mrb_state ;
struct TYPE_4__ {int irep; } ;
typedef int FILE ;


 char* FUNC_0 (int *,char const*,char const*) ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,void*) ;
 char* FUNC_6 (char const*,char) ;

char*
FUNC_7(mrb_state *VAR_0, mrdb_state *VAR_1, const char *VAR_2, const char *VAR_3)
{
  int VAR_4;
  FILE *VAR_5;
  const char *VAR_6[3];
  char *VAR_7 = ((void*)0);
  const char *VAR_8 = FUNC_6(VAR_3, '/');

  if (VAR_8) VAR_8++;
  else VAR_8 = VAR_3;

  VAR_6[0] = VAR_2;
  VAR_6[1] = FUNC_1(VAR_0, FUNC_4(VAR_0, VAR_1->dbg->irep, 0));
  VAR_6[2] = ".";

  for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
    if (VAR_6[VAR_4] == ((void*)0)) {
      continue;
    }

    if ((VAR_7 = FUNC_0(VAR_0, VAR_6[VAR_4], VAR_8)) == ((void*)0)) {
      continue;
    }

    if ((VAR_5 = FUNC_3(VAR_7, "rb")) == ((void*)0)) {
      FUNC_5(VAR_0, VAR_7);
      VAR_7 = ((void*)0);
      continue;
    }
    FUNC_2(VAR_5);
    break;
  }

  FUNC_5(VAR_0, (void *)VAR_6[1]);

  return VAR_7;
}
