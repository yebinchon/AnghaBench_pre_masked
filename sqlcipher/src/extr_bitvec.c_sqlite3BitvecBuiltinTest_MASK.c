
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int i ;
typedef int Bitvec ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (int *,int,void*) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 unsigned char* FUNC_9 (int) ;
 int FUNC_10 (unsigned char*) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (int,int*) ;

int FUNC_13(int VAR_1, int *VAR_2){
  Bitvec *VAR_3 = 0;
  unsigned char *VAR_4 = 0;
  int VAR_5 = -1;
  int VAR_6, VAR_7, VAR_8, VAR_9;
  void *VAR_10;



  VAR_3 = FUNC_4( VAR_1 );
  VAR_4 = FUNC_9( (VAR_1+7)/8 + 1 );
  VAR_10 = FUNC_11(VAR_0);
  if( VAR_3==0 || VAR_4==0 || VAR_10==0 ) goto bitvec_end;


  FUNC_6(0, 1);
  FUNC_3(0, 1, VAR_10);


  VAR_8 = 0;
  while( (VAR_9 = VAR_2[VAR_8])!=0 ){
    switch( VAR_9 ){
      case 1:
      case 2:
      case 5: {
        VAR_7 = 4;
        VAR_6 = VAR_2[VAR_8+2] - 1;
        VAR_2[VAR_8+2] += VAR_2[VAR_8+3];
        break;
      }
      case 3:
      case 4:
      default: {
        VAR_7 = 2;
        FUNC_12(sizeof(VAR_6), &VAR_6);
        break;
      }
    }
    if( (--VAR_2[VAR_8+1]) > 0 ) VAR_7 = 0;
    VAR_8 += VAR_7;
    VAR_6 = (VAR_6 & 0x7fffffff)%VAR_1;
    if( (VAR_9 & 1)!=0 ){
      FUNC_1(VAR_4, (VAR_6+1));
      if( VAR_9!=5 ){
        if( FUNC_6(VAR_3, VAR_6+1) ) goto bitvec_end;
      }
    }else{
      FUNC_0(VAR_4, (VAR_6+1));
      FUNC_3(VAR_3, VAR_6+1, VAR_10);
    }
  }






  VAR_5 = FUNC_8(0,0) + FUNC_8(VAR_3, VAR_1+1)
          + FUNC_8(VAR_3, 0)
          + (FUNC_7(VAR_3) - VAR_1);
  for(VAR_6=1; VAR_6<=VAR_1; VAR_6++){
    if( (FUNC_2(VAR_4,VAR_6))!=FUNC_8(VAR_3,VAR_6) ){
      VAR_5 = VAR_6;
      break;
    }
  }


bitvec_end:
  FUNC_10(VAR_10);
  FUNC_10(VAR_4);
  FUNC_5(VAR_3);
  return VAR_5;
}
