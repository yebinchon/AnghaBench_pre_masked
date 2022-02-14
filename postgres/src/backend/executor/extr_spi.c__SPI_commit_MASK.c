
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int internal_xact; scalar_t__ atomic; } ;
typedef int MemoryContext ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12(bool VAR_4)
{
 MemoryContext VAR_5 = VAR_0;

 if (VAR_3->atomic)
  FUNC_9(VAR_2,
    (FUNC_10(VAR_1),
     FUNC_11("invalid transaction termination")));
 if (FUNC_3())
  FUNC_9(VAR_2,
    (FUNC_10(VAR_1),
     FUNC_11("cannot commit while a subtransaction is active")));






 FUNC_2();


 VAR_3->internal_xact = 1;





 while (FUNC_0())
  FUNC_5();

 if (VAR_4)
  FUNC_7();

 FUNC_1();

 if (VAR_4)
 {
  FUNC_8();
  FUNC_6();
 }

 FUNC_4(VAR_5);

 VAR_3->internal_xact = 0;
}
