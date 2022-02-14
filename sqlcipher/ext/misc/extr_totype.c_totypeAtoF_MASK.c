
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_int64 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, double *VAR_2, int VAR_3){
  const char *VAR_4 = VAR_1 + VAR_3;

  int VAR_5 = 1;
  sqlite3_int64 VAR_6 = 0;
  int VAR_7 = 0;
  int VAR_8 = 1;
  int VAR_9 = 0;
  int VAR_10 = 1;
  double VAR_11;
  int VAR_12 = 0;
  int VAR_13 = 0;

  *VAR_2 = 0.0;


  while( VAR_1<VAR_4 && FUNC_1(*VAR_1) ) VAR_1++;
  if( VAR_1>=VAR_4 ) return 0;


  if( *VAR_1=='-' ){
    VAR_5 = -1;
    VAR_1++;
  }else if( *VAR_1=='+' ){
    VAR_1++;
  }


  while( VAR_1<VAR_4 && VAR_1[0]=='0' ) VAR_1++, VAR_12++;


  while( VAR_1<VAR_4 && FUNC_0(*VAR_1) && VAR_6<((VAR_0-9)/10) ){
    VAR_6 = VAR_6*10 + (*VAR_1 - '0');
    VAR_1++, VAR_12++;
  }



  while( VAR_1<VAR_4 && FUNC_0(*VAR_1) ) VAR_1++, VAR_12++, VAR_7++;
  if( VAR_1>=VAR_4 ) goto totype_atof_calc;


  if( *VAR_1=='.' ){
    VAR_1++;


    while( VAR_1<VAR_4 && FUNC_0(*VAR_1) && VAR_6<((VAR_0-9)/10) ){
      VAR_6 = VAR_6*10 + (*VAR_1 - '0');
      VAR_1++, VAR_12++, VAR_7--;
    }

    while( VAR_1<VAR_4 && FUNC_0(*VAR_1) ) VAR_1++, VAR_12++;
  }
  if( VAR_1>=VAR_4 ) goto totype_atof_calc;


  if( *VAR_1=='e' || *VAR_1=='E' ){
    VAR_1++;
    VAR_10 = 0;
    if( VAR_1>=VAR_4 ) goto totype_atof_calc;

    if( *VAR_1=='-' ){
      VAR_8 = -1;
      VAR_1++;
    }else if( *VAR_1=='+' ){
      VAR_1++;
    }

    while( VAR_1<VAR_4 && FUNC_0(*VAR_1) ){
      VAR_9 = VAR_9<10000 ? (VAR_9*10 + (*VAR_1 - '0')) : 10000;
      VAR_1++;
      VAR_10 = 1;
    }
  }


  if( VAR_12 && VAR_10 ){
    while( VAR_1<VAR_4 && FUNC_1(*VAR_1) ) VAR_1++;
  }

totype_atof_calc:

  VAR_9 = (VAR_9*VAR_8) + VAR_7;
  if( VAR_9<0 ) {
    VAR_8 = -1;
    VAR_9 *= -1;
  } else {
    VAR_8 = 1;
  }


  if( !VAR_6 ) {


    VAR_11 = (VAR_5<0 && VAR_12) ? -(double)0 : (double)0;
  } else {

    if( VAR_8>0 ){
      while( VAR_6<(VAR_0/10) && VAR_9>0 ) VAR_9--,VAR_6*=10;
    }else{
      while( !(VAR_6%10) && VAR_9>0 ) VAR_9--,VAR_6/=10;
    }


    VAR_6 = VAR_5<0 ? -VAR_6 : VAR_6;



    if( VAR_9 ){
      double VAR_14 = 1.0;

      if( VAR_9>307 && VAR_9<342 ){
        while( VAR_9%308 ) { VAR_14 *= 1.0e+1; VAR_9 -= 1; }
        if( VAR_8<0 ){
          VAR_11 = VAR_6 / VAR_14;
          VAR_11 /= 1.0e+308;
        }else{
          VAR_11 = VAR_6 * VAR_14;
          VAR_11 *= 1.0e+308;
        }
      }else if( VAR_9>=342 ){
        if( VAR_8<0 ){
          VAR_11 = 0.0*VAR_6;
        }else{
          VAR_11 = 1e308*1e308*VAR_6;
        }
      }else{


        while( VAR_9%22 ) { VAR_14 *= 1.0e+1; VAR_9 -= 1; }
        while( VAR_9>0 ) { VAR_14 *= 1.0e+22; VAR_9 -= 22; }
        if( VAR_8<0 ){
          VAR_11 = VAR_6 / VAR_14;
        }else{
          VAR_11 = VAR_6 * VAR_14;
        }
      }
    } else {
      VAR_11 = (double)VAR_6;
    }
  }


  *VAR_2 = VAR_11;


  return VAR_1>=VAR_4 && VAR_12>0 && VAR_10 && VAR_13==0;
}
