
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int sqlite3_stmt ;
struct TYPE_6__ {TYPE_3__* db; int * aVar; } ;
typedef TYPE_1__ Vdbe ;
struct TYPE_7__ {int mutex; } ;
typedef int Mem ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 void FUNC_1 (void*) ;
 void FUNC_2 (void*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,void const*,int,scalar_t__,void (*) (void*)) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_9(
  sqlite3_stmt *VAR_1,
  int VAR_2,
  const void *VAR_3,
  int VAR_4,
  void (*VAR_5)(void*),
  u8 VAR_6
){
  Vdbe *VAR_7 = (Vdbe *)VAR_1;
  Mem *VAR_8;
  int VAR_9;

  VAR_9 = FUNC_8(VAR_7, VAR_2);
  if( VAR_9==VAR_0 ){
    if( VAR_3!=0 ){
      VAR_8 = &VAR_7->aVar[VAR_2-1];
      VAR_9 = FUNC_6(VAR_8, VAR_3, VAR_4, VAR_6, VAR_5);
      if( VAR_9==VAR_0 && VAR_6!=0 ){
        VAR_9 = FUNC_5(VAR_8, FUNC_0(VAR_7->db));
      }
      FUNC_4(VAR_7->db, VAR_9);
      VAR_9 = FUNC_3(VAR_7->db, VAR_9);
    }
    FUNC_7(VAR_7->db->mutex);
  }else if( VAR_5!=FUNC_1 && VAR_5!=FUNC_2 ){
    VAR_5((void*)VAR_3);
  }
  return VAR_9;
}
