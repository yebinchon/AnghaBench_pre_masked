
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_7__ {int n; } ;
struct TYPE_8__ {TYPE_1__ u; } ;
typedef TYPE_2__ TTree ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int *,int,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int,int,char*) ;
 TYPE_2__* FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_2) {
  TTree *VAR_3;
  TTree *VAR_4 = FUNC_1(VAR_2, 1, ((void*)0));
  int VAR_5 = FUNC_0(VAR_4);
  FUNC_3(VAR_2, VAR_5 >= 0, 1, "pattern may not have fixed length");
  FUNC_3(VAR_2, !FUNC_2(VAR_4), 1, "pattern have captures");
  FUNC_3(VAR_2, VAR_5 <= VAR_0, 1, "pattern too long to look behind");
  VAR_3 = FUNC_4(VAR_2, VAR_1);
  VAR_3->u.n = VAR_5;
  return 1;
}
