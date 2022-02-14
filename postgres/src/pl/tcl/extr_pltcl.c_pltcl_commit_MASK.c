
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Tcl_Obj ;
typedef int Tcl_Interp ;
struct TYPE_5__ {int message; } ;
typedef int MemoryContext ;
typedef TYPE_1__ ErrorData ;
typedef int ClientData ;


 TYPE_1__* FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int *,int ) ;
 int VAR_3 ;
 int FUNC_11 (int ) ;
 int VAR_4 ;
 int FUNC_12 (int *,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_13(ClientData VAR_5, Tcl_Interp *VAR_6,
    int VAR_7, Tcl_Obj *const VAR_8[])
{
 MemoryContext VAR_9 = VAR_0;

 FUNC_6();
 {
  FUNC_7();
  FUNC_8();
 }
 FUNC_4();
 {
  ErrorData *VAR_10;


  FUNC_3(VAR_9);
  VAR_10 = FUNC_0();
  FUNC_1();


  FUNC_12(VAR_6, VAR_10);
  VAR_3;
  FUNC_10(VAR_6, FUNC_9(FUNC_11(VAR_10->message), -1));
  VAR_4;
  FUNC_2(VAR_10);

  return VAR_1;
 }
 FUNC_5();

 return VAR_2;
}
