
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ iOp; int isError; TYPE_2__* pOut; TYPE_4__* pVdbe; } ;
typedef TYPE_3__ sqlite3_context ;
struct TYPE_11__ {TYPE_5__* pAuxData; int db; } ;
typedef TYPE_4__ Vdbe ;
struct TYPE_12__ {int iAuxArg; scalar_t__ iAuxOp; void (* xDeleteAux ) (void*) ;void* pAux; struct TYPE_12__* pNextAux; } ;
struct TYPE_9__ {TYPE_1__* db; } ;
struct TYPE_8__ {int mutex; } ;
typedef TYPE_5__ AuxData ;


 int FUNC_0 (int) ;
 TYPE_5__* FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 void FUNC_3 (void*) ;

void FUNC_4(
  sqlite3_context *VAR_0,
  int VAR_1,
  void *VAR_2,
  void (*VAR_3)(void*)
){
  AuxData *VAR_4;
  Vdbe *VAR_5 = VAR_0->pVdbe;

  FUNC_0( FUNC_2(VAR_0->pOut->db->mutex) );



  FUNC_0( VAR_5!=0 );


  for(VAR_4=VAR_5->pAuxData; VAR_4; VAR_4=VAR_4->pNextAux){
    if( VAR_4->iAuxArg==VAR_1 && (VAR_4->iAuxOp==VAR_0->iOp || VAR_1<0) ){
      break;
    }
  }
  if( VAR_4==0 ){
    VAR_4 = FUNC_1(VAR_5->db, sizeof(AuxData));
    if( !VAR_4 ) goto failed;
    VAR_4->iAuxOp = VAR_0->iOp;
    VAR_4->iAuxArg = VAR_1;
    VAR_4->pNextAux = VAR_5->pAuxData;
    VAR_5->pAuxData = VAR_4;
    if( VAR_0->isError==0 ) VAR_0->isError = -1;
  }else if( VAR_4->xDeleteAux ){
    VAR_4->xDeleteAux(VAR_4->pAux);
  }

  VAR_4->pAux = VAR_2;
  VAR_4->xDeleteAux = VAR_3;
  return;

failed:
  if( VAR_3 ){
    VAR_3(VAR_2);
  }
}
