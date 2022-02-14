
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ pCompress; } ;
struct TYPE_8__ {scalar_t__ iPg; scalar_t__ nCompress; TYPE_5__* pFS; } ;
struct TYPE_7__ {scalar_t__ iLastPg; } ;
typedef TYPE_1__ Segment ;
typedef TYPE_2__ Page ;
typedef scalar_t__ LsmPgno ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,TYPE_1__*,scalar_t__,scalar_t__,scalar_t__*) ;

int FUNC_1(Segment *VAR_1, Page *VAR_2){
  if( VAR_2->pFS->pCompress ){
    LsmPgno VAR_3 = 0;
    int VAR_4;
    VAR_4 = FUNC_0(VAR_2->pFS, VAR_1, VAR_2->iPg, VAR_2->nCompress+6, &VAR_3);
    return (VAR_4!=VAR_0 || VAR_3==0);
  }
  return (VAR_2->iPg==VAR_1->iLastPg);
}
