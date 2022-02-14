
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int size; int fns; } ;
typedef TYPE_1__ bloom_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_0) {
  int VAR_1 = FUNC_0(VAR_0, 1);
  int VAR_2 = FUNC_0(VAR_0, 2);

  int VAR_3 = VAR_2;
  int VAR_4 = 0;
  while (VAR_3 > 0) {
    VAR_3 = VAR_3 >> 1;
    VAR_4--;
  }

  int VAR_5 = -VAR_1 * VAR_4;
  VAR_5 += VAR_5 >> 1;

  VAR_5 = (VAR_5 + 31) & ~31;

  if (VAR_5 < 256) {
    VAR_5 = 256;
  }

  int VAR_6 = VAR_5 >> 3;

  int VAR_7 = VAR_5 / VAR_1;
  VAR_7 = (VAR_7 >> 1) + VAR_7 / 6;

  if (VAR_7 < 2) {
    VAR_7 = 2;
  }
  if (VAR_7 > 15) {
    VAR_7 = 15;
  }

  bloom_t *VAR_8 = (bloom_t *) FUNC_2(VAR_0, sizeof(bloom_t) + VAR_6);


  FUNC_1(VAR_0, "bloom.filter");
  FUNC_3(VAR_0, -2);

  FUNC_4(VAR_8, 0, sizeof(bloom_t) + VAR_6);
  VAR_8->size = VAR_6 >> 2;
  VAR_8->fns = VAR_7;

  return 1;
}
