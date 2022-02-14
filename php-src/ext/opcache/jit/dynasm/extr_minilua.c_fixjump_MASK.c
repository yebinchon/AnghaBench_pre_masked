
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ls; TYPE_1__* f; } ;
struct TYPE_4__ {int * code; } ;
typedef int Instruction ;
typedef TYPE_2__ FuncState ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(FuncState*VAR_0,int VAR_1,int VAR_2){
Instruction*VAR_3=&VAR_0->f->code[VAR_1];
int VAR_4=VAR_2-(VAR_1+1);
if(FUNC_1(VAR_4)>(((1<<(9+9))-1)>>1))
FUNC_2(VAR_0->ls,"control structure too long");
FUNC_0(*VAR_3,VAR_4);
}
