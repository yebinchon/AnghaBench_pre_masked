
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int info; } ;
struct TYPE_14__ {TYPE_2__ s; } ;
struct TYPE_16__ {scalar_t__ k; TYPE_1__ u; } ;
typedef TYPE_3__ expdesc ;
struct TYPE_17__ {int pc; } ;
typedef int Instruction ;
typedef TYPE_4__ FuncState ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_4__*,int ,int,int ,int) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(FuncState*VAR_4,expdesc*VAR_5,int VAR_6){
if(VAR_5->k==VAR_3){
Instruction VAR_7=FUNC_5(VAR_4,VAR_5);
if(FUNC_1(VAR_7)==VAR_0){
VAR_4->pc--;
return FUNC_2(VAR_4,VAR_1,FUNC_0(VAR_7),0,!VAR_6);
}
}
FUNC_3(VAR_4,VAR_5);
FUNC_4(VAR_4,VAR_5);
return FUNC_2(VAR_4,VAR_2,((1<<8)-1),VAR_5->u.s.info,VAR_6);
}
