
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_int64 ;
typedef int sqlite3_blob ;
struct TYPE_7__ {int mutex; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_8__ {scalar_t__ pStmt; TYPE_1__* db; } ;
typedef TYPE_2__ Incrblob ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,char**) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,int,char*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(sqlite3_blob *VAR_4, sqlite3_int64 VAR_5){
  int VAR_6;
  Incrblob *VAR_7 = (Incrblob *)VAR_4;
  sqlite3 *VAR_8;

  if( VAR_7==0 ) return VAR_1;
  VAR_8 = VAR_7->db;
  FUNC_5(VAR_8->mutex);

  if( VAR_7->pStmt==0 ){



    VAR_6 = VAR_0;
  }else{
    char *VAR_9;
    VAR_6 = FUNC_1(VAR_7, VAR_5, &VAR_9);
    if( VAR_6!=VAR_2 ){
      FUNC_4(VAR_8, VAR_6, (VAR_9 ? "%s" : 0), VAR_9);
      FUNC_3(VAR_8, VAR_9);
    }
    FUNC_0( VAR_6!=VAR_3 );
  }

  VAR_6 = FUNC_2(VAR_8, VAR_6);
  FUNC_0( VAR_6==VAR_2 || VAR_7->pStmt==0 );
  FUNC_6(VAR_8->mutex);
  return VAR_6;
}
