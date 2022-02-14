
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ szSlot; int bUnderPressure; scalar_t__ nSlot; } ;
struct TYPE_4__ {scalar_t__ szPage; scalar_t__ szExtra; } ;
typedef TYPE_1__ PCache1 ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(PCache1 *VAR_1){
  if( VAR_0 && (VAR_1->szPage+VAR_1->szExtra)<=VAR_0 ){
    return VAR_0;
  }else{
    return FUNC_0();
  }
}
