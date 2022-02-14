
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_7__ {int tag; } ;
typedef TYPE_1__ TTree ;


 int FUNC_0 (int *,int) ;
 TYPE_1__* FUNC_1 (int *,int,int*) ;
 int FUNC_2 (int ,TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static TTree *FUNC_5 (lua_State *VAR_0, int VAR_1) {
  int VAR_2;
  TTree *VAR_3 = FUNC_1(VAR_0, 1, &VAR_2);
  TTree *VAR_4 = FUNC_3(VAR_0, 1 + VAR_2);
  VAR_4->tag = VAR_1;
  FUNC_2(FUNC_4(VAR_4), VAR_3, VAR_2 * sizeof(TTree));
  FUNC_0(VAR_0, 1);
  return VAR_4;
}
