
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pCursor; } ;
struct TYPE_7__ {scalar_t__ eCurType; int* aAltMap; TYPE_1__ uc; struct TYPE_7__* pAltCursor; scalar_t__ deferredMoveto; } ;
typedef TYPE_2__ VdbeCursor ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(VdbeCursor **VAR_3, int *VAR_4){
  VdbeCursor *VAR_5 = *VAR_3;
  FUNC_0( VAR_5->eCurType==VAR_0 || VAR_5->eCurType==VAR_1 );
  if( VAR_5->deferredMoveto ){
    int VAR_6;
    if( VAR_5->aAltMap && (VAR_6 = VAR_5->aAltMap[1+*VAR_4])>0 ){
      *VAR_3 = VAR_5->pAltCursor;
      *VAR_4 = VAR_6 - 1;
      return VAR_2;
    }
    return FUNC_1(VAR_5);
  }
  if( FUNC_3(VAR_5->uc.pCursor) ){
    return FUNC_2(VAR_5);
  }
  return VAR_2;
}
