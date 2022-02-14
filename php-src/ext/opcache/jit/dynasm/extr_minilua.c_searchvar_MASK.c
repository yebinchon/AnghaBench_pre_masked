
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * varname; } ;
struct TYPE_5__ {int nactvar; } ;
typedef int TString ;
typedef TYPE_1__ FuncState ;


 TYPE_3__ FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(FuncState*VAR_0,TString*VAR_1){
int VAR_2;
for(VAR_2=VAR_0->nactvar-1;VAR_2>=0;VAR_2--){
if(VAR_1==FUNC_0(VAR_0,VAR_2).varname)
return VAR_2;
}
return-1;
}
