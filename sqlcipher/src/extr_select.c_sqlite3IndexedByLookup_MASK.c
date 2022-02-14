
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {char* zIndexedBy; } ;
struct TYPE_8__ {scalar_t__ isIndexedBy; } ;
struct SrcList_item {TYPE_5__* pIBIndex; TYPE_2__ u1; TYPE_3__* pTab; TYPE_1__ fg; } ;
struct TYPE_10__ {TYPE_5__* pIndex; } ;
typedef TYPE_3__ Table ;
struct TYPE_12__ {struct TYPE_12__* pNext; int zName; } ;
struct TYPE_11__ {int checkSchema; } ;
typedef TYPE_4__ Parse ;
typedef TYPE_5__ Index ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,char*,char*,int ) ;
 scalar_t__ FUNC_1 (int ,char*) ;

int FUNC_2(Parse *VAR_2, struct SrcList_item *VAR_3){
  if( VAR_3->pTab && VAR_3->fg.isIndexedBy ){
    Table *VAR_4 = VAR_3->pTab;
    char *VAR_5 = VAR_3->u1.zIndexedBy;
    Index *VAR_6;
    for(VAR_6=VAR_4->pIndex;
        VAR_6 && FUNC_1(VAR_6->zName, VAR_5);
        VAR_6=VAR_6->pNext
    );
    if( !VAR_6 ){
      FUNC_0(VAR_2, "no such index: %s", VAR_5, 0);
      VAR_2->checkSchema = 1;
      return VAR_0;
    }
    VAR_3->pIBIndex = VAR_6;
  }
  return VAR_1;
}
