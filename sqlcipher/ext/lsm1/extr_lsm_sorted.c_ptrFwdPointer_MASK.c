
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int Segment ;
typedef int Page ;
typedef scalar_t__ LsmPgno ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int,int **) ;
 int* FUNC_1 (int *,int*) ;
 int FUNC_2 (int *) ;
 int* FUNC_3 (int*,int,int) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (int*,int) ;
 scalar_t__ FUNC_6 (int*,int) ;
 scalar_t__ FUNC_7 (int*,int,int) ;

__attribute__((used)) static int FUNC_8(
  Page *VAR_3,
  int VAR_4,
  Segment *VAR_5,
  LsmPgno *VAR_6,
  int *VAR_7
){
  Page *VAR_8 = VAR_3;
  int VAR_9 = VAR_4;
  int VAR_10 = VAR_0;

  do {
    Page *VAR_11 = 0;
    u8 *VAR_12;
    int VAR_13;

    VAR_12 = FUNC_1(VAR_8, &VAR_13);
    if( (FUNC_4(VAR_12, VAR_13) & VAR_2)==0 ){
      int VAR_14;
      int VAR_15 = FUNC_5(VAR_12, VAR_13);
      for(VAR_14=VAR_9; VAR_14<VAR_15; VAR_14++){
        u8 VAR_16 = *FUNC_3(VAR_12, VAR_13, VAR_14);
        if( (VAR_16 & VAR_1)==0 ){
          *VAR_7 = 1;
          *VAR_6 = FUNC_7(VAR_12, VAR_13, VAR_14) + FUNC_6(VAR_12, VAR_13);
          FUNC_2(VAR_8);
          return VAR_0;
        }
      }
    }

    VAR_10 = FUNC_0(VAR_5, VAR_8, 1, &VAR_11);
    FUNC_2(VAR_8);
    VAR_8 = VAR_11;
    VAR_9 = 0;
  }while( VAR_8 && VAR_10==VAR_0 );
  FUNC_2(VAR_8);

  *VAR_7 = 0;
  return VAR_10;
}
