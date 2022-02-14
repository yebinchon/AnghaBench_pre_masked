
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sqlite3_pcache_page ;
struct TYPE_10__ {int * (* xFetch ) (int ,int ,int) ;int (* xPagecount ) (int ) ;} ;
struct TYPE_13__ {TYPE_1__ pcache2; } ;
struct TYPE_12__ {int eCreate; scalar_t__ szSpill; int (* xStress ) (int ,TYPE_2__*) ;int pCache; int pStress; TYPE_2__* pDirtyTail; TYPE_2__* pSynced; } ;
struct TYPE_11__ {int flags; int pgno; struct TYPE_11__* pDirtyPrev; scalar_t__ nRef; } ;
typedef int Pgno ;
typedef TYPE_2__ PgHdr ;
typedef TYPE_3__ PCache ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*) ;
 TYPE_7__ VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int * FUNC_7 (int ,int ,int) ;

int FUNC_8(
  PCache *VAR_6,
  Pgno VAR_7,
  sqlite3_pcache_page **VAR_8
){
  PgHdr *VAR_9;
  if( VAR_6->eCreate==2 ) return 0;

  if( FUNC_3(VAR_6)>VAR_6->szSpill ){
    for(VAR_9=VAR_6->pSynced;
        VAR_9 && (VAR_9->nRef || (VAR_9->flags&VAR_0));
        VAR_9=VAR_9->pDirtyPrev
    );
    VAR_6->pSynced = VAR_9;
    if( !VAR_9 ){
      for(VAR_9=VAR_6->pDirtyTail; VAR_9 && VAR_9->nRef; VAR_9=VAR_9->pDirtyPrev);
    }
    if( VAR_9 ){
      int VAR_10;







      FUNC_2(("%p.SPILL %d\n",VAR_6,VAR_9->pgno));
      VAR_10 = VAR_6->xStress(VAR_6->pStress, VAR_9);
      FUNC_1(VAR_6);
      if( VAR_10!=VAR_4 && VAR_10!=VAR_1 ){
        return VAR_10;
      }
    }
  }
  *VAR_8 = VAR_5.pcache2.xFetch(VAR_6->pCache, VAR_7, 2);
  return *VAR_8==0 ? VAR_3 : VAR_4;
}
