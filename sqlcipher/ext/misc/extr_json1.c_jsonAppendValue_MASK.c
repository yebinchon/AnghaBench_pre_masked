
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int sqlite3_value ;
struct TYPE_6__ {int bErr; int pCtx; } ;
typedef TYPE_1__ JsonString ;


 int VAR_0 ;




 int FUNC_0 (TYPE_1__*,char const*,int) ;
 int FUNC_1 (TYPE_1__*,char const*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(
  JsonString *VAR_1,
  sqlite3_value *VAR_2
){
  switch( FUNC_7(VAR_2) ){
    case 129: {
      FUNC_0(VAR_1, "null", 4);
      break;
    }
    case 130:
    case 131: {
      const char *VAR_3 = (const char*)FUNC_6(VAR_2);
      u32 VAR_4 = (u32)FUNC_4(VAR_2);
      FUNC_0(VAR_1, VAR_3, VAR_4);
      break;
    }
    case 128: {
      const char *VAR_5 = (const char*)FUNC_6(VAR_2);
      u32 VAR_6 = (u32)FUNC_4(VAR_2);
      if( FUNC_5(VAR_2)==VAR_0 ){
        FUNC_0(VAR_1, VAR_5, VAR_6);
      }else{
        FUNC_1(VAR_1, VAR_5, VAR_6);
      }
      break;
    }
    default: {
      if( VAR_1->bErr==0 ){
        FUNC_3(VAR_1->pCtx, "JSON cannot hold BLOB values", -1);
        VAR_1->bErr = 2;
        FUNC_2(VAR_1);
      }
      break;
    }
  }
}
