
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int token; } ;
struct TYPE_19__ {int linenumber; TYPE_1__ t; } ;
typedef TYPE_2__ LexState ;




 int VAR_0 ;







 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int const,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int const) ;
 int FUNC_13 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_14(LexState*VAR_1){
int VAR_2=VAR_1->linenumber;
switch(VAR_1->t.token){
case 132:{
FUNC_6(VAR_1,VAR_2);
return 0;
}
case 128:{
FUNC_13(VAR_1,VAR_2);
return 0;
}
case 135:{
FUNC_9(VAR_1);
FUNC_0(VAR_1);
FUNC_2(VAR_1,VAR_0,135,VAR_2);
return 0;
}
case 134:{
FUNC_4(VAR_1,VAR_2);
return 0;
}
case 130:{
FUNC_10(VAR_1,VAR_2);
return 0;
}
case 133:{
FUNC_5(VAR_1,VAR_2);
return 0;
}
case 131:{
FUNC_9(VAR_1);
if(FUNC_12(VAR_1,133))
FUNC_7(VAR_1);
else
FUNC_8(VAR_1);
return 0;
}
case 129:{
FUNC_11(VAR_1);
return 1;
}
case 136:{
FUNC_9(VAR_1);
FUNC_1(VAR_1);
return 1;
}
default:{
FUNC_3(VAR_1);
return 0;
}
}
}
