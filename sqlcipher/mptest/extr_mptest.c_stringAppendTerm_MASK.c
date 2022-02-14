
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ n; } ;
typedef TYPE_1__ String ;


 int FUNC_0 (char const) ;
 int FUNC_1 (TYPE_1__*,char const*,int) ;

__attribute__((used)) static void FUNC_2(String *VAR_0, const char *VAR_1){
  int VAR_2;
  if( VAR_0->n ) FUNC_1(VAR_0, " ", 1);
  if( VAR_1==0 ){
    FUNC_1(VAR_0, "nil", 3);
    return;
  }
  for(VAR_2=0; VAR_1[VAR_2] && !FUNC_0(VAR_1[VAR_2]); VAR_2++){}
  if( VAR_2>0 && VAR_1[VAR_2]==0 ){
    FUNC_1(VAR_0, VAR_1, VAR_2);
    return;
  }
  FUNC_1(VAR_0, "'", 1);
  while( VAR_1[0] ){
    for(VAR_2=0; VAR_1[VAR_2] && VAR_1[VAR_2]!='\''; VAR_2++){}
    if( VAR_1[VAR_2] ){
      FUNC_1(VAR_0, VAR_1, VAR_2+1);
      FUNC_1(VAR_0, "'", 1);
      VAR_1 += VAR_2+1;
    }else{
      FUNC_1(VAR_0, VAR_1, VAR_2);
      break;
    }
  }
  FUNC_1(VAR_0, "'", 1);
}
