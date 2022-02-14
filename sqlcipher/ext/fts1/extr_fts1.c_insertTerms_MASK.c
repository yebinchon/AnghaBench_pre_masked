
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int sqlite3_value ;
struct TYPE_4__ {int nColumn; } ;
typedef TYPE_1__ fulltext_vtab ;
typedef int fts1Hash ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int ,char*,int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(fulltext_vtab *VAR_1, fts1Hash *VAR_2, sqlite_int64 VAR_3,
                sqlite3_value **VAR_4){
  int VAR_5;
  for(VAR_5 = 0; VAR_5 < VAR_1->nColumn ; ++VAR_5){
    char *VAR_6 = (char*)FUNC_1(VAR_4[VAR_5]);
    int VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_6, VAR_5);
    if( VAR_7!=VAR_0 ) return VAR_7;
  }
  return VAR_0;
}
