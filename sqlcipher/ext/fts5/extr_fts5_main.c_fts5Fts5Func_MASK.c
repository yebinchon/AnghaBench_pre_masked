
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int fts5_api ;
struct TYPE_2__ {int api; } ;
typedef TYPE_1__ Fts5Global ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char*) ;

__attribute__((used)) static void FUNC_4(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  Fts5Global *VAR_3 = (Fts5Global*)FUNC_2(VAR_0);
  fts5_api **VAR_4;
  FUNC_0(VAR_1);
  FUNC_1( VAR_1==1 );
  VAR_4 = (fts5_api**)FUNC_3(VAR_2[0], "fts5_api_ptr");
  if( VAR_4 ) *VAR_4 = &VAR_3->api;
}
