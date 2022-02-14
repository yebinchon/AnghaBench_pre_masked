
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int type_t ;
struct TYPE_2__ {int cval; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;

void FUNC_10(FILE *VAR_1, type_t *VAR_2, int VAR_3)
{
  if (!VAR_1) return;
  if (FUNC_8(VAR_2)) return;

  switch (FUNC_7(VAR_2))
  {
  case 140:
  {
    type_t *VAR_4 = FUNC_4(VAR_2);
    if (FUNC_5(VAR_2))
    {
      if (!FUNC_8(VAR_4) && FUNC_1(VAR_4) && !FUNC_5(VAR_4))
        FUNC_0(VAR_1, ")");
    }
    else
    {
      if (FUNC_2(VAR_2))
        FUNC_0(VAR_1, "[%s]", VAR_3 ? "1" : "");
      else
        FUNC_0(VAR_1, "[%u]", FUNC_3(VAR_2));
    }
    FUNC_10(VAR_1, VAR_4, VAR_0);
    break;
  }
  case 131:
  {
    type_t *VAR_5 = FUNC_9(VAR_2);
    if (!FUNC_8(VAR_5) && FUNC_1(VAR_5) && !FUNC_5(VAR_5))
      FUNC_0(VAR_1, ")");
    FUNC_10(VAR_1, VAR_5, VAR_0);
    break;
  }
  case 138:
    FUNC_0(VAR_1, " : %u", FUNC_6(VAR_2)->cval);
    break;
  case 128:
  case 139:
  case 135:
  case 130:
  case 136:
  case 129:
  case 141:
  case 132:
  case 137:
  case 134:
  case 133:
    break;
  }
}
