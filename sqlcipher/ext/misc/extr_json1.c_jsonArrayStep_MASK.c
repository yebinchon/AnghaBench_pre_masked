
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_5__ {scalar_t__ zBuf; int * pCtx; } ;
typedef TYPE_1__ JsonString ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  JsonString *VAR_3;
  FUNC_0(VAR_1);
  VAR_3 = (JsonString*)FUNC_4(VAR_0, sizeof(*VAR_3));
  if( VAR_3 ){
    if( VAR_3->zBuf==0 ){
      FUNC_3(VAR_3, VAR_0);
      FUNC_1(VAR_3, '[');
    }else{
      FUNC_1(VAR_3, ',');
      VAR_3->pCtx = VAR_0;
    }
    FUNC_2(VAR_3, VAR_2[0]);
  }
}
