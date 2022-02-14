
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 char** VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void FUNC_5(char *VAR_3){
  int VAR_4, VAR_5, VAR_6, VAR_7;
  int VAR_8 = 0;
  int VAR_9 = 0;
  int VAR_10 = 1;
  int VAR_11 = 1;
  for(VAR_4=0; VAR_3[VAR_4]; VAR_4++){
    if( VAR_3[VAR_4]=='\n' ) VAR_10++;
    if( VAR_3[VAR_4]!='%' || (VAR_4>0 && VAR_3[VAR_4-1]!='\n') ) continue;
    if( FUNC_4(&VAR_3[VAR_4],"%endif",6)==0 && FUNC_0(VAR_3[VAR_4+6]) ){
      if( VAR_8 ){
        VAR_8--;
        if( VAR_8==0 ){
          for(VAR_5=VAR_9; VAR_5<VAR_4; VAR_5++) if( VAR_3[VAR_5]!='\n' ) VAR_3[VAR_5] = ' ';
        }
      }
      for(VAR_5=VAR_4; VAR_3[VAR_5] && VAR_3[VAR_5]!='\n'; VAR_5++) VAR_3[VAR_5] = ' ';
    }else if( (FUNC_4(&VAR_3[VAR_4],"%ifdef",6)==0 && FUNC_0(VAR_3[VAR_4+6]))
          || (FUNC_4(&VAR_3[VAR_4],"%ifndef",7)==0 && FUNC_0(VAR_3[VAR_4+7])) ){
      if( VAR_8 ){
        VAR_8++;
      }else{
        for(VAR_5=VAR_4+7; FUNC_0(VAR_3[VAR_5]); VAR_5++){}
        for(VAR_7=0; VAR_3[VAR_5+VAR_7] && !FUNC_0(VAR_3[VAR_5+VAR_7]); VAR_7++){}
        VAR_8 = 1;
        for(VAR_6=0; VAR_6<VAR_1; VAR_6++){
          if( FUNC_4(VAR_0[VAR_6],&VAR_3[VAR_5],VAR_7)==0 && FUNC_3(VAR_0[VAR_6])==VAR_7 ){
            VAR_8 = 0;
            break;
          }
        }
        if( VAR_3[VAR_4+3]=='n' ) VAR_8 = !VAR_8;
        if( VAR_8 ){
          VAR_9 = VAR_4;
          VAR_11 = VAR_10;
        }
      }
      for(VAR_5=VAR_4; VAR_3[VAR_5] && VAR_3[VAR_5]!='\n'; VAR_5++) VAR_3[VAR_5] = ' ';
    }
  }
  if( VAR_8 ){
    FUNC_2(VAR_2,"unterminated %%ifdef starting on line %d\n", VAR_11);
    FUNC_1(1);
  }
}
