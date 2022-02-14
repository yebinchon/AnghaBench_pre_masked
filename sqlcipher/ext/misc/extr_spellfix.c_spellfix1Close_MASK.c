
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_5__ {struct TYPE_5__* zPattern; } ;
typedef TYPE_1__ spellfix1_cursor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab_cursor *VAR_1){
  spellfix1_cursor *VAR_2 = (spellfix1_cursor *)VAR_1;
  FUNC_0(VAR_2);
  FUNC_1(VAR_2, 0);
  FUNC_2(VAR_2->zPattern);
  FUNC_2(VAR_2);
  return VAR_0;
}
