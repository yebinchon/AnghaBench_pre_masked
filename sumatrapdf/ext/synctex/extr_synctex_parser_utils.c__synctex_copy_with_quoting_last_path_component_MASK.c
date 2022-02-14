
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 char* VAR_0 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (char const*,char) ;
 size_t FUNC_6 (char const*) ;
 char* FUNC_7 (char*,char const*,size_t) ;

int FUNC_8(const char * VAR_1, char ** VAR_2, size_t VAR_3) {
  const char * VAR_4;
  if(VAR_1 && VAR_2) {

  (*VAR_2) = ((void*)0);
  VAR_4 = FUNC_1(VAR_1);
  if(FUNC_6(VAR_4)) {
   if(FUNC_5(VAR_4,' ') && VAR_4[0]!='"' && VAR_4[FUNC_6(VAR_4)-1]!='"') {




    if(FUNC_6(VAR_1)<VAR_3) {
     if(((*VAR_2) = (char *)FUNC_3(VAR_3+2))) {
      char * VAR_5 = (*VAR_2) + (VAR_4-VAR_1);
      if((*VAR_2) != FUNC_7((*VAR_2),VAR_1,VAR_3)) {
       FUNC_0("!  _synctex_copy_with_quoting_last_path_component: Copy problem");
       FUNC_2((*VAR_2));
       (*VAR_2) = ((void*)0);
       return -2;
      }
      FUNC_4(VAR_5+1,VAR_5,FUNC_6(VAR_5)+1);
      VAR_5[0]='"';
      VAR_5[FUNC_6(VAR_5)+1]='\0';
      VAR_5[FUNC_6(VAR_5)]='"';
      return 0;
     }
     return -1;
    }
    FUNC_0("!  _synctex_copy_with_quoting_last_path_component: Internal inconsistency");
    return -3;
   }
   return 0;
  }
  return 0;

 }
 return 1;
}
