
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_7__ {int openFlags; TYPE_4__* pReal; TYPE_1__* pRbu; } ;
typedef TYPE_3__ rbu_file ;
struct TYPE_8__ {TYPE_2__* pMethods; } ;
struct TYPE_6__ {int (* xSync ) (TYPE_4__*,int) ;} ;
struct TYPE_5__ {scalar_t__ eStage; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_1(sqlite3_file *VAR_4, int VAR_5){
  rbu_file *VAR_6 = (rbu_file *)VAR_4;
  if( VAR_6->pRbu && VAR_6->pRbu->eStage==VAR_0 ){
    if( VAR_6->openFlags & VAR_3 ){
      return VAR_1;
    }
    return VAR_2;
  }
  return VAR_6->pReal->pMethods->xSync(VAR_6->pReal, VAR_5);
}
