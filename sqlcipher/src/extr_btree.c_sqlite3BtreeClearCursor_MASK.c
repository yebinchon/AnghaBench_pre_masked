
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int eState; scalar_t__ pKey; } ;
typedef TYPE_1__ BtCursor ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(BtCursor *VAR_1){
  FUNC_0( FUNC_1(VAR_1) );
  FUNC_2(VAR_1->pKey);
  VAR_1->pKey = 0;
  VAR_1->eState = VAR_0;
}
