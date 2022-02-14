
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int * callback; } ;
typedef TYPE_1__ DATA ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 TYPE_1__** VAR_1 ;

__attribute__((used)) static void FUNC_1(lua_State* VAR_2, unsigned int VAR_3, int VAR_4)
{
  DATA *VAR_5 = VAR_1[VAR_3];

  if (VAR_5) {
    int VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
      if (VAR_4 & (1 << VAR_6)) {
 FUNC_0(VAR_2, &VAR_5->callback[VAR_6]);
      }
    }
  }
}
