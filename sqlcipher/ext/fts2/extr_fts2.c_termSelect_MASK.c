
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int sqlite3_stmt ;
struct TYPE_11__ {scalar_t__ nPendingData; int nColumn; } ;
typedef TYPE_1__ fulltext_vtab ;
struct TYPE_12__ {scalar_t__ nData; int pData; } ;
typedef int DocListType ;
typedef TYPE_2__ DataBuffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,int ,scalar_t__,int,int ,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,char const*,int const,int const,char const*,int,int,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,int ,int **) ;
 char* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(fulltext_vtab *VAR_5, int VAR_6,
                      const char *VAR_7, int VAR_8, int VAR_9,
                      DocListType VAR_10, DataBuffer *VAR_11){
  DataBuffer VAR_12;
  sqlite3_stmt *VAR_13;
  int VAR_14 = FUNC_5(VAR_5, VAR_1, &VAR_13);
  if( VAR_14!=VAR_3 ) return VAR_14;


  FUNC_0( VAR_5->nPendingData<0 );

  FUNC_2(&VAR_12, 0);




  while( (VAR_14 = FUNC_9(VAR_13))==VAR_4 ){
    const char *VAR_15 = FUNC_6(VAR_13, 2);
    const int VAR_16 = FUNC_7(VAR_13, 2);
    const sqlite_int64 VAR_17 = FUNC_8(VAR_13, 1);
    VAR_14 = FUNC_4(VAR_5, VAR_15, VAR_16, VAR_17, VAR_7, VAR_8, VAR_9,
                     &VAR_12);
    if( VAR_14!=VAR_3 ) goto err;
  }
  if( VAR_14==VAR_2 ){
    if( VAR_12.nData!=0 ){





      if( VAR_6==VAR_5->nColumn) VAR_6 = -1;
      FUNC_3(VAR_0, VAR_12.pData, VAR_12.nData,
                  VAR_6, VAR_10, VAR_11);
    }
    VAR_14 = VAR_3;
  }

 err:
  FUNC_1(&VAR_12);
  return VAR_14;
}
