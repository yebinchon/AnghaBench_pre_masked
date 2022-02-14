
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_mode; int st_size; } ;
typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_2__ {int fd; int pStmt; } ;
typedef TYPE_1__ FstreeCsr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,struct stat*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int *,char*,int,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(sqlite3_vtab_cursor *VAR_4, sqlite3_context *VAR_5, int VAR_6){
  FstreeCsr *VAR_7 = (FstreeCsr*)VAR_4;
  if( VAR_6==0 ){
    FUNC_8(VAR_5, FUNC_3(VAR_7->pStmt, 0));
  }else{
    struct stat VAR_8;
    FUNC_1(VAR_7->fd, &VAR_8);

    if( FUNC_0(VAR_8.st_mode) ){
      if( VAR_6==1 ){
        FUNC_7(VAR_5, VAR_8.st_size);
      }else{
        int VAR_9;
        char *VAR_10 = FUNC_5(VAR_8.st_mode+1);
        if( !VAR_10 ) return VAR_1;
        VAR_9 = FUNC_2(VAR_7->fd, VAR_10, VAR_8.st_mode);
        if( VAR_9!=VAR_8.st_mode ){
          return VAR_0;
        }
        FUNC_6(VAR_5, VAR_10, VAR_9, VAR_3);
        FUNC_4(VAR_10);
      }
    }
  }

  return VAR_2;
}
