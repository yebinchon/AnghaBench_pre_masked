
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int pFuncArg; void* zIndexedBy; } ;
struct TYPE_8__ {scalar_t__ isTabFunc; scalar_t__ isIndexedBy; } ;
struct SrcList_item {int colUsed; int pUsing; int pOn; int pSelect; TYPE_3__* pTab; TYPE_2__ u1; TYPE_1__ fg; int pIBIndex; int regReturn; int addrFillSub; int iCursor; void* zAlias; void* zName; void* zDatabase; int pSchema; } ;
typedef int sqlite3 ;
struct TYPE_10__ {int nTabRef; } ;
typedef TYPE_3__ Table ;
struct TYPE_11__ {int nSrc; int nAlloc; struct SrcList_item* a; } ;
typedef TYPE_4__ SrcList ;


 int FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,void*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int) ;

SrcList *FUNC_7(sqlite3 *VAR_0, SrcList *VAR_1, int VAR_2){
  SrcList *VAR_3;
  int VAR_4;
  int VAR_5;
  FUNC_0( VAR_0!=0 );
  if( VAR_1==0 ) return 0;
  VAR_5 = sizeof(*VAR_1) + (VAR_1->nSrc>0 ? sizeof(VAR_1->a[0]) * (VAR_1->nSrc-1) : 0);
  VAR_3 = FUNC_1(VAR_0, VAR_5 );
  if( VAR_3==0 ) return 0;
  VAR_3->nSrc = VAR_3->nAlloc = VAR_1->nSrc;
  for(VAR_4=0; VAR_4<VAR_1->nSrc; VAR_4++){
    struct SrcList_item *VAR_6 = &VAR_3->a[VAR_4];
    struct SrcList_item *VAR_7 = &VAR_1->a[VAR_4];
    Table *VAR_8;
    VAR_6->pSchema = VAR_7->pSchema;
    VAR_6->zDatabase = FUNC_2(VAR_0, VAR_7->zDatabase);
    VAR_6->zName = FUNC_2(VAR_0, VAR_7->zName);
    VAR_6->zAlias = FUNC_2(VAR_0, VAR_7->zAlias);
    VAR_6->fg = VAR_7->fg;
    VAR_6->iCursor = VAR_7->iCursor;
    VAR_6->addrFillSub = VAR_7->addrFillSub;
    VAR_6->regReturn = VAR_7->regReturn;
    if( VAR_6->fg.isIndexedBy ){
      VAR_6->u1.zIndexedBy = FUNC_2(VAR_0, VAR_7->u1.zIndexedBy);
    }
    VAR_6->pIBIndex = VAR_7->pIBIndex;
    if( VAR_6->fg.isTabFunc ){
      VAR_6->u1.pFuncArg =
          FUNC_4(VAR_0, VAR_7->u1.pFuncArg, VAR_2);
    }
    VAR_8 = VAR_6->pTab = VAR_7->pTab;
    if( VAR_8 ){
      VAR_8->nTabRef++;
    }
    VAR_6->pSelect = FUNC_6(VAR_0, VAR_7->pSelect, VAR_2);
    VAR_6->pOn = FUNC_3(VAR_0, VAR_7->pOn, VAR_2);
    VAR_6->pUsing = FUNC_5(VAR_0, VAR_7->pUsing);
    VAR_6->colUsed = VAR_7->colUsed;
  }
  return VAR_3;
}
