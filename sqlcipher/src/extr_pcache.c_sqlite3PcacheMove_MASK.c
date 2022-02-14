
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* xRekey ) (int ,int ,int ,int ) ;} ;
struct TYPE_11__ {TYPE_1__ pcache2; } ;
struct TYPE_10__ {int pCache; } ;
struct TYPE_9__ {scalar_t__ nRef; int flags; int pgno; int pPage; TYPE_3__* pCache; } ;
typedef int Pgno ;
typedef TYPE_2__ PgHdr ;
typedef TYPE_3__ PCache ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (char*) ;
 TYPE_6__ VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,int ,int ) ;

void FUNC_5(PgHdr *VAR_4, Pgno VAR_5){
  PCache *VAR_6 = VAR_4->pCache;
  FUNC_0( VAR_4->nRef>0 );
  FUNC_0( VAR_5>0 );
  FUNC_0( FUNC_3(VAR_4) );
  FUNC_2(("%p.MOVE %d -> %d\n",VAR_6,VAR_4->pgno,VAR_5));
  VAR_3.pcache2.xRekey(VAR_6->pCache, VAR_4->pPage, VAR_4->pgno,VAR_5);
  VAR_4->pgno = VAR_5;
  if( (VAR_4->flags&VAR_1) && (VAR_4->flags&VAR_2) ){
    FUNC_1(VAR_4, VAR_0);
  }
}
