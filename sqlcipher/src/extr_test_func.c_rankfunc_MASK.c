
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,double) ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 double FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(sqlite3_context *VAR_0, int VAR_1, sqlite3_value **VAR_2){
  int *VAR_3;
  int VAR_4;
  int VAR_5 = 0;
  int VAR_6 = 0;
  int VAR_7;
  double VAR_8 = 0.0;

  FUNC_0( sizeof(int)==4 );
  if( VAR_1<1 ) goto wrong_number_args;
  VAR_3 = (int*)FUNC_3(VAR_2[0]);
  VAR_4 = FUNC_4(VAR_2[0]) / sizeof(int);
  if( VAR_4>=2 ){
    VAR_6 = VAR_3[0];
    VAR_5 = VAR_3[1];
  }
  if( VAR_4!=(2+3*VAR_5*VAR_6) ){
    FUNC_2(VAR_0,
        "invalid matchinfo blob passed to function rank()", -1);
    return;
  }
  if( VAR_1!=(1+VAR_5) ) goto wrong_number_args;


  for(VAR_7=0; VAR_7<VAR_6; VAR_7++){
    int VAR_9;
    int *VAR_10 = &VAR_3[2 + VAR_7*VAR_5*3];
    for(VAR_9=0; VAR_9<VAR_5; VAR_9++){
      int VAR_11 = VAR_10[3*VAR_9];
      int VAR_12 = VAR_10[3*VAR_9+1];
      double VAR_13 = FUNC_5(VAR_2[VAR_9+1]);
      if( VAR_11>0 ){
        VAR_8 += ((double)VAR_11 / (double)VAR_12) * VAR_13;
      }
    }
  }

  FUNC_1(VAR_0, VAR_8);
  return;


wrong_number_args:
  FUNC_2(VAR_0, "wrong number of arguments to function rank()", -1);
}
