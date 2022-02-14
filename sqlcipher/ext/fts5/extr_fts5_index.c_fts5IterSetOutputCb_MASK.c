
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ eDetail; int nCol; } ;
struct TYPE_8__ {int xSetOutputs; int poslist; TYPE_2__* pColset; TYPE_1__* pIndex; } ;
struct TYPE_7__ {scalar_t__ nCol; } ;
struct TYPE_6__ {TYPE_4__* pConfig; } ;
typedef TYPE_3__ Fts5Iter ;
typedef TYPE_4__ Fts5Config ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int*,int *,int) ;

__attribute__((used)) static void FUNC_2(int *VAR_10, Fts5Iter *VAR_11){
  if( *VAR_10==VAR_3 ){
    Fts5Config *VAR_12 = VAR_11->pIndex->pConfig;
    if( VAR_12->eDetail==VAR_2 ){
      VAR_11->xSetOutputs = VAR_8;
    }

    else if( VAR_11->pColset==0 ){
      VAR_11->xSetOutputs = VAR_7;
    }

    else if( VAR_11->pColset->nCol==0 ){
      VAR_11->xSetOutputs = VAR_9;
    }

    else if( VAR_12->eDetail==VAR_1 ){
      VAR_11->xSetOutputs = VAR_6;
    }

    else{
      FUNC_0( VAR_12->eDetail==VAR_0 );
      if( VAR_12->nCol<=100 ){
        VAR_11->xSetOutputs = VAR_5;
        FUNC_1(VAR_10, &VAR_11->poslist, VAR_12->nCol);
      }else{
        VAR_11->xSetOutputs = VAR_4;
      }
    }
  }
}
