
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Tcl_Interp ;
struct TYPE_5__ {int message; } ;
typedef int ResourceOwner ;
typedef int MemoryContext ;
typedef TYPE_1__ ErrorData ;


 TYPE_1__* FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *,int ) ;
 int VAR_1 ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 int FUNC_8 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_9(Tcl_Interp *VAR_3,
      MemoryContext VAR_4, ResourceOwner VAR_5)
{
 ErrorData *VAR_6;


 FUNC_3(VAR_4);
 VAR_6 = FUNC_0();
 FUNC_1();


 FUNC_4();
 FUNC_3(VAR_4);
 VAR_0 = VAR_5;


 FUNC_8(VAR_3, VAR_6);
 VAR_1;
 FUNC_6(VAR_3, FUNC_5(FUNC_7(VAR_6->message), -1));
 VAR_2;
 FUNC_2(VAR_6);
}
