
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ eStage; } ;
typedef TYPE_2__ sqlite3rbu ;
typedef int sqlite3_file ;
struct TYPE_7__ {int openFlags; TYPE_4__* pReal; scalar_t__ bNolock; TYPE_2__* pRbu; } ;
typedef TYPE_3__ rbu_file ;
struct TYPE_8__ {TYPE_1__* pMethods; } ;
struct TYPE_5__ {int (* xLock ) (TYPE_4__*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_2(sqlite3_file *VAR_6, int VAR_7){
  rbu_file *VAR_8 = (rbu_file*)VAR_6;
  sqlite3rbu *VAR_9 = VAR_8->pRbu;
  int VAR_10 = VAR_3;

  FUNC_0( VAR_8->openFlags & (VAR_4|VAR_5) );
  if( VAR_7==VAR_2
   && (VAR_8->bNolock || (VAR_9 && VAR_9->eStage!=VAR_0))
  ){


    VAR_10 = VAR_1;
  }else{
    VAR_10 = VAR_8->pReal->pMethods->xLock(VAR_8->pReal, VAR_7);
  }

  return VAR_10;
}
