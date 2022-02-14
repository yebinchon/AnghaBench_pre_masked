
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_4__ {int iAuxOp; int iAuxArg; struct TYPE_4__* pNextAux; int pAux; int (* xDeleteAux ) (int ) ;} ;
typedef TYPE_1__ AuxData ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

void FUNC_4(sqlite3 *VAR_0, AuxData **VAR_1, int VAR_2, int VAR_3){
  while( *VAR_1 ){
    AuxData *VAR_4 = *VAR_1;
    if( (VAR_2<0)
     || (VAR_4->iAuxOp==VAR_2
          && VAR_4->iAuxArg>=0
          && (VAR_4->iAuxArg>31 || !(VAR_3 & FUNC_0(VAR_4->iAuxArg))))
    ){
      FUNC_3( VAR_4->iAuxArg==31 );
      if( VAR_4->xDeleteAux ){
        VAR_4->xDeleteAux(VAR_4->pAux);
      }
      *VAR_1 = VAR_4->pNextAux;
      FUNC_1(VAR_0, VAR_4);
    }else{
      VAR_1= &VAR_4->pNextAux;
    }
  }
}
