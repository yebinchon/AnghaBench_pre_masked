
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int major_version; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ,char*,...) ;

void
FUNC_2(char *VAR_2,
       char *VAR_3)
{

 if (FUNC_0(VAR_1.major_version) >= 804)
  FUNC_1(VAR_0,
      "Optimizer statistics are not transferred by pg_upgrade so,\n"
      "once you start the new server, consider running:\n"
      "    %s\n\n", VAR_2);
 else
  FUNC_1(VAR_0,
      "Optimizer statistics and free space information are not transferred\n"
      "by pg_upgrade so, once you start the new server, consider running:\n"
      "    %s\n\n", VAR_2);


 if (VAR_3)
  FUNC_1(VAR_0,
      "Running this script will delete the old cluster's data files:\n"
      "    %s\n",
      VAR_3);
 else
  FUNC_1(VAR_0,
      "Could not create a script to delete the old cluster's data files\n"
      "because user-defined tablespaces or the new cluster's data directory\n"
      "exist in the old cluster directory.  The old cluster's contents must\n"
      "be deleted manually.\n");
}
