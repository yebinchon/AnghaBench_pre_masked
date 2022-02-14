
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_6__ {int sizearray; scalar_t__ node; int * array; } ;
typedef TYPE_1__ Table ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (int *,int *,int,int,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 int FUNC_3 (int *,TYPE_1__*,int) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6 (lua_State *VAR_2, Table *VAR_3, int VAR_4, int VAR_5) {
  int VAR_6;
  int VAR_7 = VAR_3->sizearray;
  if (VAR_4 > VAR_7)
    FUNC_3(VAR_2, VAR_3, VAR_4);
  if (VAR_3->node != VAR_1 || VAR_5>0)
    FUNC_2(VAR_2, VAR_3, VAR_5);
  if (VAR_4 < VAR_7) {
    VAR_3->sizearray = VAR_4;

    for (VAR_6=VAR_4; VAR_6<VAR_7; VAR_6++) {
      if (!FUNC_5(&VAR_3->array[VAR_6]))
        FUNC_4(VAR_2, FUNC_0(VAR_2, VAR_3, VAR_6+1), &VAR_3->array[VAR_6]);
    }

    FUNC_1(VAR_2, VAR_3->array, VAR_7, VAR_4, VAR_0);
  }
}
