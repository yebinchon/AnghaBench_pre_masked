
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int info; } ;
struct TYPE_7__ {TYPE_1__ s; } ;
struct TYPE_8__ {scalar_t__ k; TYPE_2__ u; } ;
typedef TYPE_3__ expdesc ;
typedef int FuncState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(FuncState*VAR_4,expdesc*VAR_5){
if(VAR_5->k==VAR_0){
VAR_5->k=VAR_1;
VAR_5->u.s.info=FUNC_0(FUNC_2(VAR_4,VAR_5));
}
else if(VAR_5->k==VAR_3){
FUNC_1(FUNC_2(VAR_4,VAR_5),2);
VAR_5->k=VAR_2;
}
}
