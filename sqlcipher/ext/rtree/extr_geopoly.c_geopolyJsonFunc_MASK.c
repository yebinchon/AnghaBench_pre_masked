
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_str ;
typedef int sqlite3_context ;
typedef int sqlite3 ;
struct TYPE_7__ {int nVertex; } ;
typedef TYPE_1__ GeoPoly ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_2 (int *,int *,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int ,int,int (*) (TYPE_1__*)) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *,char*,int ,int ) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  GeoPoly *VAR_3 = FUNC_2(VAR_0, VAR_2[0], 0);
  if( VAR_3 ){
    sqlite3 *VAR_4 = FUNC_3(VAR_0);
    sqlite3_str *VAR_5 = FUNC_9(VAR_4);
    int VAR_6;
    FUNC_6(VAR_5, "[", 1);
    for(VAR_6=0; VAR_6<VAR_3->nVertex; VAR_6++){
      FUNC_7(VAR_5, "[%!g,%!g],", FUNC_0(VAR_3,VAR_6), FUNC_1(VAR_3,VAR_6));
    }
    FUNC_7(VAR_5, "[%!g,%!g]]", FUNC_0(VAR_3,0), FUNC_1(VAR_3,0));
    FUNC_5(VAR_0, FUNC_8(VAR_5), -1, FUNC_4);
    FUNC_4(VAR_3);
  }
}
