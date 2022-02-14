
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,char const*,char const*) ;
 int FUNC_2 (char const) ;

__attribute__((used)) static int FUNC_3(int VAR_0,const char*VAR_1,const char*VAR_2){
switch(*VAR_1){
case'.':return 1;
case'%':return FUNC_0(VAR_0,FUNC_2(*(VAR_1+1)));
case'[':return FUNC_1(VAR_0,VAR_1,VAR_2-1);
default:return(FUNC_2(*VAR_1)==VAR_0);
}
}
