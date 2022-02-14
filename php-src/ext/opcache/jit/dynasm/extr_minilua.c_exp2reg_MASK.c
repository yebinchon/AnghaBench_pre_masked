
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int info; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
struct TYPE_9__ {scalar_t__ k; int t; int f; TYPE_2__ u; } ;
typedef TYPE_3__ expdesc ;
typedef int FuncState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int,int,int) ;
 int FUNC_1 (int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int,int,int,int) ;

__attribute__((used)) static void FUNC_9(FuncState*VAR_2,expdesc*VAR_3,int VAR_4){
FUNC_1(VAR_2,VAR_3,VAR_4);
if(VAR_3->k==VAR_0)
FUNC_3(VAR_2,&VAR_3->t,VAR_3->u.s.info);
if(FUNC_2(VAR_3)){
int VAR_5;
int VAR_6=(-1);
int VAR_7=(-1);
if(FUNC_7(VAR_2,VAR_3->t)||FUNC_7(VAR_2,VAR_3->f)){
int VAR_8=(VAR_3->k==VAR_0)?(-1):FUNC_5(VAR_2);
VAR_6=FUNC_0(VAR_2,VAR_4,0,1);
VAR_7=FUNC_0(VAR_2,VAR_4,1,0);
FUNC_6(VAR_2,VAR_8);
}
VAR_5=FUNC_4(VAR_2);
FUNC_8(VAR_2,VAR_3->f,VAR_5,VAR_4,VAR_6);
FUNC_8(VAR_2,VAR_3->t,VAR_5,VAR_4,VAR_7);
}
VAR_3->f=VAR_3->t=(-1);
VAR_3->u.s.info=VAR_4;
VAR_3->k=VAR_1;
}
