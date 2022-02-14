
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_12__ {int ps; } ;
struct TYPE_13__ {int cap; int tag; TYPE_1__ u; scalar_t__ key; } ;
typedef TYPE_2__ TTree ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int,int*) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_2 (int *,int,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5 (lua_State *VAR_2, TTree *VAR_3, int VAR_4, int VAR_5) {
  int VAR_6;
  TTree *VAR_7 = FUNC_3(VAR_3);
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
    int VAR_8 = VAR_4 + 2*VAR_6 + 1;
    int VAR_9;
    TTree *VAR_10 = FUNC_0(VAR_2, VAR_8, &VAR_9);
    VAR_7->tag = VAR_0;
    VAR_7->key = 0;
    VAR_7->cap = VAR_6;
    VAR_7->u.ps = VAR_9 + 1;
    FUNC_1(FUNC_3(VAR_7), VAR_10, VAR_9 * sizeof(TTree));
    FUNC_2(VAR_2, VAR_8, FUNC_3(VAR_7));
    VAR_7 = FUNC_4(VAR_7);
  }
  VAR_7->tag = VAR_1;
}
