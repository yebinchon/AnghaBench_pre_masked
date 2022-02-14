
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char*) ;

void FUNC_1(char * VAR_0) {
 if(((void*)0) != VAR_0){
  char * VAR_1 = ((void*)0);
  char * VAR_2 = ((void*)0);
  char * VAR_3 = ((void*)0);

  if(((void*)0) == (VAR_1 = FUNC_0(VAR_0,"/"))){
   VAR_1 = VAR_0;
  } else {
   ++VAR_1;
   while((VAR_3 = FUNC_0(VAR_1,"/"))){
    VAR_1 = VAR_3+1;
   }
  }







  if((VAR_2 = FUNC_0(VAR_1,"."))){
   ++VAR_2;
   while((VAR_3 = FUNC_0(VAR_2,"."))){
    VAR_2 = VAR_3+1;
   }
   --VAR_2;
   if(VAR_2>VAR_1){
    VAR_2[0] = '\0';
   }
  }
 }
}
