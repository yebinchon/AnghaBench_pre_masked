
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_pcache_page ;
typedef int sqlite3_pcache ;
struct TYPE_4__ {unsigned int nHash; unsigned int iMaxKey; int pGroup; TYPE_1__** apHash; } ;
struct TYPE_3__ {unsigned int iKey; struct TYPE_3__* pNext; TYPE_2__* pCache; } ;
typedef TYPE_1__ PgHdr1 ;
typedef TYPE_2__ PCache1 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(
  sqlite3_pcache *VAR_0,
  sqlite3_pcache_page *VAR_1,
  unsigned int VAR_2,
  unsigned int VAR_3
){
  PCache1 *VAR_4 = (PCache1 *)VAR_0;
  PgHdr1 *VAR_5 = (PgHdr1 *)VAR_1;
  PgHdr1 **VAR_6;
  unsigned int VAR_7;
  FUNC_0( VAR_5->iKey==VAR_2 );
  FUNC_0( VAR_5->pCache==VAR_4 );

  FUNC_1(VAR_4->pGroup);

  VAR_7 = VAR_2%VAR_4->nHash;
  VAR_6 = &VAR_4->apHash[VAR_7];
  while( (*VAR_6)!=VAR_5 ){
    VAR_6 = &(*VAR_6)->pNext;
  }
  *VAR_6 = VAR_5->pNext;

  VAR_7 = VAR_3%VAR_4->nHash;
  VAR_5->iKey = VAR_3;
  VAR_5->pNext = VAR_4->apHash[VAR_7];
  VAR_4->apHash[VAR_7] = VAR_5;
  if( VAR_3>VAR_4->iMaxKey ){
    VAR_4->iMaxKey = VAR_3;
  }

  FUNC_2(VAR_4->pGroup);
}
