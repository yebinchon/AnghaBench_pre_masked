
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_2__ {int zDir; scalar_t__ pDir; scalar_t__ iRowid; } ;
typedef TYPE_1__ FsdirCsr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char const*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(
  sqlite3_vtab_cursor *VAR_2,
  int VAR_3, const char *VAR_4,
  int VAR_5, sqlite3_value **VAR_6
){
  FsdirCsr *VAR_7 = (FsdirCsr*)VAR_2;
  const char *VAR_8;
  int VAR_9;


  if( VAR_3!=1 || VAR_5!=1 ){
    return VAR_0;
  }

  VAR_7->iRowid = 0;
  FUNC_4(VAR_7->zDir);
  if( VAR_7->pDir ){
    FUNC_0(VAR_7->pDir);
    VAR_7->pDir = 0;
  }

  VAR_8 = (const char*)FUNC_7(VAR_6[0]);
  VAR_9 = FUNC_6(VAR_6[0]);
  VAR_7->zDir = FUNC_5(VAR_9+1);
  if( VAR_7->zDir==0 ) return VAR_1;
  FUNC_2(VAR_7->zDir, VAR_8, VAR_9+1);

  VAR_7->pDir = FUNC_3(VAR_7->zDir);
  return FUNC_1(VAR_2);
}
