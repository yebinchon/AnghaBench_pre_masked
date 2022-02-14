
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int const uint8 ;
struct TYPE_4__ {size_t Subtype; } ;
struct TYPE_5__ {TYPE_1__ framectrl; } ;
typedef TYPE_2__ management_request_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int const*,int const) ;
 int* VAR_0 ;

__attribute__((used)) static bool FUNC_1(lua_State *VAR_1, management_request_t *VAR_2,
    const uint8 *VAR_3, int VAR_4) {

  int VAR_5 = VAR_0[VAR_2->framectrl.Subtype];
  if (VAR_5 >= 0) {
    uint8 *VAR_6 = (uint8 *) (VAR_2 + 1) + VAR_5;

    while (VAR_6 + 2 <= VAR_3 && VAR_6 + 2 + VAR_6[1] <= VAR_3) {
      if (*VAR_6 == VAR_4) {
        FUNC_0(VAR_1, VAR_6 + 2, VAR_6[1]);
        return 1;
      }
      VAR_6 += VAR_6[1] + 2;
    }
  }

  return 0;
}
