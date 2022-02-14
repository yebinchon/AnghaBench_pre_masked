
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_25__ {int current; int buff; } ;
struct TYPE_24__ {TYPE_2__* ts; } ;
struct TYPE_22__ {int reserved; } ;
struct TYPE_23__ {TYPE_1__ tsv; } ;
typedef TYPE_2__ TString ;
typedef TYPE_3__ SemInfo ;
typedef TYPE_4__ LexState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char) ;
 int FUNC_5 (char) ;
 int FUNC_6 (char) ;
 int FUNC_7 (TYPE_4__*,char*,int) ;
 TYPE_2__* FUNC_8 (TYPE_4__*,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*,TYPE_3__*,int) ;
 int FUNC_14 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_15 (TYPE_4__*,char,TYPE_3__*) ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_18(LexState*VAR_10,SemInfo*VAR_11){
FUNC_11(VAR_10->buff);
for(;;){
switch(VAR_10->current){
case'\n':
case'\r':{
FUNC_2(VAR_10);
continue;
}
case'-':{
FUNC_12(VAR_10);
if(VAR_10->current!='-')return'-';
FUNC_12(VAR_10);
if(VAR_10->current=='['){
int VAR_12=FUNC_17(VAR_10);
FUNC_11(VAR_10->buff);
if(VAR_12>=0){
FUNC_13(VAR_10,((void*)0),VAR_12);
FUNC_11(VAR_10->buff);
continue;
}
}
while(!FUNC_1(VAR_10)&&VAR_10->current!=(-1))
FUNC_12(VAR_10);
continue;
}
case'[':{
int VAR_13=FUNC_17(VAR_10);
if(VAR_13>=0){
FUNC_13(VAR_10,VAR_11,VAR_13);
return VAR_9;
}
else if(VAR_13==-1)return'[';
else FUNC_7(VAR_10,"invalid long string delimiter",VAR_9);
}
case'=':{
FUNC_12(VAR_10);
if(VAR_10->current!='=')return'=';
else{FUNC_12(VAR_10);return VAR_3;}
}
case'<':{
FUNC_12(VAR_10);
if(VAR_10->current!='=')return'<';
else{FUNC_12(VAR_10);return VAR_5;}
}
case'>':{
FUNC_12(VAR_10);
if(VAR_10->current!='=')return'>';
else{FUNC_12(VAR_10);return VAR_4;}
}
case'~':{
FUNC_12(VAR_10);
if(VAR_10->current!='=')return'~';
else{FUNC_12(VAR_10);return VAR_7;}
}
case'"':
case'\'':{
FUNC_15(VAR_10,VAR_10->current,VAR_11);
return VAR_9;
}
case'.':{
FUNC_16(VAR_10);
if(FUNC_0(VAR_10,".")){
if(FUNC_0(VAR_10,"."))
return VAR_1;
else return VAR_0;
}
else if(!FUNC_5(VAR_10->current))return'.';
else{
FUNC_14(VAR_10,VAR_11);
return VAR_8;
}
}
case(-1):{
return VAR_2;
}
default:{
if(FUNC_6(VAR_10->current)){
FUNC_12(VAR_10);
continue;
}
else if(FUNC_5(VAR_10->current)){
FUNC_14(VAR_10,VAR_11);
return VAR_8;
}
else if(FUNC_4(VAR_10->current)||VAR_10->current=='_'){
TString*VAR_14;
do{
FUNC_16(VAR_10);
}while(FUNC_3(VAR_10->current)||VAR_10->current=='_');
VAR_14=FUNC_8(VAR_10,FUNC_9(VAR_10->buff),
FUNC_10(VAR_10->buff));
if(VAR_14->tsv.reserved>0)
return VAR_14->tsv.reserved-1+257;
else{
VAR_11->ts=VAR_14;
return VAR_6;
}
}
else{
int VAR_15=VAR_10->current;
FUNC_12(VAR_10);
return VAR_15;
}
}
}
}
}
