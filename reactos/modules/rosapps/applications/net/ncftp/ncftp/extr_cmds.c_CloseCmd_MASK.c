
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ connected; } ;
typedef int CommandPtr ;
typedef int ArgvInfoPtr ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;

void
FUNC_3(const int VAR_2, const char **const VAR_3, const CommandPtr VAR_4, const ArgvInfoPtr VAR_5)
{
 FUNC_0(VAR_1);
 if (VAR_0.connected == 0)
  (void) FUNC_2("Already closed.\n");
 else
  FUNC_1();
}
