
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_pcache_page ;
struct TYPE_5__ {int * (* xFetch ) (scalar_t__,int ,int) ;} ;
struct TYPE_7__ {TYPE_1__ pcache2; } ;
struct TYPE_6__ {scalar_t__ pCache; int eCreate; scalar_t__ pDirty; scalar_t__ bPurgeable; } ;
typedef int Pgno ;
typedef TYPE_2__ PCache ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 TYPE_4__ VAR_0 ;
 int * FUNC_2 (scalar_t__,int ,int) ;

sqlite3_pcache_page *FUNC_3(
  PCache *VAR_1,
  Pgno VAR_2,
  int VAR_3
){
  int VAR_4;
  sqlite3_pcache_page *VAR_5;

  FUNC_0( VAR_1!=0 );
  FUNC_0( VAR_1->pCache!=0 );
  FUNC_0( VAR_3==3 || VAR_3==0 );
  FUNC_0( VAR_1->eCreate==((VAR_1->bPurgeable && VAR_1->pDirty) ? 1 : 2) );
  VAR_4 = VAR_3 & VAR_1->eCreate;
  FUNC_0( VAR_4==0 || VAR_4==1 || VAR_4==2 );
  FUNC_0( VAR_3==0 || VAR_1->eCreate==VAR_4 );
  FUNC_0( VAR_3==0 || VAR_4==1+(!VAR_1->bPurgeable||!VAR_1->pDirty) );
  VAR_5 = VAR_0.pcache2.xFetch(VAR_1->pCache, VAR_2, VAR_4);
  FUNC_1(("%p.FETCH %d%s (result: %p)\n",VAR_1,VAR_2,
               VAR_3?" create":"",VAR_5));
  return VAR_5;
}
