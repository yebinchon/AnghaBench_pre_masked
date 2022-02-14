
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ eStage; int mLock; } ;
typedef TYPE_2__ sqlite3rbu ;
typedef int sqlite3_file ;
struct TYPE_7__ {int openFlags; TYPE_4__* pReal; TYPE_2__* pRbu; } ;
typedef TYPE_3__ rbu_file ;
struct TYPE_8__ {TYPE_1__* pMethods; } ;
struct TYPE_5__ {int (* xShmLock ) (TYPE_4__*,int,int,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int,int,int) ;

__attribute__((used)) static int FUNC_2(sqlite3_file *VAR_13, int VAR_14, int VAR_15, int VAR_16){
  rbu_file *VAR_17 = (rbu_file*)VAR_13;
  sqlite3rbu *VAR_18 = VAR_17->pRbu;
  int VAR_19 = VAR_4;





  FUNC_0( VAR_17->openFlags & (VAR_5|VAR_6) );
  if( VAR_18 && (VAR_18->eStage==VAR_2 || VAR_18->eStage==VAR_1) ){




    if( VAR_14==VAR_10 && VAR_15==1 ) VAR_19 = VAR_3;
  }else{
    int VAR_20 = 0;
    if( VAR_15==1 && (VAR_16 & VAR_7)
     && VAR_18 && VAR_18->eStage==VAR_0
     && (VAR_14==VAR_12 || VAR_14==VAR_10 || VAR_14==VAR_11)
    ){
      VAR_20 = 1;
    }

    if( VAR_20==0 || 0==(VAR_16 & VAR_8) ){
      VAR_19 = VAR_17->pReal->pMethods->xShmLock(VAR_17->pReal, VAR_14, VAR_15, VAR_16);
      if( VAR_20 && VAR_19==VAR_4 ){
        VAR_18->mLock |= (1 << VAR_14);
      }
    }
  }

  return VAR_19;
}
