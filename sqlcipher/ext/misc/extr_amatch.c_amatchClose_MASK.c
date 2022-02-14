
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_6__ {TYPE_1__* pVtab; } ;
typedef TYPE_2__ amatch_cursor ;
struct TYPE_5__ {int nCursor; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab_cursor *VAR_1){
  amatch_cursor *VAR_2 = (amatch_cursor *)VAR_1;
  FUNC_0(VAR_2);
  VAR_2->pVtab->nCursor--;
  FUNC_1(VAR_2);
  return VAR_0;
}
