
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_3__ {scalar_t__ iRowid; size_t iDb; int * aVal; int * azDb; } ;
typedef TYPE_1__ memstat_cursor ;
struct TYPE_4__ {int mNull; int zName; } ;






 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(
  sqlite3_vtab_cursor *VAR_4,
  sqlite3_context *VAR_5,
  int VAR_6
){
  memstat_cursor *VAR_7 = (memstat_cursor*)VAR_4;
  int VAR_8;
  FUNC_0( VAR_7->iRowid>0 && VAR_7->iRowid<=VAR_0 );
  VAR_8 = (int)VAR_7->iRowid - 1;
  if( (VAR_3[VAR_8].mNull & (1<<VAR_6))!=0 ){
    return VAR_1;
  }
  switch( VAR_6 ){
    case 130: {
      FUNC_2(VAR_5, VAR_3[VAR_8].zName, -1, VAR_2);
      break;
    }
    case 129: {
      FUNC_2(VAR_5, VAR_7->azDb[VAR_7->iDb], -1, 0);
      break;
    }
    case 128: {
      FUNC_1(VAR_5, VAR_7->aVal[0]);
      break;
    }
    case 131: {
      FUNC_1(VAR_5, VAR_7->aVal[1]);
      break;
    }
  }
  return VAR_1;
}
