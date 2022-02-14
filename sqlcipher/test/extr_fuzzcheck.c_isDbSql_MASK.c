
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char*,char*,int) ;

__attribute__((used)) static int FUNC_3(unsigned char *VAR_0, int VAR_1){
  unsigned char VAR_2[12];
  int VAR_3;
  if( VAR_1>4 && FUNC_2(VAR_0,"\n--\n",4)==0 ) return 1;
  while( VAR_1>0 && FUNC_0(VAR_0[0]) ){ VAR_0++; VAR_1--; }
  for(VAR_3=0; VAR_1>0 && VAR_3<8; VAR_1--, VAR_0++){
    if( FUNC_1(VAR_0[0]) ) VAR_2[VAR_3++] = VAR_0[0];
  }
  if( VAR_3==8 && FUNC_2(VAR_2,"53514c69",8)==0 ) return 1;
  return 0;
}
