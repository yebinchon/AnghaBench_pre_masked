
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int key; int cap; } ;
typedef TYPE_1__ TTree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int,int,char*) ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 TYPE_1__* FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_6) {
  switch (FUNC_4(VAR_6, 2)) {
    case 131: return FUNC_0(VAR_6, VAR_0, 2);
    case 128: return FUNC_0(VAR_6, VAR_2, 2);
    case 129: return FUNC_0(VAR_6, VAR_3, 2);
    case 130: {
      int VAR_7 = FUNC_3(VAR_6, 2);
      TTree *VAR_8 = FUNC_5(VAR_6, VAR_5);
      FUNC_1(VAR_6, 0 <= VAR_7 && VAR_7 <= VAR_4, 1, "invalid number");
      VAR_8->cap = VAR_1;
      VAR_8->key = VAR_7;
      return 1;
    }
    default: return FUNC_2(VAR_6, 2, "invalid replacement value");
  }
}
