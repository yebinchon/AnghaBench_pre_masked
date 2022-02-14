
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* pDb; } ;
struct TYPE_12__ {int nRight; TYPE_1__* aRhs; } ;
struct TYPE_11__ {TYPE_2__* pWorker; } ;
struct TYPE_10__ {scalar_t__* aiAppend; } ;
struct TYPE_9__ {scalar_t__ iLastPg; } ;
typedef scalar_t__ LsmPgno ;
typedef TYPE_4__ Level ;
typedef TYPE_5__ FileSystem ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,scalar_t__) ;

__attribute__((used)) static LsmPgno FUNC_1(FileSystem *VAR_1, Level *VAR_2){
  int VAR_3;
  LsmPgno *VAR_4 = VAR_1->pDb->pWorker->aiAppend;
  LsmPgno VAR_5 = 0;

  for(VAR_3=VAR_0-1; VAR_5==0 && VAR_3>=0; VAR_3--){
    if( (VAR_5 = VAR_4[VAR_3]) ){
      if( VAR_2 ){
        int VAR_6 = FUNC_0(VAR_1, VAR_5);
        int VAR_7;
        for(VAR_7=0; VAR_5 && VAR_7<VAR_2->nRight; VAR_7++){
          if( FUNC_0(VAR_1, VAR_2->aRhs[VAR_7].iLastPg)==VAR_6 ){
            VAR_5 = 0;
          }
        }
      }
      if( VAR_5 ) VAR_4[VAR_3] = 0;
    }
  }
  return VAR_5;
}
