
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int info; } ;
struct TYPE_10__ {TYPE_1__ s; } ;
struct TYPE_11__ {int k; int f; int t; TYPE_2__ u; } ;
typedef TYPE_3__ expdesc ;
typedef int FuncState ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(FuncState*VAR_1,expdesc*VAR_2){
FUNC_4(VAR_1,VAR_2);
switch(VAR_2->k){
case 131:case 135:{
VAR_2->k=128;
break;
}
case 133:case 132:case 128:{
VAR_2->k=135;
break;
}
case 134:{
FUNC_2(VAR_1,VAR_2);
break;
}
case 129:
case 130:{
FUNC_0(VAR_1,VAR_2);
FUNC_1(VAR_1,VAR_2);
VAR_2->u.s.info=FUNC_3(VAR_1,VAR_0,0,VAR_2->u.s.info,0);
VAR_2->k=129;
break;
}
default:{
break;
}
}
{int VAR_3=VAR_2->f;VAR_2->f=VAR_2->t;VAR_2->t=VAR_3;}
FUNC_5(VAR_1,VAR_2->f);
FUNC_5(VAR_1,VAR_2->t);
}
