
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ eState; int exclusiveMode; } ;
typedef TYPE_1__ Pager ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(Pager *VAR_4){
  if( VAR_4->eState!=VAR_0 && VAR_4->eState!=VAR_1 ){
    FUNC_0( FUNC_1(VAR_4) );
    if( VAR_4->eState>=VAR_3 ){
      FUNC_4();
      FUNC_6(VAR_4);
      FUNC_5();
    }else if( !VAR_4->exclusiveMode ){
      FUNC_0( VAR_4->eState==VAR_2 );
      FUNC_2(VAR_4, 0, 0);
    }
  }
  FUNC_3(VAR_4);
}
