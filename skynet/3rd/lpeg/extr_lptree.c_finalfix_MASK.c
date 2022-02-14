
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_11__ {int tag; int key; } ;
typedef TYPE_1__ TTree ;






 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,int,int ) ;
 int* VAR_0 ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void FUNC_8 (lua_State *VAR_1, int VAR_2, TTree *VAR_3, TTree *VAR_4) {
 tailcall:
  switch (VAR_4->tag) {
    case 130:
      return;
    case 129: {
      if (VAR_3 != ((void*)0))
        FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
      else {
        FUNC_4(VAR_1, -1, VAR_4->key);
        FUNC_3(VAR_1, "rule '%s' used outside a grammar", FUNC_7(VAR_1, -1));
      }
      break;
    }
    case 128: case 131:
      FUNC_1(VAR_4);
      break;
  }
  switch (VAR_0[VAR_4->tag]) {
    case 1:
      VAR_4 = FUNC_5(VAR_4); goto tailcall;
    case 2:
      FUNC_8(VAR_1, VAR_2, VAR_3, FUNC_5(VAR_4));
      VAR_4 = FUNC_6(VAR_4); goto tailcall;
    default: FUNC_0(VAR_0[VAR_4->tag] == 0); break;
  }
}
