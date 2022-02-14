
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
typedef int TValue ;
typedef int StkId ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 int FUNC_4 (TYPE_1__*,int ,int *,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static void FUNC_6(lua_State*VAR_0,int VAR_1,const char*VAR_2){
StkId VAR_3;
TValue VAR_4;
FUNC_0(VAR_0,1);
VAR_3=FUNC_2(VAR_0,VAR_1);
FUNC_1(VAR_0,VAR_3);
FUNC_5(VAR_0,&VAR_4,FUNC_3(VAR_0,VAR_2));
FUNC_4(VAR_0,VAR_3,&VAR_4,VAR_0->top-1);
VAR_0->top--;
}
