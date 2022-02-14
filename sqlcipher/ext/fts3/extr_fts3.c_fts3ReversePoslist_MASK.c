
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, char **VAR_1){
  char *VAR_2 = &(*VAR_1)[-2];
  char VAR_3 = 0;


  while( VAR_2>VAR_0 && (VAR_3=*VAR_2--)==0 );




  while( VAR_2>VAR_0 && (*VAR_2 & 0x80) | VAR_3 ){
    VAR_3 = *VAR_2--;
  }
  FUNC_0( VAR_2==VAR_0 || VAR_3==0 );
  if( VAR_2>VAR_0 || (VAR_3==0 && *VAR_1>&VAR_2[2]) ){ VAR_2 = &VAR_2[2]; }
  while( *VAR_2++&0x80 );
  *VAR_1 = VAR_2;
}
