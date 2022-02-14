
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_9__ {TYPE_1__* pMethods; } ;
struct TYPE_8__ {int pageSize; TYPE_4__* fd; TYPE_2__* pMmapFreelist; int nMmapOut; } ;
struct TYPE_7__ {int pgno; int pData; struct TYPE_7__* pDirty; TYPE_3__* pPager; } ;
struct TYPE_6__ {int iVersion; } ;
typedef TYPE_2__ PgHdr ;
typedef TYPE_3__ Pager ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int,int ) ;

__attribute__((used)) static void FUNC_2(PgHdr *VAR_0){
  Pager *VAR_1 = VAR_0->pPager;
  VAR_1->nMmapOut--;
  VAR_0->pDirty = VAR_1->pMmapFreelist;
  VAR_1->pMmapFreelist = VAR_0;

  FUNC_0( VAR_1->fd->pMethods->iVersion>=3 );
  FUNC_1(VAR_1->fd, (i64)(VAR_0->pgno-1)*VAR_1->pageSize, VAR_0->pData);
}
