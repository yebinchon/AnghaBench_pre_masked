
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ n; } ;
struct TYPE_9__ {TYPE_4__ buf; int bPrevValid; } ;
struct TYPE_8__ {int rc; } ;
struct TYPE_7__ {int nEmpty; TYPE_3__* aDlidx; scalar_t__ bFirstRowidInPage; } ;
typedef TYPE_1__ Fts5SegWriter ;
typedef TYPE_2__ Fts5Index ;
typedef TYPE_3__ Fts5DlidxWriter ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_2(
  Fts5Index *VAR_0,
  Fts5SegWriter *VAR_1
){


  if( VAR_1->bFirstRowidInPage && VAR_1->aDlidx[0].buf.n>0 ){
    Fts5DlidxWriter *VAR_2 = &VAR_1->aDlidx[0];
    FUNC_0( VAR_2->bPrevValid );
    FUNC_1(&VAR_0->rc, &VAR_2->buf, 0);
  }


  VAR_1->nEmpty++;
}
