
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_6__ {scalar_t__ zBuf; int * pCtx; } ;
typedef TYPE_1__ JsonString ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char) ;
 int FUNC_2 (TYPE_1__*,char const*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  JsonString *VAR_3;
  const char *VAR_4;
  u32 VAR_5;
  FUNC_0(VAR_1);
  VAR_3 = (JsonString*)FUNC_5(VAR_0, sizeof(*VAR_3));
  if( VAR_3 ){
    if( VAR_3->zBuf==0 ){
      FUNC_4(VAR_3, VAR_0);
      FUNC_1(VAR_3, '{');
    }else{
      FUNC_1(VAR_3, ',');
      VAR_3->pCtx = VAR_0;
    }
    VAR_4 = (const char*)FUNC_7(VAR_2[0]);
    VAR_5 = (u32)FUNC_6(VAR_2[0]);
    FUNC_2(VAR_3, VAR_4, VAR_5);
    FUNC_1(VAR_3, ':');
    FUNC_3(VAR_3, VAR_2[1]);
  }
}
