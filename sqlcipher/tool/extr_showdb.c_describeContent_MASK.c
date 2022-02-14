
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t i64 ;


 int FUNC_0 (unsigned char*,size_t*) ;
 int FUNC_1 (char*,char*,...) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static i64 FUNC_3(
  unsigned char *VAR_0,
  i64 VAR_1,
  char *VAR_2
){
  i64 VAR_3 = 0;
  int VAR_4, VAR_5;
  i64 VAR_6, VAR_7, VAR_8;
  const unsigned char *VAR_9;
  const unsigned char *VAR_10;
  char VAR_11 = ' ';

  VAR_10 = &VAR_0[VAR_1];
  VAR_4 = FUNC_0(VAR_0, &VAR_7);
  VAR_9 = &VAR_0[VAR_7];
  VAR_0 += VAR_4;
  VAR_6 = VAR_7 - VAR_4;
  while( VAR_6>0 && VAR_9<=VAR_10 ){
    VAR_4 = FUNC_0(VAR_0, &VAR_7);
    VAR_0 += VAR_4;
    VAR_6 -= VAR_4;
    VAR_1 -= VAR_4;
    VAR_2[0] = VAR_11;
    VAR_11 = ',';
    VAR_3++;
    VAR_2++;
    if( VAR_7==0 ){
      FUNC_1(VAR_2, "*");
    }else if( VAR_7>=1 && VAR_7<=6 ){
      VAR_8 = (signed char)VAR_9[0];
      VAR_9++;
      switch( VAR_7 ){
        case 6: VAR_8 = (VAR_8<<16) + (VAR_9[0]<<8) + VAR_9[1]; VAR_9 += 2;
        case 5: VAR_8 = (VAR_8<<16) + (VAR_9[0]<<8) + VAR_9[1]; VAR_9 += 2;
        case 4: VAR_8 = (VAR_8<<8) + VAR_9[0]; VAR_9++;
        case 3: VAR_8 = (VAR_8<<8) + VAR_9[0]; VAR_9++;
        case 2: VAR_8 = (VAR_8<<8) + VAR_9[0]; VAR_9++;
      }
      FUNC_1(VAR_2, "%lld", VAR_8);
    }else if( VAR_7==7 ){
      FUNC_1(VAR_2, "real");
      VAR_9 += 8;
    }else if( VAR_7==8 ){
      FUNC_1(VAR_2, "0");
    }else if( VAR_7==9 ){
      FUNC_1(VAR_2, "1");
    }else if( VAR_7>=12 ){
      i64 VAR_12 = (VAR_7-12)/2;
      if( (VAR_7&1)==0 ){
        FUNC_1(VAR_2, "blob(%lld)", VAR_12);
      }else{
        FUNC_1(VAR_2, "txt(%lld)", VAR_12);
      }
      VAR_9 += VAR_12;
    }
    VAR_5 = (int)FUNC_2(VAR_2);
    VAR_2 += VAR_5;
    VAR_3 += VAR_5;
  }
  return VAR_3;
}
