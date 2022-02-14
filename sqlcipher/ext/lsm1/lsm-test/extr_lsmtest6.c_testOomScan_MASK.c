
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lsm_db ;
typedef int lsm_cursor ;
typedef int OomTest ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,void const**,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,void const*,int,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,void const**,int*) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static void FUNC_9(
  OomTest *VAR_3,
  lsm_db *VAR_4,
  int VAR_5,
  const void *VAR_6, int VAR_7,
  int VAR_8,
  int *VAR_9
){
  if( *VAR_9==0 ){
    int VAR_10;
    int VAR_11 = 0;
    lsm_cursor *VAR_12;
    int (*VAR_13)(lsm_cursor *) = 0;


    VAR_10 = FUNC_3(VAR_4, &VAR_12);
    FUNC_8(VAR_3, VAR_10);

    if( VAR_10==VAR_0 ){
      if( VAR_5 ){
        VAR_10 = FUNC_5(VAR_12, VAR_6, VAR_7, VAR_2);
        VAR_13 = FUNC_4;
      }else{
        VAR_10 = FUNC_5(VAR_12, VAR_6, VAR_7, VAR_1);
        VAR_13 = FUNC_2;
      }
    }
    FUNC_8(VAR_3, VAR_10);

    while( VAR_10==VAR_0 && FUNC_6(VAR_12) && VAR_11<VAR_8 ){
      const void *VAR_14; int VAR_15;

      VAR_10 = FUNC_1(VAR_12, &VAR_14, &VAR_15);
      FUNC_8(VAR_3, VAR_10);
      if( VAR_10==VAR_0 ){
        VAR_10 = FUNC_7(VAR_12, &VAR_14, &VAR_15);
        FUNC_8(VAR_3, VAR_10);
      }
      if( VAR_10==VAR_0 ){
        VAR_10 = VAR_13(VAR_12);
        FUNC_8(VAR_3, VAR_10);
      }
      VAR_11++;
    }

    FUNC_0(VAR_12);
    *VAR_9 = VAR_10;
  }
}
