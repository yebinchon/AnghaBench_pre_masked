
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int sqlite3_value ;
struct TYPE_4__ {int nColumn; } ;
typedef TYPE_1__ fulltext_vtab ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(fulltext_vtab *VAR_1, sqlite_int64 VAR_2,
                       sqlite3_value **VAR_3){
  int VAR_4;
  for(VAR_4 = 0; VAR_4 < VAR_1->nColumn ; ++VAR_4){
    char *VAR_5 = (char*)FUNC_1(VAR_3[VAR_4]);
    int VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_5, VAR_4);
    if( VAR_6!=VAR_0 ) return VAR_6;
  }
  return VAR_0;
}
