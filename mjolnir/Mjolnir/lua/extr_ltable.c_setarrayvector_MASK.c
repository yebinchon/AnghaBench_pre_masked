
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {unsigned int sizearray; int * array; } ;
typedef TYPE_1__ Table ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,unsigned int,unsigned int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2 (lua_State *VAR_1, Table *VAR_2, unsigned int VAR_3) {
  unsigned int VAR_4;
  FUNC_0(VAR_1, VAR_2->array, VAR_2->sizearray, VAR_3, VAR_0);
  for (VAR_4=VAR_2->sizearray; VAR_4<VAR_3; VAR_4++)
     FUNC_1(&VAR_2->array[VAR_4]);
  VAR_2->sizearray = VAR_3;
}
