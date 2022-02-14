
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ pVtab; } ;
typedef TYPE_1__ sqlite3_vtab_cursor ;
struct TYPE_11__ {scalar_t__ nCursor; } ;
struct TYPE_10__ {int * aNode; struct TYPE_10__* aPoint; int pReadAux; } ;
typedef TYPE_2__ RtreeCursor ;
typedef TYPE_3__ Rtree ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(sqlite3_vtab_cursor *VAR_2){
  Rtree *VAR_3 = (Rtree *)(VAR_2->pVtab);
  int VAR_4;
  RtreeCursor *VAR_5 = (RtreeCursor *)VAR_2;
  FUNC_0( VAR_3->nCursor>0 );
  FUNC_1(VAR_5);
  FUNC_4(VAR_5->pReadAux);
  FUNC_5(VAR_5->aPoint);
  for(VAR_4=0; VAR_4<VAR_0; VAR_4++) FUNC_3(VAR_3, VAR_5->aNode[VAR_4]);
  FUNC_5(VAR_5);
  VAR_3->nCursor--;
  FUNC_2(VAR_3);
  return VAR_1;
}
