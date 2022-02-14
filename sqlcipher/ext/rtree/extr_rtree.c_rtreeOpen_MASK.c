
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_vtab ;
struct TYPE_7__ {int nCursor; } ;
struct TYPE_5__ {int * pVtab; } ;
struct TYPE_6__ {TYPE_1__ base; } ;
typedef TYPE_2__ RtreeCursor ;
typedef TYPE_3__ Rtree ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_2, sqlite3_vtab_cursor **VAR_3){
  int VAR_4 = VAR_0;
  Rtree *VAR_5 = (Rtree *)VAR_2;
  RtreeCursor *VAR_6;

  VAR_6 = (RtreeCursor *)FUNC_1(sizeof(RtreeCursor));
  if( VAR_6 ){
    FUNC_0(VAR_6, 0, sizeof(RtreeCursor));
    VAR_6->base.pVtab = VAR_2;
    VAR_4 = VAR_1;
    VAR_5->nCursor++;
  }
  *VAR_3 = (sqlite3_vtab_cursor *)VAR_6;

  return VAR_4;
}
