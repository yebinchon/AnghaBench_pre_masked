
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite_int64 ;
struct TYPE_5__ {int nColumn; } ;
typedef TYPE_1__ fulltext_vtab ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,char const*,int) ;
 int FUNC_1 (TYPE_1__*,int ,char const***) ;
 int FUNC_2 (int,char const**) ;

__attribute__((used)) static int FUNC_3(fulltext_vtab *VAR_4, sqlite_int64 VAR_5){
  const char **VAR_6;
  int VAR_7, VAR_8;


  if( VAR_0==VAR_1 ) return VAR_2;

  VAR_8 = FUNC_1(VAR_4, VAR_5, &VAR_6);
  if( VAR_8!=VAR_3 ) return VAR_8;

  for(VAR_7 = 0 ; VAR_7 < VAR_4->nColumn; ++VAR_7) {
    VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6[VAR_7], -1);
    if( VAR_8!=VAR_3 ) break;
  }

  FUNC_2(VAR_4->nColumn, VAR_6);
  return VAR_3;
}
