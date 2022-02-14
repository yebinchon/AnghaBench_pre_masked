
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int version; int release; } ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,int,int ,int ) ;
 scalar_t__ FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
 FUNC_2("%s %.*s %s\n", FUNC_0()->release,
  (int)FUNC_3(FUNC_0()->version, " "),
  FUNC_0()->version,
  FUNC_1());
}
