
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ check; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_1 ;

void
FUNC_3(void)
{
 if (VAR_1.check)
 {
  FUNC_1(VAR_0, "\n*Clusters are compatible*\n");

  FUNC_2(0);
  FUNC_0(0);
 }

 FUNC_1(VAR_0, "\n"
     "If pg_upgrade fails after this point, you must re-initdb the\n"
     "new cluster before continuing.\n");
}
