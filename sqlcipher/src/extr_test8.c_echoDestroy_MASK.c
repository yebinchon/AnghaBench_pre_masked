
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_2__ {int db; scalar_t__ zLogName; int interp; } ;
typedef TYPE_1__ echo_vtab ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(sqlite3_vtab *VAR_1){
  int VAR_2 = VAR_0;
  echo_vtab *VAR_3 = (echo_vtab *)VAR_1;
  FUNC_0(((echo_vtab *)VAR_1)->interp, "xDestroy");


  if( VAR_3 && VAR_3->zLogName ){
    char *VAR_4;
    VAR_4 = FUNC_4("DROP TABLE %Q", VAR_3->zLogName);
    VAR_2 = FUNC_2(VAR_3->db, VAR_4, 0, 0, 0);
    FUNC_3(VAR_4);
  }

  if( VAR_2==VAR_0 ){
    VAR_2 = FUNC_1(VAR_1);
  }
  return VAR_2;
}
