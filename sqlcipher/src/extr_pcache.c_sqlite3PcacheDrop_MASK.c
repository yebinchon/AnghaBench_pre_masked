
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* xUnpin ) (int ,int ,int) ;} ;
struct TYPE_11__ {TYPE_1__ pcache2; } ;
struct TYPE_10__ {int nRef; int flags; int pPage; TYPE_2__* pCache; } ;
struct TYPE_9__ {int pCache; int nRefSum; } ;
typedef TYPE_3__ PgHdr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 TYPE_6__ VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ,int) ;

void FUNC_4(PgHdr *VAR_3){
  FUNC_0( VAR_3->nRef==1 );
  FUNC_0( FUNC_2(VAR_3) );
  if( VAR_3->flags&VAR_1 ){
    FUNC_1(VAR_3, VAR_0);
  }
  VAR_3->pCache->nRefSum--;
  VAR_2.pcache2.xUnpin(VAR_3->pCache->pCache, VAR_3->pPage, 1);
}
