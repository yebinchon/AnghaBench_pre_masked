
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3_int64 ;
struct TYPE_10__ {scalar_t__ nSegment; } ;
struct TYPE_9__ {scalar_t__ aIndex; } ;
typedef TYPE_1__ Fts3Table ;
typedef int Fts3SegReader ;
typedef TYPE_2__ Fts3MultiSegReader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_1__*,char const*,int,char const*,int,int *,int *) ;
 int FUNC_2 (TYPE_1__*,int,int,int,int **) ;
 int FUNC_3 (scalar_t__,int,int ,int ,int ,char const*,int,int **) ;
 int FUNC_4 (TYPE_1__*,int,char const*,int,int,int **) ;
 char* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(
  Fts3Table *VAR_4,
  int VAR_5,
  int VAR_6,
  int VAR_7,
  const char *VAR_8,
  int VAR_9,
  int VAR_10,
  int VAR_11,
  Fts3MultiSegReader *VAR_12
){
  int VAR_13 = VAR_2;
  sqlite3_stmt *VAR_14 = 0;
  int VAR_15;







  if( VAR_7<0 && VAR_4->aIndex ){
    Fts3SegReader *VAR_16 = 0;
    VAR_13 = FUNC_4(VAR_4, VAR_6, VAR_8, VAR_9, VAR_10||VAR_11, &VAR_16);
    if( VAR_13==VAR_2 && VAR_16 ){
      VAR_13 = FUNC_0(VAR_12, VAR_16);
    }
  }

  if( VAR_7!=VAR_0 ){
    if( VAR_13==VAR_2 ){
      VAR_13 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, &VAR_14);
    }

    while( VAR_13==VAR_2 && VAR_3==(VAR_13 = FUNC_9(VAR_14)) ){
      Fts3SegReader *VAR_17 = 0;


      sqlite3_int64 VAR_18 = FUNC_7(VAR_14, 1);
      sqlite3_int64 VAR_19 = FUNC_7(VAR_14, 2);
      sqlite3_int64 VAR_20 = FUNC_7(VAR_14, 3);
      int VAR_21 = FUNC_6(VAR_14, 4);
      char const *VAR_22 = FUNC_5(VAR_14, 4);



      if( VAR_18 && VAR_8 && VAR_22 ){
        sqlite3_int64 *VAR_23 = (VAR_10 ? &VAR_19 : 0);
        VAR_13 = FUNC_1(VAR_4, VAR_8, VAR_9, VAR_22, VAR_21, &VAR_18, VAR_23);
        if( VAR_13!=VAR_2 ) goto finished;
        if( VAR_10==0 && VAR_11==0 ) VAR_19 = VAR_18;
      }

      VAR_13 = FUNC_3(VAR_12->nSegment+1,
          (VAR_10==0 && VAR_11==0),
          VAR_18, VAR_19,
          VAR_20, VAR_22, VAR_21, &VAR_17
      );
      if( VAR_13!=VAR_2 ) goto finished;
      VAR_13 = FUNC_0(VAR_12, VAR_17);
    }
  }

 finished:
  VAR_15 = FUNC_8(VAR_14);
  if( VAR_13==VAR_1 ) VAR_13 = VAR_15;

  return VAR_13;
}
