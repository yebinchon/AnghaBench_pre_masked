
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int interp; int pCmp; } ;
typedef TYPE_1__ TestCollationX ;
typedef int Tcl_Obj ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *,int) ;
 scalar_t__ FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static int FUNC_9(
  void *VAR_3,
  int VAR_4,
  const void *VAR_5,
  int VAR_6,
  const void *VAR_7
){
  TestCollationX *VAR_8 = (TestCollationX *)VAR_3;
  Tcl_Obj *VAR_9 = FUNC_2(VAR_8->pCmp);
  int VAR_10 = 0;

  FUNC_6(VAR_9);
  FUNC_7(0, VAR_9, FUNC_8((char *)VAR_5, VAR_4));
  FUNC_7(0, VAR_9, FUNC_8((char *)VAR_7,VAR_6));

  if( VAR_2!=FUNC_3(VAR_8->interp, VAR_9, VAR_0|VAR_1)
   || VAR_2!=FUNC_4(VAR_8->interp, FUNC_5(VAR_8->interp), &VAR_10)
  ){
    FUNC_0(VAR_8->interp);
  }
  FUNC_1(VAR_9);

  return VAR_10;
}
