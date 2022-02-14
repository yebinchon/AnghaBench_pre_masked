
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int freereg; TYPE_1__* ls; } ;
struct TYPE_6__ {int lastline; } ;
typedef TYPE_2__ FuncState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_3(FuncState*VAR_2,int VAR_3,int VAR_4,int VAR_5){
int VAR_6=(VAR_4-1)/50+1;
int VAR_7=(VAR_5==(-1))?0:VAR_5;
if(VAR_6<=((1<<9)-1))
FUNC_2(VAR_2,VAR_1,VAR_3,VAR_7,VAR_6);
else{
FUNC_2(VAR_2,VAR_1,VAR_3,VAR_7,0);
FUNC_1(VAR_2,FUNC_0(VAR_0,VAR_6),VAR_2->ls->lastline);
}
VAR_2->freereg=VAR_3+1;
}
