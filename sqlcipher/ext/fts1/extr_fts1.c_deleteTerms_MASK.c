
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite_int64 ;
struct TYPE_5__ {int nColumn; } ;
typedef TYPE_1__ fulltext_vtab ;
typedef int fts1Hash ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int ,char const*,int) ;
 int FUNC_1 (TYPE_1__*,int ,char const***) ;
 int FUNC_2 (int,char const**) ;

__attribute__((used)) static int FUNC_3(fulltext_vtab *VAR_1, fts1Hash *VAR_2, sqlite_int64 VAR_3){
  const char **VAR_4;
  int VAR_5;

  int VAR_6 = FUNC_1(VAR_1, VAR_3, &VAR_4);
  if( VAR_6!=VAR_0 ) return VAR_6;

  for(VAR_5 = 0 ; VAR_5 < VAR_1->nColumn; ++VAR_5) {
    VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4[VAR_5], -1);
    if( VAR_6!=VAR_0 ) break;
  }

  FUNC_2(VAR_1->nColumn, VAR_4);
  return VAR_0;
}
