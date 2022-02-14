
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_5__ {TYPE_1__* db; } ;
typedef TYPE_2__ Vdbe ;
struct TYPE_4__ {int mutex; } ;


 char* FUNC_0 (TYPE_2__*,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int *) ;

char *FUNC_4(sqlite3_stmt *VAR_0){



  char *VAR_1 = 0;
  const char *VAR_2 = FUNC_3(VAR_0);
  if( VAR_2 ){
    Vdbe *VAR_3 = (Vdbe *)VAR_0;
    FUNC_1(VAR_3->db->mutex);
    VAR_1 = FUNC_0(VAR_3, VAR_2);
    FUNC_2(VAR_3->db->mutex);
  }
  return VAR_1;

}
