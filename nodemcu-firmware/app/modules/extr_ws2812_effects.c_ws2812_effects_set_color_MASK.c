
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int lua_State ;
struct TYPE_2__ {void** color; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int ) ;
 void* FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,int,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_3(lua_State* VAR_2) {
  FUNC_0(VAR_2, VAR_1 != ((void*)0), 1, VAR_0);

  uint8_t VAR_3 = FUNC_1(VAR_2, 1);
  uint8_t VAR_4 = FUNC_1(VAR_2, 2);
  uint8_t VAR_5 = FUNC_1(VAR_2, 3);
  uint8_t VAR_6 = FUNC_2(VAR_2, 4, 0 );

  VAR_1->color[0] = VAR_3;
  VAR_1->color[1] = VAR_4;
  VAR_1->color[2] = VAR_5;
  VAR_1->color[3] = VAR_6;
  return 0;
}
