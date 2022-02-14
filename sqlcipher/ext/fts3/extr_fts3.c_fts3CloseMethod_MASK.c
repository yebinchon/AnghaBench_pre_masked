
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_6__ {scalar_t__ pVtab; } ;
struct TYPE_8__ {TYPE_1__ base; } ;
struct TYPE_7__ {scalar_t__ pSegments; } ;
typedef TYPE_2__ Fts3Table ;
typedef TYPE_3__ Fts3Cursor ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab_cursor *VAR_1){
  Fts3Cursor *VAR_2 = (Fts3Cursor *)VAR_1;
  FUNC_0( ((Fts3Table *)VAR_2->base.pVtab)->pSegments==0 );
  FUNC_1(VAR_2);
  FUNC_0( ((Fts3Table *)VAR_2->base.pVtab)->pSegments==0 );
  FUNC_2(VAR_2);
  return VAR_0;
}
