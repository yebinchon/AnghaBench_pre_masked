
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pCursor; } ;
struct TYPE_6__ {scalar_t__ eCurType; TYPE_1__ uc; } ;
typedef TYPE_2__ VdbeCursor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(VdbeCursor *VAR_2){
  FUNC_0( VAR_2->eCurType==VAR_0 );
  if( FUNC_2(VAR_2->uc.pCursor) ){
    return FUNC_1(VAR_2);
  }
  return VAR_1;
}
