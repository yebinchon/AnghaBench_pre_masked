
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_4__ {TYPE_1__* pEntry; int zDir; } ;
struct TYPE_3__ {int d_name; } ;
typedef TYPE_2__ FsdirCsr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab_cursor *VAR_3, sqlite3_context *VAR_4, int VAR_5){
  FsdirCsr *VAR_6 = (FsdirCsr*)VAR_3;
  switch( VAR_5 ){
    case 0:
      FUNC_1(VAR_4, VAR_6->zDir, -1, VAR_1);
      break;

    case 1:
      FUNC_1(VAR_4, VAR_6->pEntry->d_name, -1, VAR_2);
      break;

    default:
      FUNC_0( 0 );
  }

  return VAR_0;
}
