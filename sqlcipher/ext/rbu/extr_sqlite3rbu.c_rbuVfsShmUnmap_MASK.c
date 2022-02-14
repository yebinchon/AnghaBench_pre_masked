
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_8__ {int openFlags; TYPE_4__* pReal; TYPE_2__* pRbu; } ;
typedef TYPE_3__ rbu_file ;
struct TYPE_9__ {TYPE_1__* pMethods; } ;
struct TYPE_7__ {int eStage; } ;
struct TYPE_6__ {int (* xShmUnmap ) (TYPE_4__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_3(sqlite3_file *VAR_5, int VAR_6){
  rbu_file *VAR_7 = (rbu_file*)VAR_5;
  int VAR_8 = VAR_2;
  int VAR_9 = (VAR_7->pRbu ? VAR_7->pRbu->eStage : 0);

  FUNC_0( VAR_7->openFlags & (VAR_3|VAR_4) );
  if( VAR_9==VAR_1 || VAR_9==VAR_0 ){

  }else{

    FUNC_1(VAR_7);
    VAR_8 = VAR_7->pReal->pMethods->xShmUnmap(VAR_7->pReal, VAR_6);
  }
  return VAR_8;
}
