
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int i64 ;
struct TYPE_3__ {int pGlobal; } ;
typedef int Fts5Cursor ;
typedef TYPE_1__ Fts5Auxiliary ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *,int *,int,int **) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,char*,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){

  Fts5Auxiliary *VAR_3;
  Fts5Cursor *VAR_4;
  i64 VAR_5;

  FUNC_0( VAR_1>=1 );
  VAR_3 = (Fts5Auxiliary*)FUNC_6(VAR_0);
  VAR_5 = FUNC_7(VAR_2[0]);

  VAR_4 = FUNC_2(VAR_3->pGlobal, VAR_5);
  if( VAR_4==0 ){
    char *VAR_6 = FUNC_4("no such cursor: %lld", VAR_5);
    FUNC_5(VAR_0, VAR_6, -1);
    FUNC_3(VAR_6);
  }else{
    FUNC_1(VAR_3, VAR_4, VAR_0, VAR_1-1, &VAR_2[1]);
  }
}
