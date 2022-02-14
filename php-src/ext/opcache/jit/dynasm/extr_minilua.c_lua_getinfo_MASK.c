
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ top; TYPE_3__* base_ci; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_14__ {scalar_t__ i_ci; } ;
typedef TYPE_2__ lua_Debug ;
struct TYPE_15__ {scalar_t__ func; } ;
typedef scalar_t__ StkId ;
typedef int Closure ;
typedef TYPE_3__ CallInfo ;


 int FUNC_0 (TYPE_1__*,char const*,TYPE_2__*,int *,TYPE_3__*) ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (char const*,char) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(lua_State*VAR_0,const char*VAR_1,lua_Debug*VAR_2){
int VAR_3;
Closure*VAR_4=((void*)0);
CallInfo*VAR_5=((void*)0);
if(*VAR_1=='>'){
StkId VAR_6=VAR_0->top-1;
FUNC_4(VAR_0,FUNC_8(VAR_6));
VAR_1++;
VAR_4=FUNC_1(VAR_6);
VAR_0->top--;
}
else if(VAR_2->i_ci!=0){
VAR_5=VAR_0->base_ci+VAR_2->i_ci;
VAR_4=FUNC_1(VAR_5->func);
}
VAR_3=FUNC_0(VAR_0,VAR_1,VAR_2,VAR_4,VAR_5);
if(FUNC_7(VAR_1,'f')){
if(VAR_4==((void*)0))FUNC_6(VAR_0->top);
else FUNC_5(VAR_0,VAR_0->top,VAR_4);
FUNC_3(VAR_0);
}
if(FUNC_7(VAR_1,'L'))
FUNC_2(VAR_0,VAR_4);
return VAR_3;
}
