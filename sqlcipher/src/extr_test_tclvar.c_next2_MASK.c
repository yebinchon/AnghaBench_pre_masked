
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i2; int * pList2; } ;
typedef TYPE_1__ tclvar_cursor ;
typedef int Tcl_Obj ;
typedef int Tcl_Interp ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int ,int *,int*) ;
 int * FUNC_6 (char*,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(Tcl_Interp *VAR_1, tclvar_cursor *VAR_2, Tcl_Obj *VAR_3){
  Tcl_Obj *VAR_4;

  if( VAR_3 ){
    if( !VAR_2->pList2 ){
      VAR_4 = FUNC_6("array names", -1);
      FUNC_3(VAR_4);
      FUNC_4(0, VAR_4, VAR_3);
      FUNC_1(VAR_1, VAR_4, VAR_0);
      FUNC_0(VAR_4);
      VAR_2->pList2 = FUNC_2(VAR_1);
      FUNC_3(VAR_2->pList2);
      FUNC_7( VAR_2->i2==0 );
    }else{
      int VAR_5 = 0;
      VAR_2->i2++;
      FUNC_5(0, VAR_2->pList2, &VAR_5);
      if( VAR_2->i2>=VAR_5 ){
        FUNC_0(VAR_2->pList2);
        VAR_2->pList2 = 0;
        VAR_2->i2 = 0;
        return 0;
      }
    }
  }

  return 1;
}
