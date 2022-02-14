
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct SrcList_item {scalar_t__ pTab; int zName; } ;
struct TYPE_14__ {TYPE_6__* pRename; } ;
struct TYPE_15__ {TYPE_9__* pParse; TYPE_2__ u; } ;
typedef TYPE_3__ Walker ;
struct TYPE_19__ {TYPE_1__* db; } ;
struct TYPE_18__ {scalar_t__ pTab; } ;
struct TYPE_17__ {TYPE_4__* pSrc; } ;
struct TYPE_16__ {int nSrc; struct SrcList_item* a; } ;
struct TYPE_13__ {int mallocFailed; } ;
typedef TYPE_4__ SrcList ;
typedef TYPE_5__ Select ;
typedef TYPE_6__ RenameCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_9__*,TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_5__*) ;

__attribute__((used)) static int FUNC_3(Walker *VAR_2, Select *VAR_3){
  int VAR_4;
  RenameCtx *VAR_5 = VAR_2->u.pRename;
  SrcList *VAR_6 = VAR_3->pSrc;
  if( VAR_6==0 ){
    FUNC_0( VAR_2->pParse->db->mallocFailed );
    return VAR_0;
  }
  for(VAR_4=0; VAR_4<VAR_6->nSrc; VAR_4++){
    struct SrcList_item *VAR_7 = &VAR_6->a[VAR_4];
    if( VAR_7->pTab==VAR_5->pTab ){
      FUNC_1(VAR_2->pParse, VAR_5, VAR_7->zName);
    }
  }
  FUNC_2(VAR_2, VAR_3);

  return VAR_1;
}
