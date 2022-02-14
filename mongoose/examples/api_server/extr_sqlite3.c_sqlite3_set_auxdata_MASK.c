
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct AuxData {void* pAux; void (* xDelete ) (void*) ;} ;
struct TYPE_8__ {TYPE_6__* db; } ;
struct TYPE_9__ {int pFunc; TYPE_3__* pVdbeFunc; TYPE_1__ s; } ;
typedef TYPE_2__ sqlite3_context ;
struct TYPE_10__ {int nAux; struct AuxData* apAux; int pFunc; } ;
typedef TYPE_3__ VdbeFunc ;
struct TYPE_11__ {int mutex; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct AuxData*,int ,int) ;
 TYPE_3__* FUNC_2 (TYPE_6__*,TYPE_3__*,int) ;
 int FUNC_3 (int ) ;
 void FUNC_4 (void*) ;

void FUNC_5(
  sqlite3_context *VAR_0,
  int VAR_1,
  void *VAR_2,
  void (*VAR_3)(void*)
){
  struct AuxData *VAR_4;
  VdbeFunc *VAR_5;
  if( VAR_1<0 ) goto failed;

  FUNC_0( FUNC_3(VAR_0->s.db->mutex) );
  VAR_5 = VAR_0->pVdbeFunc;
  if( !VAR_5 || VAR_5->nAux<=VAR_1 ){
    int VAR_6 = (VAR_5 ? VAR_5->nAux : 0);
    int VAR_7 = sizeof(VdbeFunc) + sizeof(struct AuxData)*VAR_1;
    VAR_5 = FUNC_2(VAR_0->s.db, VAR_5, VAR_7);
    if( !VAR_5 ){
      goto failed;
    }
    VAR_0->pVdbeFunc = VAR_5;
    FUNC_1(&VAR_5->apAux[VAR_6], 0, sizeof(struct AuxData)*(VAR_1+1-VAR_6));
    VAR_5->nAux = VAR_1+1;
    VAR_5->pFunc = VAR_0->pFunc;
  }

  VAR_4 = &VAR_5->apAux[VAR_1];
  if( VAR_4->pAux && VAR_4->xDelete ){
    VAR_4->xDelete(VAR_4->pAux);
  }
  VAR_4->pAux = VAR_2;
  VAR_4->xDelete = VAR_3;
  return;

failed:
  if( VAR_3 ){
    VAR_3(VAR_2);
  }
}
