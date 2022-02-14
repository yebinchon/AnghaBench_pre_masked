
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int i64 ;
typedef int LONGDOUBLE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,double*,int,int) ;
 scalar_t__ FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const) ;
 int FUNC_4 (int) ;

int FUNC_5(const char *VAR_5, double *VAR_6, int VAR_7, u8 VAR_8){

  int VAR_9;
  const char *VAR_10 = VAR_5 + VAR_7;

  int VAR_11 = 1;
  i64 VAR_12 = 0;
  int VAR_13 = 0;
  int VAR_14 = 1;
  int VAR_15 = 0;
  int VAR_16 = 1;
  double VAR_17;
  int VAR_18 = 0;
  int VAR_19 = 0;

  FUNC_0( VAR_8==VAR_4 || VAR_8==VAR_3 || VAR_8==VAR_2 );
  *VAR_6 = 0.0;

  if( VAR_8==VAR_4 ){
    VAR_9 = 1;
  }else{
    int VAR_20;
    VAR_9 = 2;
    FUNC_0( VAR_3==2 && VAR_2==3 );
    for(VAR_20=3-VAR_8; VAR_20<VAR_7 && VAR_5[VAR_20]==0; VAR_20+=2){}
    VAR_19 = VAR_20<VAR_7;
    VAR_10 = &VAR_5[VAR_20^1];
    VAR_5 += (VAR_8&1);
  }


  while( VAR_5<VAR_10 && FUNC_3(*VAR_5) ) VAR_5+=VAR_9;
  if( VAR_5>=VAR_10 ) return 0;


  if( *VAR_5=='-' ){
    VAR_11 = -1;
    VAR_5+=VAR_9;
  }else if( *VAR_5=='+' ){
    VAR_5+=VAR_9;
  }


  while( VAR_5<VAR_10 && FUNC_2(*VAR_5) && VAR_12<((VAR_1-9)/10) ){
    VAR_12 = VAR_12*10 + (*VAR_5 - '0');
    VAR_5+=VAR_9; VAR_18++;
  }



  while( VAR_5<VAR_10 && FUNC_2(*VAR_5) ){ VAR_5+=VAR_9; VAR_18++; VAR_13++; }
  if( VAR_5>=VAR_10 ) goto do_atof_calc;


  if( *VAR_5=='.' ){
    VAR_5+=VAR_9;


    while( VAR_5<VAR_10 && FUNC_2(*VAR_5) ){
      if( VAR_12<((VAR_1-9)/10) ){
        VAR_12 = VAR_12*10 + (*VAR_5 - '0');
        VAR_13--;
      }
      VAR_5+=VAR_9; VAR_18++;
    }
  }
  if( VAR_5>=VAR_10 ) goto do_atof_calc;


  if( *VAR_5=='e' || *VAR_5=='E' ){
    VAR_5+=VAR_9;
    VAR_16 = 0;




    if( VAR_5>=VAR_10 ) goto do_atof_calc;


    if( *VAR_5=='-' ){
      VAR_14 = -1;
      VAR_5+=VAR_9;
    }else if( *VAR_5=='+' ){
      VAR_5+=VAR_9;
    }

    while( VAR_5<VAR_10 && FUNC_2(*VAR_5) ){
      VAR_15 = VAR_15<10000 ? (VAR_15*10 + (*VAR_5 - '0')) : 10000;
      VAR_5+=VAR_9;
      VAR_16 = 1;
    }
  }


  while( VAR_5<VAR_10 && FUNC_3(*VAR_5) ) VAR_5+=VAR_9;

do_atof_calc:

  VAR_15 = (VAR_15*VAR_14) + VAR_13;
  if( VAR_15<0 ) {
    VAR_14 = -1;
    VAR_15 *= -1;
  } else {
    VAR_14 = 1;
  }

  if( VAR_12==0 ) {

    VAR_17 = VAR_11<0 ? -(double)0 : (double)0;
  } else {






    while( VAR_15>0 ){
      if( VAR_14>0 ){
        if( VAR_12>=(VAR_1/10) ) break;
        VAR_12 *= 10;
      }else{
        if( VAR_12%10!=0 ) break;
        VAR_12 /= 10;
      }
      VAR_15--;
    }


    VAR_12 = VAR_11<0 ? -VAR_12 : VAR_12;

    if( VAR_15==0 ){
      VAR_17 = (double)VAR_12;
    }else{

      if( VAR_15>307 ){
        if( VAR_15<342 ){
          LONGDOUBLE_TYPE VAR_21 = FUNC_4(VAR_15-308);
          if( VAR_14<0 ){
            VAR_17 = VAR_12 / VAR_21;
            VAR_17 /= 1.0e+308;
          }else{
            VAR_17 = VAR_12 * VAR_21;
            VAR_17 *= 1.0e+308;
          }
        }else{ FUNC_0( VAR_15>=342 );
          if( VAR_14<0 ){
            VAR_17 = 0.0*VAR_12;
          }else{



            VAR_17 = 1e308*1e308*VAR_12;

          }
        }
      }else{
        LONGDOUBLE_TYPE VAR_22 = FUNC_4(VAR_15);
        if( VAR_14<0 ){
          VAR_17 = VAR_12 / VAR_22;
        }else{
          VAR_17 = VAR_12 * VAR_22;
        }
      }
    }
  }


  *VAR_6 = VAR_17;


  return VAR_5==VAR_10 && VAR_18>0 && VAR_16 && VAR_19==0;



}
