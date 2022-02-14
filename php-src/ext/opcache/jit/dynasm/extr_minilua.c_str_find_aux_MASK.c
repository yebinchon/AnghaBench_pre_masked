
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ptrdiff_t ;
typedef int lua_State ;
struct TYPE_4__ {char const* src_init; char const* src_end; scalar_t__ level; int * L; } ;
typedef TYPE_1__ MatchState ;


 char* FUNC_0 (char const*,size_t,char const*,size_t) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 char* FUNC_6 (TYPE_1__*,char const*,char const*) ;
 int FUNC_7 (int ,size_t) ;
 int FUNC_8 (TYPE_1__*,char const*,char const*) ;
 int * FUNC_9 (char const*,char*) ;

__attribute__((used)) static int FUNC_10(lua_State*VAR_0,int VAR_1){
size_t VAR_2,VAR_3;
const char*VAR_4=FUNC_1(VAR_0,1,&VAR_2);
const char*VAR_5=FUNC_1(VAR_0,2,&VAR_3);
ptrdiff_t VAR_6=FUNC_7(FUNC_2(VAR_0,3,1),VAR_2)-1;
if(VAR_6<0)VAR_6=0;
else if((size_t)(VAR_6)>VAR_2)VAR_6=(ptrdiff_t)VAR_2;
if(VAR_1&&(FUNC_5(VAR_0,4)||
FUNC_9(VAR_5,"^$*+?.([%-")==((void*)0))){
const char*VAR_7=FUNC_0(VAR_4+VAR_6,VAR_2-VAR_6,VAR_5,VAR_3);
if(VAR_7){
FUNC_3(VAR_0,VAR_7-VAR_4+1);
FUNC_3(VAR_0,VAR_7-VAR_4+VAR_3);
return 2;
}
}
else{
MatchState VAR_8;
int VAR_9=(*VAR_5=='^')?(VAR_5++,1):0;
const char*VAR_10=VAR_4+VAR_6;
VAR_8.L=VAR_0;
VAR_8.src_init=VAR_4;
VAR_8.src_end=VAR_4+VAR_2;
do{
const char*VAR_11;
VAR_8.level=0;
if((VAR_11=FUNC_6(&VAR_8,VAR_10,VAR_5))!=((void*)0)){
if(VAR_1){
FUNC_3(VAR_0,VAR_10-VAR_4+1);
FUNC_3(VAR_0,VAR_11-VAR_4);
return FUNC_8(&VAR_8,((void*)0),0)+2;
}
else
return FUNC_8(&VAR_8,VAR_10,VAR_11);
}
}while(VAR_10++<VAR_8.src_end&&!VAR_9);
}
FUNC_4(VAR_0);
return 1;
}
