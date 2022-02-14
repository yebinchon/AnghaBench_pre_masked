
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef int sqlite3_int64 ;
typedef int sqlite3 ;
struct TYPE_5__ {char* zDb; char* zName; int nIndex; int * db; } ;
struct TYPE_4__ {TYPE_2__* pFts3Tab; } ;
typedef TYPE_1__ Fts3auxTable ;
typedef TYPE_2__ Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**,char*) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (char*,char const*,int) ;
 scalar_t__ FUNC_8 (char const*) ;

__attribute__((used)) static int FUNC_9(
  sqlite3 *VAR_4,
  void *VAR_5,
  int VAR_6,
  const char * const *VAR_7,
  sqlite3_vtab **VAR_8,
  char **VAR_9
){
  char const *VAR_10;
  char const *VAR_11;
  int VAR_12;
  int VAR_13;
  sqlite3_int64 VAR_14;
  int VAR_15;
  Fts3auxTable *VAR_16;

  FUNC_0(VAR_5);






  if( VAR_6!=4 && VAR_6!=5 ) goto bad_args;

  VAR_10 = VAR_7[1];
  VAR_12 = (int)FUNC_8(VAR_10);
  if( VAR_6==5 ){
    if( VAR_12==4 && 0==FUNC_7("temp", VAR_10, 4) ){
      VAR_10 = VAR_7[3];
      VAR_12 = (int)FUNC_8(VAR_10);
      VAR_11 = VAR_7[4];
    }else{
      goto bad_args;
    }
  }else{
    VAR_11 = VAR_7[3];
  }
  VAR_13 = (int)FUNC_8(VAR_11);

  VAR_15 = FUNC_5(VAR_4, VAR_0);
  if( VAR_15!=VAR_3 ) return VAR_15;

  VAR_14 = sizeof(Fts3auxTable) + sizeof(Fts3Table) + VAR_12 + VAR_13 + 2;
  VAR_16 = (Fts3auxTable *)FUNC_6(VAR_14);
  if( !VAR_16 ) return VAR_2;
  FUNC_2(VAR_16, 0, VAR_14);

  VAR_16->pFts3Tab = (Fts3Table *)&VAR_16[1];
  VAR_16->pFts3Tab->zDb = (char *)&VAR_16->pFts3Tab[1];
  VAR_16->pFts3Tab->zName = &VAR_16->pFts3Tab->zDb[VAR_12+1];
  VAR_16->pFts3Tab->db = VAR_4;
  VAR_16->pFts3Tab->nIndex = 1;

  FUNC_1((char *)VAR_16->pFts3Tab->zDb, VAR_10, VAR_12);
  FUNC_1((char *)VAR_16->pFts3Tab->zName, VAR_11, VAR_13);
  FUNC_3((char *)VAR_16->pFts3Tab->zName);

  *VAR_8 = (sqlite3_vtab *)VAR_16;
  return VAR_3;

 bad_args:
  FUNC_4(VAR_9, "invalid arguments to fts4aux constructor");
  return VAR_1;
}
