
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__** apSub; } ;
struct TYPE_6__ {TYPE_1__ u; scalar_t__ iDivisor; } ;
typedef TYPE_2__ Bitvec ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(Bitvec *VAR_1){
  if( VAR_1==0 ) return;
  if( VAR_1->iDivisor ){
    unsigned int VAR_2;
    for(VAR_2=0; VAR_2<VAR_0; VAR_2++){
      FUNC_1(VAR_1->u.apSub[VAR_2]);
    }
  }
  FUNC_0(VAR_1);
}
