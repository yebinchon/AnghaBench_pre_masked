
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VList ;



const char *FUNC_0(VList *VAR_0, int VAR_1){
  int VAR_2, VAR_3;
  if( VAR_0==0 ) return 0;
  VAR_3 = VAR_0[1];
  VAR_2 = 2;
  do{
    if( VAR_0[VAR_2]==VAR_1 ) return (char*)&VAR_0[VAR_2+2];
    VAR_2 += VAR_0[VAR_2+1];
  }while( VAR_2<VAR_3 );
  return 0;
}
