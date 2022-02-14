
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int Tcl_Obj ;
typedef int Tcl_Interp ;


 int FUNC_0 (void*) ;
 int VAR_0 ;



 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int ,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int * FUNC_7 (char*,int) ;
 int FUNC_8 (int ) ;
 int * VAR_1 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int ) ;
 int FUNC_13 (int *,int,void const*,int,int ) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(
  void *VAR_2,
  int VAR_3, const void *VAR_4,
  int VAR_5, const void *VAR_6
){
  Tcl_Interp *VAR_7 = VAR_1;
  int VAR_8 = FUNC_0(VAR_2);
  int VAR_9;
  int VAR_10;

  sqlite3_value *VAR_11;
  Tcl_Obj *VAR_12;

  VAR_12 = FUNC_7("test_collate", -1);
  FUNC_5(VAR_12);

  switch( VAR_8 ){
    case 128:
      FUNC_6(VAR_7,VAR_12,FUNC_7("UTF-8",-1));
      break;
    case 129:
      FUNC_6(VAR_7,VAR_12,FUNC_7("UTF-16LE",-1));
      break;
    case 130:
      FUNC_6(VAR_7,VAR_12,FUNC_7("UTF-16BE",-1));
      break;
    default:
      FUNC_8(0);
  }

  FUNC_9();
  VAR_11 = FUNC_12(0);
  if( VAR_11 ){
    FUNC_13(VAR_11, VAR_3, VAR_4, VAR_8, VAR_0);
    VAR_10 = FUNC_14(VAR_11);
    FUNC_6(VAR_7,VAR_12,
        FUNC_7((char*)FUNC_15(VAR_11),VAR_10));
    FUNC_13(VAR_11, VAR_5, VAR_6, VAR_8, VAR_0);
    VAR_10 = FUNC_14(VAR_11);
    FUNC_6(VAR_7,VAR_12,
        FUNC_7((char*)FUNC_15(VAR_11),VAR_10));
    FUNC_11(VAR_11);
  }
  FUNC_10();

  FUNC_2(VAR_7, VAR_12, 0);
  FUNC_1(VAR_12);
  FUNC_3(VAR_7, FUNC_4(VAR_7), &VAR_9);
  return VAR_9;
}
