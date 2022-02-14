
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* f; } ;
struct TYPE_4__ {int * code; } ;
typedef TYPE_2__ FuncState ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(FuncState*VAR_0,int VAR_1){
int VAR_2=FUNC_0(VAR_0->f->code[VAR_1]);
if(VAR_2==(-1))
return(-1);
else
return(VAR_1+1)+VAR_2;
}
