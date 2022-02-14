
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_vtab ;
struct TYPE_4__ {int base; } ;
typedef TYPE_1__ carray_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_2, sqlite3_vtab_cursor **VAR_3){
  carray_cursor *VAR_4;
  VAR_4 = FUNC_1( sizeof(*VAR_4) );
  if( VAR_4==0 ) return VAR_0;
  FUNC_0(VAR_4, 0, sizeof(*VAR_4));
  *VAR_3 = &VAR_4->base;
  return VAR_1;
}
