
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int comm; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(void)
{
 if (!FUNC_0())
  return;
 if (VAR_1)
  return;

 FUNC_3("\n");
 FUNC_3("====================================\n");
 FUNC_3("WARNING: %s/%d still has locks held!\n",
        VAR_0->comm, FUNC_5(VAR_0));
 FUNC_4();
 FUNC_3("------------------------------------\n");
 FUNC_2(VAR_0);
 FUNC_3("\nstack backtrace:\n");
 FUNC_1();
}
