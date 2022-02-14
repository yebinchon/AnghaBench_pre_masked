
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lsm_db ;
typedef int lsm_cursor ;
typedef int OomTest ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,void const**,int*) ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (int *,void*,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,void const**,int*) ;
 scalar_t__ FUNC_6 (void*,void const*,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static void FUNC_9(
  OomTest *VAR_1,
  lsm_db *VAR_2,
  void *VAR_3, int VAR_4,
  void *VAR_5, int VAR_6,
  int *VAR_7
){
  FUNC_8(VAR_1, *VAR_7);
  if( *VAR_7==VAR_0 ){
    lsm_cursor *VAR_8;
    int VAR_9;

    VAR_9 = FUNC_2(VAR_2, &VAR_8);
    if( VAR_9==VAR_0 ) VAR_9 = FUNC_3(VAR_8, VAR_3, VAR_4, 0);
    FUNC_8(VAR_1, VAR_9);

    if( VAR_9==VAR_0 ){
      const void *VAR_10; int VAR_11;
      FUNC_7(VAR_1, FUNC_4(VAR_8));

      VAR_9 = FUNC_1(VAR_8, &VAR_10, &VAR_11);
      FUNC_8(VAR_1, VAR_9);
      FUNC_7(VAR_1, VAR_9!=VAR_0 || (VAR_11==VAR_4 && FUNC_6(VAR_3, VAR_10, VAR_4)==0) );
    }

    if( VAR_9==VAR_0 ){
      const void *VAR_12; int VAR_13;
      FUNC_7(VAR_1, FUNC_4(VAR_8));

      VAR_9 = FUNC_5(VAR_8, &VAR_12, &VAR_13);
      FUNC_8(VAR_1, VAR_9);
      FUNC_7(VAR_1, VAR_9!=VAR_0 || (VAR_13==VAR_6 && FUNC_6(VAR_5, VAR_12, VAR_6)==0) );
    }

    FUNC_0(VAR_8);
    *VAR_7 = VAR_9;
  }
}
