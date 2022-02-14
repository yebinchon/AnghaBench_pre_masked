
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int top; } ;
typedef TYPE_1__ lua_State ;
typedef int Table ;
struct TYPE_18__ {int numparams; int is_vararg; } ;
typedef int StkId ;
typedef TYPE_2__ Proto ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (TYPE_1__*,int *,int) ;
 int FUNC_7 (TYPE_1__*,int *,int ) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*,int ,int *) ;
 int FUNC_12 (TYPE_1__*,int,int *) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (TYPE_1__*,int ,int) ;
 int FUNC_16 (TYPE_1__*,int ,int) ;
 int FUNC_17 (TYPE_1__*) ;

__attribute__((used)) static StkId FUNC_18 (lua_State *VAR_2, Proto *VAR_3, int VAR_4) {
  int VAR_5;
  int VAR_6 = VAR_3->numparams;



  StkId VAR_7, VAR_8;
  for (; VAR_4 < VAR_6; ++VAR_4)
    FUNC_13(VAR_2->top++);
  VAR_8 = VAR_2->top - VAR_4;
  VAR_7 = VAR_2->top;
  for (VAR_5=0; VAR_5<VAR_6; VAR_5++) {
    FUNC_16(VAR_2, VAR_2->top++, VAR_8+VAR_5);
    FUNC_13(VAR_8+VAR_5);
  }







  return VAR_7;
}
