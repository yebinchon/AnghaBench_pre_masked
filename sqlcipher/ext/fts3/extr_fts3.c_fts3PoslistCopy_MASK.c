
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(char **VAR_0, char **VAR_1){
  char *VAR_2 = *VAR_1;
  char VAR_3 = 0;
  while( *VAR_2 | VAR_3 ){
    VAR_3 = *VAR_2++ & 0x80;
    FUNC_1( VAR_3!=0 && (*VAR_2)==0 );
  }
  VAR_2++;

  if( VAR_0 ){
    int VAR_4 = (int)(VAR_2 - *VAR_1);
    char *VAR_5 = *VAR_0;
    FUNC_0(VAR_5, *VAR_1, VAR_4);
    VAR_5 += VAR_4;
    *VAR_0 = VAR_5;
  }
  *VAR_1 = VAR_2;
}
