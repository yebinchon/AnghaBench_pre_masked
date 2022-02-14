
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ blockState; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char const*) ;

void
FUNC_6(bool VAR_6, const char *VAR_7)
{



 if (FUNC_1())
  FUNC_3(VAR_2,
    (FUNC_4(VAR_1),

     FUNC_5("%s cannot run inside a transaction block",
      VAR_7)));




 if (FUNC_0())
  FUNC_3(VAR_2,
    (FUNC_4(VAR_1),

     FUNC_5("%s cannot run inside a subtransaction",
      VAR_7)));




 if (!VAR_6)
  FUNC_3(VAR_2,
    (FUNC_4(VAR_1),

     FUNC_5("%s cannot be executed from a function", VAR_7)));


 if (VAR_0->blockState != VAR_4 &&
  VAR_0->blockState != VAR_5)
  FUNC_2(VAR_3, "cannot prevent transaction chain");

}
