
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VList ;


 scalar_t__ FUNC_0 (char const*,char const*,int) ;

int FUNC_1(VList *VAR_0, const char *VAR_1, int VAR_2){
  int VAR_3, VAR_4;
  if( VAR_0==0 ) return 0;
  VAR_4 = VAR_0[1];
  VAR_3 = 2;
  do{
    const char *VAR_5 = (const char*)&VAR_0[VAR_3+2];
    if( FUNC_0(VAR_5,VAR_1,VAR_2)==0 && VAR_5[VAR_2]==0 ) return VAR_0[VAR_3];
    VAR_3 += VAR_0[VAR_3+1];
  }while( VAR_3<VAR_4 );
  return 0;
}
