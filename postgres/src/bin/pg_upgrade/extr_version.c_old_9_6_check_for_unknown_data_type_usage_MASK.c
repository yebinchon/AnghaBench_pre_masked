
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int output_path ;
typedef int ClusterInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,char*) ;

void
FUNC_6(ClusterInfo *VAR_2)
{
 char VAR_3[VAR_0];

 FUNC_4("Checking for invalid \"unknown\" user columns");

 FUNC_5(VAR_3, sizeof(VAR_3), "tables_using_unknown.txt");

 if (FUNC_0(VAR_2, "pg_catalog.unknown", VAR_3))
 {
  FUNC_3(VAR_1, "fatal\n");
  FUNC_2("Your installation contains the \"unknown\" data type in user tables.  This\n"
     "data type is no longer allowed in tables, so this cluster cannot currently\n"
     "be upgraded.  You can remove the problem tables and restart the upgrade.\n"
     "A list of the problem columns is in the file:\n"
     "    %s\n\n", VAR_3);
 }
 else
  FUNC_1();
}
