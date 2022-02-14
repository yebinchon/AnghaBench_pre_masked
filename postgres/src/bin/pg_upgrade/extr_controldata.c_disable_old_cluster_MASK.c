
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int old_path ;
typedef int new_path ;
struct TYPE_2__ {char* pgdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,char*,char*) ;

void
FUNC_6(void)
{
 char VAR_3[VAR_0],
    VAR_4[VAR_0];


 FUNC_4("Adding \".old\" suffix to old global/pg_control");

 FUNC_5(VAR_3, sizeof(VAR_3), "%s/global/pg_control", VAR_2.pgdata);
 FUNC_5(VAR_4, sizeof(VAR_4), "%s/global/pg_control.old", VAR_2.pgdata);
 if (FUNC_3(VAR_3, VAR_4) != 0)
  FUNC_1("Unable to rename %s to %s.\n", VAR_3, VAR_4);
 FUNC_0();

 FUNC_2(VAR_1, "\n"
     "If you want to start the old cluster, you will need to remove\n"
     "the \".old\" suffix from %s/global/pg_control.old.\n"
     "Because \"link\" mode was used, the old cluster cannot be safely\n"
     "started once the new cluster has been started.\n\n", VAR_2.pgdata);
}
