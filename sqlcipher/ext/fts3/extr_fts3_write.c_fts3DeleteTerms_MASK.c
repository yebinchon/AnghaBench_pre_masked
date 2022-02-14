
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef int sqlite3_value ;
typedef int sqlite3_stmt ;
typedef int i64 ;
struct TYPE_7__ {int nColumn; scalar_t__* abNotindexed; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,char const*,int,int *) ;
 int FUNC_2 (TYPE_1__*,int,int,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int **,int **) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(
  int *VAR_3,
  Fts3Table *VAR_4,
  sqlite3_value *VAR_5,
  u32 *VAR_6,
  int *VAR_7
){
  int VAR_8;
  sqlite3_stmt *VAR_9;

  FUNC_0( *VAR_7==0 );
  if( *VAR_3 ) return;
  VAR_8 = FUNC_3(VAR_4, VAR_2, &VAR_9, &VAR_5);
  if( VAR_8==VAR_0 ){
    if( VAR_1==FUNC_9(VAR_9) ){
      int VAR_10;
      int VAR_11 = FUNC_4(VAR_4, VAR_9);
      i64 VAR_12 = FUNC_6(VAR_9, 0);
      VAR_8 = FUNC_2(VAR_4, 1, VAR_11, VAR_12);
      for(VAR_10=1; VAR_8==VAR_0 && VAR_10<=VAR_4->nColumn; VAR_10++){
        int VAR_13 = VAR_10-1;
        if( VAR_4->abNotindexed[VAR_13]==0 ){
          const char *VAR_14 = (const char *)FUNC_7(VAR_9, VAR_10);
          VAR_8 = FUNC_1(VAR_4, VAR_11, VAR_14, -1, &VAR_6[VAR_13]);
          VAR_6[VAR_4->nColumn] += FUNC_5(VAR_9, VAR_10);
        }
      }
      if( VAR_8!=VAR_0 ){
        FUNC_8(VAR_9);
        *VAR_3 = VAR_8;
        return;
      }
      *VAR_7 = 1;
    }
    VAR_8 = FUNC_8(VAR_9);
  }else{
    FUNC_8(VAR_9);
  }
  *VAR_3 = VAR_8;
}
