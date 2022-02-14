
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;

__attribute__((used)) static const char *FUNC_1(const char *VAR_1, int VAR_2){
  int VAR_3 = (int)FUNC_0(VAR_1);
  const char *VAR_4 = &VAR_1[VAR_3];
  if( VAR_2 & VAR_0 ){
    int VAR_5 = 0;
    while( 1 ){
      if( VAR_4[0]==0 ){
        VAR_5 = 1 - VAR_5;
        if( VAR_5 && VAR_4[1]==0 ) break;
      }
      VAR_4++;
    }
    VAR_4 += 2;
  }else{
    while( *VAR_4==0 ) VAR_4++;
  }
  VAR_4 += (VAR_3 + 8 + 1);
  return VAR_4;
}
