
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int internal_xact; scalar_t__ atomic; } ;
typedef int MemoryContext ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10(bool VAR_4)
{
 MemoryContext VAR_5 = VAR_0;

 if (VAR_3->atomic)
  FUNC_7(VAR_2,
    (FUNC_8(VAR_1),
     FUNC_9("invalid transaction termination")));


 if (FUNC_2())
  FUNC_7(VAR_2,
    (FUNC_8(VAR_1),
     FUNC_9("cannot roll back while a subtransaction is active")));







 FUNC_1();


 VAR_3->internal_xact = 1;

 if (VAR_4)
  FUNC_5();

 FUNC_0();

 if (VAR_4)
 {
  FUNC_6();
  FUNC_4();
 }

 FUNC_3(VAR_5);

 VAR_3->internal_xact = 0;
}
