
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ bDisable; } ;
struct TYPE_5__ {scalar_t__ isInterrupted; } ;
struct TYPE_7__ {scalar_t__ nVdbeExec; TYPE_2__ lookaside; TYPE_1__ u1; scalar_t__ mallocFailed; } ;
typedef TYPE_3__ sqlite3 ;


 int FUNC_0 (int) ;

void FUNC_1(sqlite3 *VAR_0){
  if( VAR_0->mallocFailed && VAR_0->nVdbeExec==0 ){
    VAR_0->mallocFailed = 0;
    VAR_0->u1.isInterrupted = 0;
    FUNC_0( VAR_0->lookaside.bDisable>0 );
    VAR_0->lookaside.bDisable--;
  }
}
