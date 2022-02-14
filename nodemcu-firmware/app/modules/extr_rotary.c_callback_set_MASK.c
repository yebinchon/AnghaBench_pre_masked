
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int * callback; } ;
typedef TYPE_1__ DATA ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 TYPE_1__** VAR_1 ;

__attribute__((used)) static int FUNC_1(lua_State* VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
  DATA *VAR_6 = VAR_1[VAR_3];
  int VAR_7 = 0;

  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
    if (VAR_4 & (1 << VAR_8)) {
      VAR_7 |= FUNC_0(VAR_2, &VAR_6->callback[VAR_8], VAR_5);
    }
  }

  return VAR_7;
}
