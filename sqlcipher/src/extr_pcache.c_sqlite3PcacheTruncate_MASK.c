
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int pBuf; } ;
typedef TYPE_2__ sqlite3_pcache_page ;
struct TYPE_10__ {int (* xTruncate ) (scalar_t__,int) ;TYPE_2__* (* xFetch ) (scalar_t__,int,int ) ;} ;
struct TYPE_14__ {TYPE_1__ pcache2; } ;
struct TYPE_13__ {scalar_t__ pCache; int szPage; scalar_t__ nRefSum; TYPE_3__* pDirty; } ;
struct TYPE_12__ {scalar_t__ pgno; int flags; struct TYPE_12__* pDirtyNext; } ;
typedef int Pgno ;
typedef TYPE_3__ PgHdr ;
typedef TYPE_4__ PCache ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*) ;
 TYPE_8__ VAR_1 ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_2__* FUNC_5 (scalar_t__,int,int ) ;
 int FUNC_6 (scalar_t__,int) ;

void FUNC_7(PCache *VAR_2, Pgno VAR_3){
  if( VAR_2->pCache ){
    PgHdr *VAR_4;
    PgHdr *VAR_5;
    FUNC_3(("%p.TRUNCATE %d\n",VAR_2,VAR_3));
    for(VAR_4=VAR_2->pDirty; VAR_4; VAR_4=VAR_5){
      VAR_5 = VAR_4->pDirtyNext;




      FUNC_1( VAR_4->pgno>0 );
      if( VAR_4->pgno>VAR_3 ){
        FUNC_1( VAR_4->flags&VAR_0 );
        FUNC_4(VAR_4);
      }
    }
    if( VAR_3==0 && VAR_2->nRefSum ){
      sqlite3_pcache_page *VAR_6;
      VAR_6 = VAR_1.pcache2.xFetch(VAR_2->pCache,1,0);
      if( FUNC_0(VAR_6) ){

        FUNC_2(VAR_6->pBuf, 0, VAR_2->szPage);
        VAR_3 = 1;
      }
    }
    VAR_1.pcache2.xTruncate(VAR_2->pCache, VAR_3+1);
  }
}
