
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct SrcList_item {scalar_t__ iCursor; TYPE_1__* pSelect; } ;
struct TYPE_10__ {int nTab; TYPE_2__* db; } ;
struct TYPE_9__ {int nSrc; struct SrcList_item* a; } ;
struct TYPE_8__ {scalar_t__ mallocFailed; } ;
struct TYPE_7__ {TYPE_3__* pSrc; } ;
typedef TYPE_3__ SrcList ;
typedef TYPE_4__ Parse ;


 int FUNC_0 (int) ;

void FUNC_1(Parse *VAR_0, SrcList *VAR_1){
  int VAR_2;
  struct SrcList_item *VAR_3;
  FUNC_0(VAR_1 || VAR_0->db->mallocFailed );
  if( VAR_1 ){
    for(VAR_2=0, VAR_3=VAR_1->a; VAR_2<VAR_1->nSrc; VAR_2++, VAR_3++){
      if( VAR_3->iCursor>=0 ) break;
      VAR_3->iCursor = VAR_0->nTab++;
      if( VAR_3->pSelect ){
        FUNC_1(VAR_0, VAR_3->pSelect->pSrc);
      }
    }
  }
}
