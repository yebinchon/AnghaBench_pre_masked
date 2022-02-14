
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_17__ {TYPE_6__* pFKey; } ;
typedef TYPE_3__ Table ;
struct TYPE_20__ {int nCol; struct TYPE_20__* pNextTo; TYPE_2__* aCol; struct TYPE_20__* pNextFrom; } ;
struct TYPE_19__ {int nKeyCol; scalar_t__* aiColumn; } ;
struct TYPE_18__ {TYPE_1__* db; } ;
struct TYPE_16__ {scalar_t__ iFrom; } ;
struct TYPE_15__ {int flags; } ;
typedef TYPE_4__ Parse ;
typedef TYPE_5__ Index ;
typedef TYPE_6__ FKey ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,TYPE_6__*,TYPE_5__**,int ) ;
 TYPE_6__* FUNC_3 (TYPE_3__*) ;

u32 FUNC_4(
  Parse *VAR_1,
  Table *VAR_2
){
  u32 VAR_3 = 0;
  if( VAR_1->db->flags&VAR_0 ){
    FKey *VAR_4;
    int VAR_5;
    for(VAR_4=VAR_2->pFKey; VAR_4; VAR_4=VAR_4->pNextFrom){
      for(VAR_5=0; VAR_5<VAR_4->nCol; VAR_5++) VAR_3 |= FUNC_0(VAR_4->aCol[VAR_5].iFrom);
    }
    for(VAR_4=FUNC_3(VAR_2); VAR_4; VAR_4=VAR_4->pNextTo){
      Index *VAR_6 = 0;
      FUNC_2(VAR_1, VAR_2, VAR_4, &VAR_6, 0);
      if( VAR_6 ){
        for(VAR_5=0; VAR_5<VAR_6->nKeyCol; VAR_5++){
          FUNC_1( VAR_6->aiColumn[VAR_5]>=0 );
          VAR_3 |= FUNC_0(VAR_6->aiColumn[VAR_5]);
        }
      }
    }
  }
  return VAR_3;
}
