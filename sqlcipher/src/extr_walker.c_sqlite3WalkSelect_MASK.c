
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int (* xSelectCallback ) (TYPE_1__*,TYPE_2__*) ;int (* xSelectCallback2 ) (TYPE_1__*,TYPE_2__*) ;} ;
typedef TYPE_1__ Walker ;
struct TYPE_14__ {struct TYPE_14__* pPrior; } ;
typedef TYPE_2__ Select ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;

int FUNC_4(Walker *VAR_2, Select *VAR_3){
  int VAR_4;
  if( VAR_3==0 ) return VAR_1;
  if( VAR_2->xSelectCallback==0 ) return VAR_1;
  do{
    VAR_4 = VAR_2->xSelectCallback(VAR_2, VAR_3);
    if( VAR_4 ) return VAR_4 & VAR_0;
    if( FUNC_0(VAR_2, VAR_3)
     || FUNC_1(VAR_2, VAR_3)
    ){
      return VAR_0;
    }
    if( VAR_2->xSelectCallback2 ){
      VAR_2->xSelectCallback2(VAR_2, VAR_3);
    }
    VAR_3 = VAR_3->pPrior;
  }while( VAR_3!=0 );
  return VAR_1;
}
