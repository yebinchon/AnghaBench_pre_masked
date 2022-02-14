
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ pExtra; } ;
typedef TYPE_1__ sqlite3_pcache_page ;
struct TYPE_13__ {int nRefSum; } ;
struct TYPE_12__ {int nRef; int pPage; } ;
typedef int Pgno ;
typedef TYPE_2__ PgHdr ;
typedef TYPE_3__ PCache ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;

PgHdr *FUNC_3(
  PCache *VAR_0,
  Pgno VAR_1,
  sqlite3_pcache_page *VAR_2
){
  PgHdr *VAR_3;

  FUNC_0( VAR_2!=0 );
  VAR_3 = (PgHdr *)VAR_2->pExtra;

  if( !VAR_3->pPage ){
    return FUNC_1(VAR_0, VAR_1, VAR_2);
  }
  VAR_0->nRefSum++;
  VAR_3->nRef++;
  FUNC_0( FUNC_2(VAR_3) );
  return VAR_3;
}
