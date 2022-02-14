
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3 ;
struct TYPE_7__ {char* zName; char* zColl; int iPk; } ;
struct TYPE_6__ {int nCol; char* zName; TYPE_2__* aCol; } ;
typedef TYPE_1__ IdxTable ;
typedef TYPE_2__ IdxColumn ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int*,int *) ;
 TYPE_1__* FUNC_2 (int*,int) ;
 int FUNC_3 (int *,int **,char**,char*,char const*) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,char const*,char const*,int ,char const**,int ,int ,int ) ;

__attribute__((used)) static int FUNC_11(
  sqlite3 *VAR_2,
  const char *VAR_3,
  IdxTable **VAR_4,
  char **VAR_5
){
  sqlite3_stmt *VAR_6 = 0;
  int VAR_7 = 0;
  int VAR_8 = FUNC_0(VAR_3);
  int VAR_9 = sizeof(IdxTable) + VAR_8 + 1;
  IdxTable *VAR_10 = 0;
  int VAR_11, VAR_12;
  char *VAR_13 = 0;

  VAR_11 = FUNC_3(VAR_2, &VAR_6, VAR_5, "PRAGMA table_info=%Q", VAR_3);
  while( VAR_11==VAR_0 && VAR_1==FUNC_9(VAR_6) ){
    const char *VAR_14 = (const char*)FUNC_6(VAR_6, 1);
    VAR_9 += 1 + FUNC_0(VAR_14);
    VAR_11 = FUNC_10(
        VAR_2, "main", VAR_3, VAR_14, 0, &VAR_14, 0, 0, 0
    );
    VAR_9 += 1 + FUNC_0(VAR_14);
    VAR_7++;
  }
  VAR_12 = FUNC_8(VAR_6);
  if( VAR_11==VAR_0 ) VAR_11 = VAR_12;

  VAR_9 += sizeof(IdxColumn) * VAR_7;
  if( VAR_11==VAR_0 ){
    VAR_10 = FUNC_2(&VAR_11, VAR_9);
  }
  if( VAR_11==VAR_0 ){
    VAR_10->aCol = (IdxColumn*)&VAR_10[1];
    VAR_10->nCol = VAR_7;
    VAR_13 = (char*)&VAR_10->aCol[VAR_7];
  }

  VAR_7 = 0;
  while( VAR_11==VAR_0 && VAR_1==FUNC_9(VAR_6) ){
    const char *VAR_15 = (const char*)FUNC_6(VAR_6, 1);
    int VAR_16 = FUNC_0(VAR_15) + 1;
    VAR_10->aCol[VAR_7].zName = VAR_13;
    VAR_10->aCol[VAR_7].iPk = FUNC_5(VAR_6, 5);
    FUNC_4(VAR_13, VAR_15, VAR_16);
    VAR_13 += VAR_16;

    VAR_11 = FUNC_10(
        VAR_2, "main", VAR_3, VAR_15, 0, &VAR_15, 0, 0, 0
    );
    if( VAR_11==VAR_0 ){
      VAR_16 = FUNC_0(VAR_15) + 1;
      VAR_10->aCol[VAR_7].zColl = VAR_13;
      FUNC_4(VAR_13, VAR_15, VAR_16);
      VAR_13 += VAR_16;
    }

    VAR_7++;
  }
  FUNC_1(&VAR_11, VAR_6);

  if( VAR_11!=VAR_0 ){
    FUNC_7(VAR_10);
    VAR_10 = 0;
  }else{
    VAR_10->zName = VAR_13;
    FUNC_4(VAR_10->zName, VAR_3, VAR_8+1);
  }

  *VAR_4 = VAR_10;
  return VAR_11;
}
