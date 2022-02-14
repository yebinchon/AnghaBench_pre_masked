
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ k; } ;
struct ConsControl {int tostore; int na; TYPE_3__* t; TYPE_4__ v; } ;
struct TYPE_6__ {int info; } ;
struct TYPE_7__ {TYPE_1__ s; } ;
struct TYPE_8__ {TYPE_2__ u; } ;
typedef int FuncState ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,TYPE_4__*) ;
 int FUNC_2 (int *,int ,int ,int) ;
 int FUNC_3 (int *,TYPE_4__*) ;

__attribute__((used)) static void FUNC_4(FuncState*VAR_1,struct ConsControl*VAR_2){
if(VAR_2->tostore==0)return;
if(FUNC_0(VAR_2->v.k)){
FUNC_3(VAR_1,&VAR_2->v);
FUNC_2(VAR_1,VAR_2->t->u.s.info,VAR_2->na,(-1));
VAR_2->na--;
}
else{
if(VAR_2->v.k!=VAR_0)
FUNC_1(VAR_1,&VAR_2->v);
FUNC_2(VAR_1,VAR_2->t->u.s.info,VAR_2->na,VAR_2->tostore);
}
}
