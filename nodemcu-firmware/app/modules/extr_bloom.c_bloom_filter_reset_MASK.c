
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {int size; scalar_t__ occupancy; int buf; } ;
typedef TYPE_1__ bloom_t ;


 scalar_t__ FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(lua_State *VAR_0) {
  bloom_t *VAR_1 = (bloom_t *)FUNC_0(VAR_0, 1, "bloom.filter");

  FUNC_1(VAR_1->buf, 0, VAR_1->size << 2);
  VAR_1->occupancy = 0;

  return 0;
}
