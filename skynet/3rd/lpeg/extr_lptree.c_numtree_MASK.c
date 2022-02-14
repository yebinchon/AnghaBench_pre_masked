
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_8__ {int tag; } ;
typedef TYPE_1__ TTree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int,int *) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static TTree *FUNC_4 (lua_State *VAR_3, int VAR_4) {
  if (VAR_4 == 0)
    return FUNC_1(VAR_3, VAR_2);
  else {
    TTree *VAR_5, *VAR_6;
    if (VAR_4 > 0)
      VAR_5 = VAR_6 = FUNC_2(VAR_3, 2 * VAR_4 - 1);
    else {
      VAR_4 = -VAR_4;
      VAR_5 = FUNC_2(VAR_3, 2 * VAR_4);
      VAR_5->tag = VAR_1;
      VAR_6 = FUNC_3(VAR_5);
    }
    FUNC_0(VAR_6, VAR_0, VAR_4, ((void*)0));
    return VAR_5;
  }
}
