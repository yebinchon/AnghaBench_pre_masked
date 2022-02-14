
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int sqlite3_value ;
typedef int sqlite3_stmt ;
typedef int sqlite3_context ;
typedef int readers ;
typedef int pCursor ;
typedef int fulltext_vtab ;
typedef int fulltext_cursor ;
typedef int buf ;
struct TYPE_5__ {int segment; int reader; } ;
typedef TYPE_1__ OptLeavesReader ;
typedef int LeafWriter ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int ,int ,char const*,int,int *) ;
 int FUNC_8 (int **,int ,int) ;
 int FUNC_9 (int *,TYPE_1__*,int,int *) ;
 int FUNC_10 (int *,int*,int*) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int ,int **) ;
 char* FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (TYPE_1__*) ;
 TYPE_1__* FUNC_19 (int) ;
 int FUNC_20 (int *,char*,int) ;
 int FUNC_21 (int *,char*,int,int ) ;
 int FUNC_22 (int,char*,char*,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 scalar_t__ FUNC_26 (int *) ;

__attribute__((used)) static void FUNC_27(sqlite3_context *VAR_6,
                         int VAR_7, sqlite3_value **VAR_8){
  fulltext_cursor *VAR_9;
  if( VAR_7>1 ){
    FUNC_20(VAR_6, "excess arguments to optimize()",-1);
  }else if( FUNC_26(VAR_8[0])!=VAR_1 ||
            FUNC_25(VAR_8[0])!=sizeof(VAR_9) ){
    FUNC_20(VAR_6, "illegal first argument to optimize",-1);
  }else{
    fulltext_vtab *VAR_10;
    int VAR_11, VAR_12, VAR_13;
    OptLeavesReader *VAR_14;
    int VAR_15;
    LeafWriter VAR_16;
    sqlite3_stmt *VAR_17;

    FUNC_8(&VAR_9, FUNC_24(VAR_8[0]), sizeof(VAR_9));
    VAR_10 = FUNC_1(VAR_9);


    VAR_12 = FUNC_2(VAR_10);
    if( VAR_12!=VAR_3 ) goto err;

    VAR_12 = FUNC_10(VAR_10, &VAR_15, &VAR_13);
    if( VAR_12!=VAR_3 ) goto err;
    if( VAR_15==0 || VAR_15==1 ){
      FUNC_21(VAR_6, "Index already optimal", -1,
                          VAR_5);
      return;
    }

    VAR_12 = FUNC_12(VAR_10, VAR_0, &VAR_17);
    if( VAR_12!=VAR_3 ) goto err;

    VAR_14 = FUNC_19(VAR_15*sizeof(VAR_14[0]));
    if( VAR_14==((void*)0) ) goto err;




    FUNC_5(VAR_13, 0, &VAR_16);

    VAR_11 = 0;
    while( (VAR_12 = FUNC_23(VAR_17))==VAR_4 ){
      sqlite_int64 VAR_18 = FUNC_15(VAR_17, 0);
      sqlite_int64 VAR_19 = FUNC_15(VAR_17, 1);
      const char *VAR_20 = FUNC_13(VAR_17, 2);
      int VAR_21 = FUNC_14(VAR_17, 2);

      FUNC_0( VAR_11<VAR_15 );
      VAR_12 = FUNC_7(VAR_10, -1, VAR_18, VAR_19, VAR_20, VAR_21,
                            &VAR_14[VAR_11].reader);
      if( VAR_12!=VAR_3 ) break;

      VAR_14[VAR_11].segment = VAR_11;
      VAR_11++;
    }


    if( VAR_12==VAR_2 ){
      FUNC_0( VAR_11==VAR_15 );
      VAR_12 = FUNC_9(VAR_10, VAR_14, VAR_15, &VAR_16);
    }

    while( VAR_11-- > 0 ){
      FUNC_6(&VAR_14[VAR_11].reader);
    }
    FUNC_18(VAR_14);




    if( VAR_12==VAR_3 ){
      for( VAR_11=0; VAR_11<=VAR_13; VAR_11++ ){
        VAR_12 = FUNC_11(VAR_10, VAR_11);
        if( VAR_12!=VAR_3 ) break;
      }

      if( VAR_12==VAR_3 ) VAR_12 = FUNC_4(VAR_10, &VAR_16);
    }

    FUNC_3(&VAR_16);

    if( VAR_12!=VAR_3 ) goto err;

    FUNC_21(VAR_6, "Index optimized", -1, VAR_5);
    return;




 err:
    {
      char VAR_22[512];
      FUNC_22(sizeof(VAR_22), VAR_22, "Error in optimize: %s",
                       FUNC_17(FUNC_16(VAR_6)));
      FUNC_20(VAR_6, VAR_22, -1);
    }
  }
}
