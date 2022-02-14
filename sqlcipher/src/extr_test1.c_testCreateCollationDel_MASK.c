
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pDel; int pCmp; int interp; } ;
typedef TYPE_1__ TestCollationX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static void FUNC_4(void *VAR_3){
  TestCollationX *VAR_4 = (TestCollationX *)VAR_3;

  int VAR_5 = FUNC_2(VAR_4->interp, VAR_4->pDel, VAR_0|VAR_1);
  if( VAR_5!=VAR_2 ){
    FUNC_0(VAR_4->interp);
  }

  FUNC_1(VAR_4->pCmp);
  FUNC_1(VAR_4->pDel);
  FUNC_3((void *)VAR_4);
}
