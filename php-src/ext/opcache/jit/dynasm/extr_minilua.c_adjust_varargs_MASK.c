
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
typedef int Table ;
struct TYPE_8__ {int numparams; } ;
typedef scalar_t__ StkId ;
typedef TYPE_2__ Proto ;


 int FUNC_0 (TYPE_1__*,int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ,scalar_t__) ;

__attribute__((used)) static StkId FUNC_3(lua_State*VAR_0,Proto*VAR_1,int VAR_2){
int VAR_3;
int VAR_4=VAR_1->numparams;
Table*VAR_5=((void*)0);
StkId VAR_6,VAR_7;
for(;VAR_2<VAR_4;++VAR_2)
FUNC_1(VAR_0->top++);
VAR_7=VAR_0->top-VAR_2;
VAR_6=VAR_0->top;
for(VAR_3=0;VAR_3<VAR_4;VAR_3++){
FUNC_2(VAR_0,VAR_0->top++,VAR_7+VAR_3);
FUNC_1(VAR_7+VAR_3);
}
if(VAR_5){
FUNC_0(VAR_0,VAR_0->top++,VAR_5);
}
return VAR_6;
}
