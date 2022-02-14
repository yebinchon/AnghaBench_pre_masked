
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int Tcl_Obj ;
typedef int Tcl_Interp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int * FUNC_5 (char*,int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *,int,int ,int ,int ) ;
 int FUNC_9 (int *,int ,int,int ) ;
 int FUNC_10 (int *,int ,int,int ) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(
  sqlite3_context *VAR_3,
  int VAR_4,
  sqlite3_value **VAR_5
){
  Tcl_Interp *VAR_6;
  Tcl_Obj *VAR_7;
  sqlite3_value *VAR_8;
  VAR_6 = (Tcl_Interp *)FUNC_11(VAR_3);
  VAR_7 = FUNC_5("test_function", -1);
  FUNC_3(VAR_7);
  FUNC_4(VAR_6, VAR_7, FUNC_5("UTF-8", -1));
  FUNC_4(VAR_6, VAR_7,
      FUNC_5((char*)FUNC_12(VAR_5[0]), -1));
  FUNC_1(VAR_6, VAR_7, 0);
  FUNC_0(VAR_7);
  FUNC_9(VAR_3, FUNC_2(VAR_6), -1, VAR_1);
  VAR_8 = FUNC_7(0);
  FUNC_8(VAR_8, -1, FUNC_2(VAR_6),
      VAR_2, VAR_0);
  FUNC_10(VAR_3, FUNC_13(VAR_8),
      -1, VAR_1);
  FUNC_6(VAR_8);
}
