
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pUser; int (* xDelUser ) (int ) ;struct TYPE_5__* pInfo; } ;
typedef TYPE_1__ sqlite3_rtree_query_info ;
struct TYPE_6__ {int nConstraint; TYPE_1__* aConstraint; } ;
typedef TYPE_2__ RtreeCursor ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(RtreeCursor *VAR_0){
  if( VAR_0->aConstraint ){
    int VAR_1;
    for(VAR_1=0; VAR_1<VAR_0->nConstraint; VAR_1++){
      sqlite3_rtree_query_info *VAR_2 = VAR_0->aConstraint[VAR_1].pInfo;
      if( VAR_2 ){
        if( VAR_2->xDelUser ) VAR_2->xDelUser(VAR_2->pUser);
        FUNC_0(VAR_2);
      }
    }
    FUNC_0(VAR_0->aConstraint);
    VAR_0->aConstraint = 0;
  }
}
