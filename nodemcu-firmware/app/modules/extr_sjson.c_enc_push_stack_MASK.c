
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {scalar_t__ level; scalar_t__ nlevels; TYPE_1__* stack; } ;
struct TYPE_4__ {scalar_t__ offset; int size; int lua_object_ref; } ;
typedef TYPE_1__ ENC_DATA_STATE ;
typedef TYPE_2__ ENC_DATA ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(lua_State *VAR_0, ENC_DATA *VAR_1, int VAR_2) {
  if (++VAR_1->level >= VAR_1->nlevels) {
    FUNC_0(VAR_0, "encoder stack overflow");
  }
  FUNC_1(VAR_0, VAR_2);
  ENC_DATA_STATE *VAR_3 = &VAR_1->stack[VAR_1->level];
  VAR_3->lua_object_ref = FUNC_2(VAR_0, 1);
  VAR_3->size = FUNC_3(VAR_0, VAR_2);
  VAR_3->offset = 0;
}
