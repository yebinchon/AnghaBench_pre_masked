
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int notIndexed; int isIndexedBy; scalar_t__ isTabFunc; } ;
struct TYPE_10__ {int zIndexedBy; } ;
struct SrcList_item {TYPE_2__ fg; TYPE_1__ u1; } ;
struct TYPE_12__ {int n; int z; } ;
typedef TYPE_3__ Token ;
struct TYPE_14__ {int db; } ;
struct TYPE_13__ {int nSrc; struct SrcList_item* a; } ;
typedef TYPE_4__ SrcList ;
typedef TYPE_5__ Parse ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_3__*) ;

void FUNC_2(Parse *VAR_0, SrcList *VAR_1, Token *VAR_2){
  FUNC_0( VAR_2!=0 );
  if( VAR_1 && VAR_2->n>0 ){
    struct SrcList_item *VAR_3;
    FUNC_0( VAR_1->nSrc>0 );
    VAR_3 = &VAR_1->a[VAR_1->nSrc-1];
    FUNC_0( VAR_3->fg.notIndexed==0 );
    FUNC_0( VAR_3->fg.isIndexedBy==0 );
    FUNC_0( VAR_3->fg.isTabFunc==0 );
    if( VAR_2->n==1 && !VAR_2->z ){


      VAR_3->fg.notIndexed = 1;
    }else{
      VAR_3->u1.zIndexedBy = FUNC_1(VAR_0->db, VAR_2);
      VAR_3->fg.isIndexedBy = 1;
    }
  }
}
