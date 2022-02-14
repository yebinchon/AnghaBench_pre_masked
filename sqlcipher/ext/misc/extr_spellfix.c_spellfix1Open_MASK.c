
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_vtab ;
typedef int spellfix1_vtab ;
struct TYPE_4__ {int base; int * pVTab; } ;
typedef TYPE_1__ spellfix1_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_2, sqlite3_vtab_cursor **VAR_3){
  spellfix1_vtab *VAR_4 = (spellfix1_vtab*)VAR_2;
  spellfix1_cursor *VAR_5;
  VAR_5 = FUNC_1( sizeof(*VAR_5) );
  if( VAR_5==0 ) return VAR_0;
  FUNC_0(VAR_5, 0, sizeof(*VAR_5));
  VAR_5->pVTab = VAR_4;
  *VAR_3 = &VAR_5->base;
  return VAR_1;
}
