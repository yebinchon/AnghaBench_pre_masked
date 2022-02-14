
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mStack ;
typedef int m ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char,char,char const) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int) ;
 int FUNC_5 (char,char,char) ;

__attribute__((used)) static int FUNC_6(const char *VAR_1, const char *VAR_2, int *VAR_3){
  int VAR_4, VAR_5;
  int VAR_6, VAR_7;
  char VAR_8 = 0, VAR_9;
  char VAR_10, VAR_11;
  char VAR_12, VAR_13;
  int VAR_14;
  int VAR_15 = 0;
  int VAR_16;
  int *VAR_17;
  char *VAR_18;
  int *VAR_19 = 0;
  int VAR_20 = 0;
  int VAR_21[60+15];


  if( VAR_1==0 || VAR_2==0 ) return -1;


  while( VAR_1[0] && VAR_1[0]==VAR_2[0] ){ VAR_15 = VAR_1[0]; VAR_1++; VAR_2++; VAR_20++; }
  if( VAR_3 ) *VAR_3 = VAR_20;
  if( VAR_1[0]==0 && VAR_2[0]==0 ) return 0;






  for(VAR_4=0; VAR_1[VAR_4]; VAR_4++){
    if( VAR_1[VAR_4]&0x80 ) return -2;
  }
  for(VAR_5=0; VAR_2[VAR_5]; VAR_5++){
    if( VAR_2[VAR_5]&0x80 ) return -2;
  }


  if( VAR_4==0 ){
    VAR_11 = (char)VAR_15;
    for(VAR_7=VAR_16=0; (VAR_9 = VAR_2[VAR_7])!=0; VAR_7++){
      VAR_16 += FUNC_1(VAR_11, VAR_9, VAR_2[VAR_7+1])/VAR_0;
      VAR_11 = VAR_9;
    }
    return VAR_16;
  }
  if( VAR_5==0 ){
    VAR_10 = (char)VAR_15;
    for(VAR_6=VAR_16=0; (VAR_8 = VAR_1[VAR_6])!=0; VAR_6++){
      VAR_16 += FUNC_1(VAR_10, VAR_8, VAR_1[VAR_6+1]);
      VAR_10 = VAR_8;
    }
    return VAR_16;
  }


  if( VAR_1[0]=='*' && VAR_1[1]==0 ) return 0;


  if( VAR_5<(sizeof(VAR_21)*4)/(sizeof(VAR_21[0])*5) ){
    VAR_17 = VAR_21;
  }else{
    VAR_17 = VAR_19 = FUNC_4( (VAR_5+1)*5*sizeof(VAR_17[0])/4 );
    if( VAR_17==0 ) return -3;
  }
  VAR_18 = (char*)&VAR_17[VAR_5+1];


  VAR_17[0] = 0;
  VAR_18[0] = (char)VAR_15;
  VAR_11 = (char)VAR_15;
  for(VAR_7=1; VAR_7<=VAR_5; VAR_7++){
    VAR_13 = VAR_2[VAR_7];
    VAR_9 = VAR_2[VAR_7-1];
    VAR_18[VAR_7] = VAR_9;
    VAR_17[VAR_7] = VAR_17[VAR_7-1] + FUNC_1(VAR_11, VAR_9, VAR_13);
    VAR_11 = VAR_9;
  }
  VAR_10 = (char)VAR_15;
  for(VAR_6=1; VAR_6<=VAR_4; VAR_6++){
    int VAR_22 = (VAR_6==VAR_4);
    VAR_8 = VAR_1[VAR_6-1];
    VAR_12 = VAR_1[VAR_6];
    if( VAR_8=='*' && VAR_22 ) break;
    VAR_14 = VAR_17[0];
    VAR_15 = VAR_18[0];
    VAR_17[0] = VAR_14 + FUNC_1(VAR_10, VAR_8, VAR_12);
    VAR_11 = 0;
    for(VAR_7=1; VAR_7<=VAR_5; VAR_7++){
      int VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
      VAR_9 = VAR_2[VAR_7-1];
      VAR_13 = VAR_2[VAR_7];


      VAR_24 = FUNC_1(VAR_18[VAR_7-1], VAR_9, VAR_13);
      if( VAR_22 ) VAR_24 /= VAR_0;


      VAR_25 = FUNC_1(VAR_18[VAR_7], VAR_8, VAR_13);


      VAR_26 = FUNC_5(VAR_18[VAR_7-1], VAR_8, VAR_9);


      VAR_23 = VAR_24 + VAR_17[VAR_7-1];
      VAR_27 = VAR_9;
      if( (VAR_25 + VAR_17[VAR_7])<VAR_23 ){
        VAR_23 = VAR_25 + VAR_17[VAR_7];
        VAR_27 = VAR_8;
      }
      if( (VAR_26 + VAR_14)<VAR_23 ){
        VAR_23 = VAR_26 + VAR_14;
      }
      VAR_14 = VAR_17[VAR_7];
      VAR_15 = VAR_18[VAR_7];
      VAR_17[VAR_7] = VAR_23;
      VAR_18[VAR_7] = (char)VAR_27;
      VAR_11 = VAR_9;
    }
    VAR_10 = VAR_8;
  }


  if( VAR_8=='*' ){
    VAR_16 = VAR_17[1];
    for(VAR_7=1; VAR_7<=VAR_5; VAR_7++){
      if( VAR_17[VAR_7]<VAR_16 ){
        VAR_16 = VAR_17[VAR_7];
        if( VAR_3 ) *VAR_3 = VAR_7+VAR_20;
      }
    }
  }else{
    VAR_16 = VAR_17[VAR_5];


    FUNC_0( VAR_3==0 );
  }
  FUNC_3(VAR_19);
  return VAR_16;
}
