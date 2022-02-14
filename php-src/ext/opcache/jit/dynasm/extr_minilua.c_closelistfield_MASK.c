
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ k; } ;
struct ConsControl {int tostore; int na; TYPE_1__* t; TYPE_4__ v; } ;
struct TYPE_7__ {int info; } ;
struct TYPE_6__ {TYPE_3__ s; } ;
struct TYPE_5__ {TYPE_2__ u; } ;
typedef int FuncState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_4__*) ;
 int FUNC_1 (int *,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(FuncState*VAR_1,struct ConsControl*VAR_2){
if(VAR_2->v.k==VAR_0)return;
FUNC_0(VAR_1,&VAR_2->v);
VAR_2->v.k=VAR_0;
if(VAR_2->tostore==50){
FUNC_1(VAR_1,VAR_2->t->u.s.info,VAR_2->na,VAR_2->tostore);
VAR_2->tostore=0;
}
}
