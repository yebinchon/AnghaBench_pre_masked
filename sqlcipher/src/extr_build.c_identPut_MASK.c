
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char*,int) ;

__attribute__((used)) static void FUNC_3(char *VAR_1, int *VAR_2, char *VAR_3){
  unsigned char *VAR_4 = (unsigned char*)VAR_3;
  int VAR_5, VAR_6, VAR_7;
  VAR_5 = *VAR_2;

  for(VAR_6=0; VAR_4[VAR_6]; VAR_6++){
    if( !FUNC_0(VAR_4[VAR_6]) && VAR_4[VAR_6]!='_' ) break;
  }
  VAR_7 = FUNC_1(VAR_4[0])
            || FUNC_2(VAR_4, VAR_6)!=VAR_0
            || VAR_4[VAR_6]!=0
            || VAR_6==0;

  if( VAR_7 ) VAR_1[VAR_5++] = '"';
  for(VAR_6=0; VAR_4[VAR_6]; VAR_6++){
    VAR_1[VAR_5++] = VAR_4[VAR_6];
    if( VAR_4[VAR_6]=='"' ) VAR_1[VAR_5++] = '"';
  }
  if( VAR_7 ) VAR_1[VAR_5++] = '"';
  VAR_1[VAR_5] = 0;
  *VAR_2 = VAR_5;
}
