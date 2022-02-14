
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_3__ {double rPct; int nUsed; int nAlloc; double* a; } ;
typedef TYPE_1__ Percentile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (double) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (double,double) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (double*) ;
 double* FUNC_6 (double*,int) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int *) ;
 double FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(sqlite3_context *VAR_3, int VAR_4, sqlite3_value **VAR_5){
  Percentile *VAR_6;
  double VAR_7;
  int VAR_8;
  double VAR_9;
  FUNC_0( VAR_4==2 );


  VAR_8 = FUNC_10(VAR_5[1]);
  VAR_7 = FUNC_9(VAR_5[1]);
  if( (VAR_8!=VAR_1 && VAR_8!=VAR_0)
   || VAR_7<0.0 || VAR_7>100.0 ){
    FUNC_7(VAR_3, "2nd argument to percentile() is not "
                         "a number between 0.0 and 100.0", -1);
    return;
  }


  VAR_6 = (Percentile*)FUNC_4(VAR_3, sizeof(*VAR_6));
  if( VAR_6==0 ) return;



  if( VAR_6->rPct==0.0 ){
    VAR_6->rPct = VAR_7+1.0;
  }else if( !FUNC_3(VAR_6->rPct,VAR_7+1.0) ){
    FUNC_7(VAR_3, "2nd argument to percentile() is not the "
                               "same for all input rows", -1);
    return;
  }


  VAR_8 = FUNC_11(VAR_5[0]);
  if( VAR_8==VAR_2 ) return;



  if( VAR_8!=VAR_1 && VAR_8!=VAR_0 ){
    FUNC_7(VAR_3, "1st argument to percentile() is not "
                               "numeric", -1);
    return;
  }


  VAR_9 = FUNC_9(VAR_5[0]);
  if( FUNC_1(VAR_9) ){
    FUNC_7(VAR_3, "Inf input to percentile()", -1);
    return;
  }


  if( VAR_6->nUsed>=VAR_6->nAlloc ){
    unsigned VAR_10 = VAR_6->nAlloc*2 + 250;
    double *VAR_11 = FUNC_6(VAR_6->a, sizeof(double)*VAR_10);
    if( VAR_11==0 ){
      FUNC_5(VAR_6->a);
      FUNC_2(VAR_6, 0, sizeof(*VAR_6));
      FUNC_8(VAR_3);
      return;
    }
    VAR_6->nAlloc = VAR_10;
    VAR_6->a = VAR_11;
  }
  VAR_6->a[VAR_6->nUsed++] = VAR_9;
}
