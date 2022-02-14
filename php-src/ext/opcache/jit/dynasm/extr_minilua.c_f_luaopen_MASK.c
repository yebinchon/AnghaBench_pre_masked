
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int GCthreshold; int totalbytes; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,int *) ;

__attribute__((used)) static void FUNC_12(lua_State*VAR_0,void*VAR_1){
global_State*VAR_2=FUNC_0(VAR_0);
FUNC_1(VAR_1);
FUNC_11(VAR_0,VAR_0);
FUNC_10(VAR_0,FUNC_2(VAR_0),FUNC_3(VAR_0,0,2));
FUNC_10(VAR_0,FUNC_9(VAR_0),FUNC_3(VAR_0,0,2));
FUNC_6(VAR_0,32);
FUNC_7(VAR_0);
FUNC_8(VAR_0);
FUNC_4(FUNC_5(VAR_0,"not enough memory"));
VAR_2->GCthreshold=4*VAR_2->totalbytes;
}
