
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_3__ {int nPgsz; int db; int zDb; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,char*,int,int **,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(int *VAR_3, Fts3Table *VAR_4){
  if( *VAR_3==VAR_2 ){
    int VAR_5;
    char *VAR_6;
    sqlite3_stmt *VAR_7;

    VAR_6 = FUNC_4("PRAGMA %Q.page_size", VAR_4->zDb);
    if( !VAR_6 ){
      VAR_5 = VAR_1;
    }else{
      VAR_5 = FUNC_5(VAR_4->db, VAR_6, -1, &VAR_7, 0);
      if( VAR_5==VAR_2 ){
        FUNC_6(VAR_7);
        VAR_4->nPgsz = FUNC_1(VAR_7, 0);
        VAR_5 = FUNC_2(VAR_7);
      }else if( VAR_5==VAR_0 ){
        VAR_4->nPgsz = 1024;
        VAR_5 = VAR_2;
      }
    }
    FUNC_0( VAR_4->nPgsz>0 || VAR_5!=VAR_2 );
    FUNC_3(VAR_6);
    *VAR_3 = VAR_5;
  }
}
