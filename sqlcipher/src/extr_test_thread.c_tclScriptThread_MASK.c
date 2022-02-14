
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Tcl_ThreadCreateType ;
typedef int Tcl_Obj ;
typedef int Tcl_Interp ;
struct TYPE_3__ {char* zVarname; int zScript; } ;
typedef TYPE_1__ SqlThread ;
typedef void* ClientData ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,char*,int ,void*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int *) ;
 int * FUNC_12 () ;
 int * FUNC_13 (char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_14 (void*) ;
 int VAR_6 ;
 int FUNC_15 (TYPE_1__*,int *) ;
 int VAR_7 ;

__attribute__((used)) static Tcl_ThreadCreateType FUNC_16(ClientData VAR_8){
  Tcl_Interp *VAR_9;
  Tcl_Obj *VAR_10;
  Tcl_Obj *VAR_11;
  int VAR_12;
  SqlThread *VAR_13 = (SqlThread *)VAR_8;
  extern int FUNC_0(Tcl_Interp*);

  VAR_9 = FUNC_2();
  FUNC_3(VAR_9, "clock_seconds", VAR_6, 0, 0);
  FUNC_3(VAR_9, "sqlthread", VAR_7, VAR_8, 0);







  FUNC_1(VAR_9);
  FUNC_0(VAR_9);
  FUNC_0(VAR_9);

  VAR_12 = FUNC_7(VAR_9, VAR_13->zScript);
  VAR_10 = FUNC_9(VAR_9);
  VAR_11 = FUNC_12();
  FUNC_10(VAR_11);
  FUNC_10(VAR_10);

  if( VAR_12!=VAR_2 ){
    FUNC_11(VAR_9, VAR_11, FUNC_13("error", -1));
    FUNC_11(VAR_9, VAR_11, VAR_10);
    FUNC_15(VAR_13, VAR_11);
    FUNC_4(VAR_11);
    VAR_11 = FUNC_12();
  }

  FUNC_11(VAR_9, VAR_11, FUNC_13("set", -1));
  FUNC_11(VAR_9, VAR_11, FUNC_13(VAR_13->zVarname, -1));
  FUNC_11(VAR_9, VAR_11, VAR_10);
  FUNC_15(VAR_13, VAR_11);

  FUNC_14((void *)VAR_13);
  FUNC_4(VAR_11);
  FUNC_4(VAR_10);
  FUNC_5(VAR_9);
  while( FUNC_6(VAR_0|VAR_1) );
  FUNC_8(0);
  VAR_3;
}
