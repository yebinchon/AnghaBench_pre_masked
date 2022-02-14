
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snippetMatch {int iCol; int iStart; int nByte; } ;


 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1(
  int VAR_0,
  const char *VAR_1,
  int VAR_2,
  struct snippetMatch *VAR_3,
  int VAR_4,
  int VAR_5
){
  int VAR_6;
  if( VAR_0<=10 ){
    return 0;
  }
  if( VAR_0>=VAR_2-10 ){
    return VAR_2;
  }
  for(VAR_6=0; VAR_6<VAR_4 && VAR_3[VAR_6].iCol<VAR_5; VAR_6++){}
  while( VAR_6<VAR_4 && VAR_3[VAR_6].iStart+VAR_3[VAR_6].nByte<VAR_0 ){ VAR_6++; }
  if( VAR_6<VAR_4 ){
    if( VAR_3[VAR_6].iStart<VAR_0+10 ){
      return VAR_3[VAR_6].iStart;
    }
    if( VAR_6>0 && VAR_3[VAR_6-1].iStart+VAR_3[VAR_6-1].nByte>=VAR_0 ){
      return VAR_3[VAR_6-1].iStart;
    }
  }
  for(VAR_6=1; VAR_6<=10; VAR_6++){
    if( FUNC_0(VAR_1[VAR_0-VAR_6]) ){
      return VAR_0 - VAR_6 + 1;
    }
    if( FUNC_0(VAR_1[VAR_0+VAR_6]) ){
      return VAR_0 + VAR_6 + 1;
    }
  }
  return VAR_0;
}
