
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64 ;
typedef int lua_State ;
struct TYPE_2__ {int size; int fns; int occupancy; } ;
typedef TYPE_1__ bloom_t ;


 scalar_t__ FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(lua_State *VAR_0) {
  bloom_t *VAR_1 = (bloom_t *)FUNC_0(VAR_0, 1, "bloom.filter");

  FUNC_1(VAR_0, VAR_1->size << 5);
  FUNC_1(VAR_0, VAR_1->fns);
  FUNC_1(VAR_0, VAR_1->occupancy);


  uint64 VAR_2 = 1000000;
  if (VAR_1->occupancy > 0) {
    unsigned int VAR_3 = (VAR_1->size << 5) / VAR_1->occupancy;
    int VAR_4;

    VAR_2 = VAR_3;

    for (VAR_4 = 1; VAR_4 < VAR_1->fns && VAR_2 < 1000000; VAR_4++) {
      VAR_2 = VAR_2 * VAR_3;
    }

    if (VAR_2 < 1000000) {

      unsigned int VAR_5 = (VAR_1->size << 13) / VAR_1->occupancy;

      uint64 VAR_6 = VAR_5;

      for (VAR_4 = 1; VAR_4 < VAR_1->fns && VAR_6 < 256000000; VAR_4++) {
        VAR_6 = (VAR_6 * VAR_5) >> 8;
      }

      VAR_2 = VAR_6 >> 8;
    }
  }

  FUNC_1(VAR_0, VAR_2 > 1000000 ? 1000000 : (int) VAR_2);

  return 4;
}
