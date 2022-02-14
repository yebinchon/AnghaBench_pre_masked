
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_5__ {TYPE_1__* db; int * aVar; } ;
typedef TYPE_2__ Vdbe ;
struct TYPE_4__ {int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *,void*,char const*,void (*) (void*)) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int) ;

int FUNC_3(
  sqlite3_stmt *VAR_1,
  int VAR_2,
  void *VAR_3,
  const char *VAR_4,
  void (*VAR_5)(void*)
){
  int VAR_6;
  Vdbe *VAR_7 = (Vdbe*)VAR_1;
  VAR_6 = FUNC_2(VAR_7, VAR_2);
  if( VAR_6==VAR_0 ){
    FUNC_0(&VAR_7->aVar[VAR_2-1], VAR_3, VAR_4, VAR_5);
    FUNC_1(VAR_7->db->mutex);
  }else if( VAR_5 ){
    VAR_5(VAR_3);
  }
  return VAR_6;
}
