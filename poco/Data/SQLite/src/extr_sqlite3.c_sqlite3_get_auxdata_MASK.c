
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ iOp; TYPE_3__* pVdbe; TYPE_2__* pOut; } ;
typedef TYPE_4__ sqlite3_context ;
struct TYPE_11__ {int iAuxArg; scalar_t__ iAuxOp; void* pAux; struct TYPE_11__* pNextAux; } ;
struct TYPE_9__ {TYPE_5__* pAuxData; } ;
struct TYPE_8__ {TYPE_1__* db; } ;
struct TYPE_7__ {int mutex; } ;
typedef TYPE_5__ AuxData ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

void *FUNC_2(sqlite3_context *VAR_0, int VAR_1){
  AuxData *VAR_2;

  FUNC_0( FUNC_1(VAR_0->pOut->db->mutex) );



  FUNC_0( VAR_0->pVdbe!=0 );

  for(VAR_2=VAR_0->pVdbe->pAuxData; VAR_2; VAR_2=VAR_2->pNextAux){
    if( VAR_2->iAuxArg==VAR_1 && (VAR_2->iAuxOp==VAR_0->iOp || VAR_1<0) ){
      return VAR_2->pAux;
    }
  }
  return 0;
}
