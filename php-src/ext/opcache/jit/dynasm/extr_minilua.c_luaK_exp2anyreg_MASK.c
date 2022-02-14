
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
struct TYPE_17__ {scalar_t__ nactvar; } ;
typedef TYPE_4__ FuncState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(FuncState*VAR_1,expdesc*VAR_2){
FUNC_2(VAR_1,VAR_2);
if(VAR_2->k==VAR_0){
if(!FUNC_1(VAR_2))return VAR_2->u.s.info;
if(VAR_2->u.s.info>=VAR_1->nactvar){
FUNC_0(VAR_1,VAR_2,VAR_2->u.s.info);
return VAR_2->u.s.info;
}
}
FUNC_3(VAR_1,VAR_2);
return VAR_2->u.s.info;
}
