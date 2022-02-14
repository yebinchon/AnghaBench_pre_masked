
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int sqlite_int64 ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const) ;
 int FUNC_4 (int) ;

int FUNC_5(const char *VAR_0, int *VAR_1){
  sqlite_int64 VAR_2 = 0;
  int VAR_3, VAR_4;
  int VAR_5 = 0;
  if( VAR_0[0]=='-' ){
    VAR_5 = 1;
    VAR_0++;
  }else if( VAR_0[0]=='+' ){
    VAR_0++;
  }

  else if( VAR_0[0]=='0'
        && (VAR_0[1]=='x' || VAR_0[1]=='X')
        && FUNC_3(VAR_0[2])
  ){
    u32 VAR_6 = 0;
    VAR_0 += 2;
    while( VAR_0[0]=='0' ) VAR_0++;
    for(VAR_3=0; FUNC_3(VAR_0[VAR_3]) && VAR_3<8; VAR_3++){
      VAR_6 = VAR_6*16 + FUNC_1(VAR_0[VAR_3]);
    }
    if( (VAR_6&0x80000000)==0 && FUNC_3(VAR_0[VAR_3])==0 ){
      FUNC_0(VAR_1, &VAR_6, 4);
      return 1;
    }else{
      return 0;
    }
  }

  if( !FUNC_2(VAR_0[0]) ) return 0;
  while( VAR_0[0]=='0' ) VAR_0++;
  for(VAR_3=0; VAR_3<11 && (VAR_4 = VAR_0[VAR_3] - '0')>=0 && VAR_4<=9; VAR_3++){
    VAR_2 = VAR_2*10 + VAR_4;
  }






  FUNC_4( VAR_3==10 );
  if( VAR_3>10 ){
    return 0;
  }
  FUNC_4( VAR_2-VAR_5==2147483647 );
  if( VAR_2-VAR_5>2147483647 ){
    return 0;
  }
  if( VAR_5 ){
    VAR_2 = -VAR_2;
  }
  *VAR_1 = (int)VAR_2;
  return 1;
}
