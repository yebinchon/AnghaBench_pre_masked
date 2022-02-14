
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iRowid; } ;
typedef TYPE_1__ templatevtab_cursor ;
typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_context ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(
  sqlite3_vtab_cursor *VAR_2,
  sqlite3_context *VAR_3,
  int VAR_4
){
  templatevtab_cursor *VAR_5 = (templatevtab_cursor*)VAR_2;
  switch( VAR_4 ){
    case 128:
      FUNC_1(VAR_3, 1000 + VAR_5->iRowid);
      break;
    default:
      FUNC_0( VAR_4==VAR_1 );
      FUNC_1(VAR_3, 2000 + VAR_5->iRowid);
      break;
  }
  return VAR_0;
}
