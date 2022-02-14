
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int bDisable; } ;
struct TYPE_7__ {int isInterrupted; } ;
struct TYPE_9__ {int mallocFailed; scalar_t__ bBenignMalloc; scalar_t__ nVdbeExec; TYPE_1__* pParse; TYPE_3__ lookaside; TYPE_2__ u1; } ;
typedef TYPE_4__ sqlite3 ;
struct TYPE_6__ {int rc; } ;


 int VAR_0 ;

void FUNC_0(sqlite3 *VAR_1){
  if( VAR_1->mallocFailed==0 && VAR_1->bBenignMalloc==0 ){
    VAR_1->mallocFailed = 1;
    if( VAR_1->nVdbeExec>0 ){
      VAR_1->u1.isInterrupted = 1;
    }
    VAR_1->lookaside.bDisable++;
    if( VAR_1->pParse ){
      VAR_1->pParse->rc = VAR_0;
    }
  }
}
