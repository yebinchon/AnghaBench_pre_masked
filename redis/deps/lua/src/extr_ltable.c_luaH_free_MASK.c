
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {scalar_t__ node; scalar_t__ array; int sizearray; } ;
typedef TYPE_1__ Table ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,scalar_t__,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3 (lua_State *VAR_3, Table *VAR_4) {
  if (VAR_4->node != VAR_2)
    FUNC_1(VAR_3, VAR_4->node, FUNC_2(VAR_4), VAR_0);
  FUNC_1(VAR_3, VAR_4->array, VAR_4->sizearray, VAR_1);
  FUNC_0(VAR_3, VAR_4);
}
