
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_5__ {char* z; int flags; int xDel; int * db; } ;
typedef int RowSet ;
typedef TYPE_1__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(Mem *VAR_5){
  sqlite3 *VAR_6 = VAR_5->db;
  RowSet *VAR_7;
  FUNC_0( VAR_6!=0 );
  FUNC_0( !FUNC_2(VAR_5) );
  FUNC_3(VAR_5);
  VAR_7 = FUNC_1(VAR_6);
  if( VAR_7==0 ) return VAR_2;
  VAR_5->z = (char*)VAR_7;
  VAR_5->flags = VAR_0|VAR_1;
  VAR_5->xDel = VAR_4;
  return VAR_3;
}
