
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static double FUNC_1(double VAR_1){
  FUNC_0( VAR_1>=-0.5*VAR_0 && VAR_1<=2.0*VAR_0 );
  if( VAR_1>=1.5*VAR_0 ){
    VAR_1 -= 2.0*VAR_0;
  }
  if( VAR_1>=0.5*VAR_0 ){
    return -FUNC_1(VAR_1-VAR_0);
  }else{
    double VAR_2 = VAR_1*VAR_1;
    double VAR_3 = VAR_2*VAR_1;
    double VAR_4 = VAR_3*VAR_2;
    return 0.9996949*VAR_1 - 0.1656700*VAR_3 + 0.0075134*VAR_4;
  }
}
