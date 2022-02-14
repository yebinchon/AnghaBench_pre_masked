
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int sqlite3_stmt ;
struct TYPE_4__ {int nColumn; } ;
typedef TYPE_1__ fulltext_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char const**) ;
 int FUNC_1 (TYPE_1__*,int ,int **) ;
 int FUNC_2 (int *,int,int ) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(fulltext_vtab *VAR_5, sqlite_int64 VAR_6,
                          const char ***VAR_7){
  sqlite3_stmt *VAR_8;
  const char **VAR_9;
  int VAR_10;
  int VAR_11;

  *VAR_7 = ((void*)0);

  VAR_11 = FUNC_1(VAR_5, VAR_0, &VAR_8);
  if( VAR_11!=VAR_3 ) return VAR_11;

  VAR_11 = FUNC_2(VAR_8, 1, VAR_6);
  if( VAR_11!=VAR_3 ) return VAR_11;

  VAR_11 = FUNC_6(VAR_8);
  if( VAR_11!=VAR_4 ) return VAR_11;

  VAR_9 = (const char **) FUNC_5(VAR_5->nColumn * sizeof(const char *));
  for(VAR_10=0; VAR_10<VAR_5->nColumn; ++VAR_10){
    if( FUNC_4(VAR_8, VAR_10)==VAR_2 ){
      VAR_9[VAR_10] = ((void*)0);
    }else{
      VAR_9[VAR_10] = FUNC_7((char*)FUNC_3(VAR_8, VAR_10));
    }
  }



  VAR_11 = FUNC_6(VAR_8);
  if( VAR_11==VAR_1 ){
    *VAR_7 = VAR_9;
    return VAR_3;
  }

  FUNC_0(VAR_5->nColumn, VAR_9);
  return VAR_11;
}
