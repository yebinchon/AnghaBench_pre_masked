
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int Tcl_Obj ;
struct TYPE_2__ {int pInterp; int pObj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (char*,int) ;
 TYPE_1__ VAR_2 ;
 char* FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(void *VAR_3, int VAR_4, char *VAR_5){
  Tcl_Obj *VAR_6 = FUNC_1(VAR_2.pObj);
  FUNC_3(VAR_6);
  FUNC_4(
      0, VAR_6, FUNC_5(FUNC_6(VAR_4), -1)
  );
  FUNC_4(0, VAR_6, FUNC_5(VAR_5, -1));
  FUNC_2(VAR_2.pInterp, VAR_6, VAR_1|VAR_0);
  FUNC_0(VAR_6);
}
