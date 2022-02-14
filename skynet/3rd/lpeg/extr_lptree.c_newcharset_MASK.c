
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {int tag; } ;
typedef TYPE_1__ TTree ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_2 ;
 int FUNC_1 (size_t,scalar_t__) ;
 TYPE_1__* FUNC_2 (int *,scalar_t__) ;
 scalar_t__* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static TTree *FUNC_4 (lua_State *VAR_3) {
  TTree *VAR_4 = FUNC_2(VAR_3, FUNC_0(VAR_0) + 1);
  VAR_4->tag = VAR_1;
  FUNC_1(VAR_2, FUNC_3(VAR_4)[VAR_2] = 0);
  return VAR_4;
}
