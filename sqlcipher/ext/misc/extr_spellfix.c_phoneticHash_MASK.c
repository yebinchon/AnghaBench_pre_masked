
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 char VAR_1 ;
 unsigned char VAR_2 ;
 char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_0 (int) ;
 unsigned char* VAR_7 ;
 unsigned char* VAR_8 ;
 unsigned char* VAR_9 ;
 unsigned char* FUNC_1 (int) ;

__attribute__((used)) static unsigned char *FUNC_2(const unsigned char *VAR_10, int VAR_11){
  unsigned char *VAR_12 = FUNC_1( VAR_11 + 1 );
  int VAR_13;
  int VAR_14 = 0;
  char VAR_15 = 0x77;
  char VAR_16 = 0x77;
  const unsigned char *VAR_17 = VAR_8;

  if( VAR_12==0 ) return 0;
  if( VAR_11>2 ){
    switch( VAR_10[0] ){
      case 'g':
      case 'k': {
        if( VAR_10[1]=='n' ){ VAR_10++; VAR_11--; }
        break;
      }
    }
  }
  for(VAR_13=0; VAR_13<VAR_11; VAR_13++){
    unsigned char VAR_18 = VAR_10[VAR_13];
    if( VAR_13+1<VAR_11 ){
      if( VAR_18=='w' && VAR_10[VAR_13+1]=='r' ) continue;
      if( VAR_18=='d' && (VAR_10[VAR_13+1]=='j' || VAR_10[VAR_13+1]=='g') ) continue;
      if( VAR_13+2<VAR_11 ){
        if( VAR_18=='t' && VAR_10[VAR_13+1]=='c' && VAR_10[VAR_13+2]=='h' ) continue;
      }
    }
    VAR_18 = VAR_17[VAR_18&0x7f];
    if( VAR_18==VAR_5 ) continue;
    if( VAR_18==VAR_2 && VAR_15!=VAR_0 ) continue;
    VAR_17 = VAR_9;
    if( VAR_18==VAR_6 && (VAR_16==VAR_3 || VAR_16==VAR_1) ){
       continue;
    }
    if( (VAR_18==VAR_3 || VAR_18==VAR_1) && VAR_16==VAR_6 ){
       VAR_14--;
    }
    VAR_15 = VAR_18;
    if( VAR_18==VAR_4 ) continue;
    VAR_16 = VAR_18;
    VAR_18 = VAR_7[VAR_18];
    FUNC_0( VAR_14>=0 );
    if( VAR_14==0 || VAR_18!=VAR_12[VAR_14-1] ) VAR_12[VAR_14++] = VAR_18;
  }
  VAR_12[VAR_14] = 0;
  return VAR_12;
}
