
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_17__ {void* tag; } ;
struct TYPE_15__ {int ps; } ;
struct TYPE_16__ {TYPE_1__ u; void* tag; } ;
typedef TYPE_2__ TTree ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int *,int) ;
 TYPE_2__* FUNC_1 (int *,int,int*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*,int) ;
 TYPE_2__* FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (TYPE_2__*,TYPE_2__*,int) ;
 TYPE_2__* FUNC_8 (TYPE_2__*) ;
 TYPE_3__* FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_10 (lua_State *VAR_3) {
  int VAR_4;
  int VAR_5 = (int)FUNC_2(VAR_3, 2);
  TTree *VAR_6 = FUNC_1(VAR_3, 1, &VAR_4);
  if (VAR_5 >= 0) {
    TTree *VAR_7 = FUNC_5(VAR_3, (VAR_5 + 1) * (VAR_4 + 1));
    if (FUNC_6(VAR_6))
      FUNC_3(VAR_3, "loop body may accept empty string");
    while (VAR_5--)
      VAR_7 = FUNC_7(VAR_7, VAR_6, VAR_4);
    VAR_7->tag = VAR_1;
    FUNC_4(FUNC_8(VAR_7), VAR_6, VAR_4 * sizeof(TTree));
  }
  else {
    TTree *VAR_8;
    VAR_5 = -VAR_5;

    VAR_8 = FUNC_5(VAR_3, VAR_5 * (VAR_4 + 3) - 1);
    for (; VAR_5 > 1; VAR_5--) {
      VAR_8->tag = VAR_0; VAR_8->u.ps = VAR_5 * (VAR_4 + 3) - 2;
      FUNC_9(VAR_8)->tag = VAR_2;
      VAR_8 = FUNC_8(VAR_8);
      VAR_8 = FUNC_7(VAR_8, VAR_6, VAR_4);
    }
    VAR_8->tag = VAR_0; VAR_8->u.ps = VAR_4 + 1;
    FUNC_9(VAR_8)->tag = VAR_2;
    FUNC_4(FUNC_8(VAR_8), VAR_6, VAR_4 * sizeof(TTree));
  }
  FUNC_0(VAR_3, 1);
  return 1;
}
