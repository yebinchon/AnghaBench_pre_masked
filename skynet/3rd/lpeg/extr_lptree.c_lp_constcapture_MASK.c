
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_9__ {int ps; } ;
struct TYPE_10__ {void* key; TYPE_1__ u; int tag; int cap; } ;
typedef TYPE_2__ TTree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 TYPE_2__* FUNC_6 (int *,int) ;
 TYPE_2__* FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_9 (lua_State *VAR_5) {
  int VAR_6;
  int VAR_7 = FUNC_2(VAR_5);
  if (VAR_7 == 0)
    FUNC_5(VAR_5, VAR_4);
  else if (VAR_7 == 1)
    FUNC_3(VAR_5, VAR_0, 1);
  else {
    TTree *VAR_8 = FUNC_6(VAR_5, 1 + 3 * (VAR_7 - 1) + 2);
    FUNC_4(VAR_5, VAR_7);
    VAR_8->tag = VAR_2;
    VAR_8->cap = VAR_1;
    VAR_8->key = 0;
    VAR_8 = FUNC_7(VAR_8);
    for (VAR_6 = 1; VAR_6 <= VAR_7 - 1; VAR_6++) {
      VAR_8->tag = VAR_3;
      VAR_8->u.ps = 3;
      FUNC_1(FUNC_7(VAR_8), VAR_0);
      FUNC_7(VAR_8)->key = FUNC_0(VAR_5, VAR_6);
      VAR_8 = FUNC_8(VAR_8);
    }
    FUNC_1(VAR_8, VAR_0);
    VAR_8->key = FUNC_0(VAR_5, VAR_6);
  }
  return 1;
}
