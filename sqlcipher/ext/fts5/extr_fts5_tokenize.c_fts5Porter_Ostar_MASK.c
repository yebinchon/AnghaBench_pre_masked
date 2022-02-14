
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char,int) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, int VAR_1){
  if( VAR_0[VAR_1-1]=='w' || VAR_0[VAR_1-1]=='x' || VAR_0[VAR_1-1]=='y' ){
    return 0;
  }else{
    int VAR_2;
    int VAR_3 = 0;
    int VAR_4 = 0;
    for(VAR_2=0; VAR_2<VAR_1; VAR_2++){
      VAR_4 = !FUNC_1(VAR_0[VAR_2], VAR_4);
      FUNC_0( VAR_4==0 || VAR_4==1 );
      VAR_3 = (VAR_3 << 1) + VAR_4;
    }
    return ((VAR_3 & 0x0007)==0x0005);
  }
}
