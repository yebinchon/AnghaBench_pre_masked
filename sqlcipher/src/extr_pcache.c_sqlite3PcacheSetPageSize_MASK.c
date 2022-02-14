
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_pcache ;
struct TYPE_6__ {int (* xDestroy ) (int *) ;int (* xCachesize ) (int *,int ) ;int * (* xCreate ) (int,scalar_t__,int ) ;} ;
struct TYPE_8__ {TYPE_1__ pcache2; } ;
struct TYPE_7__ {scalar_t__ nRefSum; scalar_t__ pDirty; int szPage; int * pCache; int bPurgeable; scalar_t__ szExtra; } ;
typedef int PgHdr ;
typedef TYPE_2__ PCache ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*) ;
 TYPE_4__ VAR_2 ;
 int * FUNC_4 (int,scalar_t__,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;

int FUNC_7(PCache *VAR_3, int VAR_4){
  FUNC_1( VAR_3->nRefSum==0 && VAR_3->pDirty==0 );
  if( VAR_3->szPage ){
    sqlite3_pcache *VAR_5;
    VAR_5 = VAR_2.pcache2.xCreate(
                VAR_4, VAR_3->szExtra + FUNC_0(sizeof(PgHdr)),
                VAR_3->bPurgeable
    );
    if( VAR_5==0 ) return VAR_0;
    VAR_2.pcache2.xCachesize(VAR_5, FUNC_2(VAR_3));
    if( VAR_3->pCache ){
      VAR_2.pcache2.xDestroy(VAR_3->pCache);
    }
    VAR_3->pCache = VAR_5;
    VAR_3->szPage = VAR_4;
    FUNC_3(("%p.PAGESIZE %d\n",VAR_3,VAR_4));
  }
  return VAR_1;
}
