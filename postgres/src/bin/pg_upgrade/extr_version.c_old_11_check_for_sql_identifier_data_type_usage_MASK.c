
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

 FUNC_4("Checking for invalid \"sql_identifier\" user columns");

 FUNC_5(VAR_3, sizeof(VAR_3), "tables_using_sql_identifier.txt");

 if (FUNC_0(VAR_2, "information_schema.sql_identifier",
          VAR_3))
 {
  FUNC_3(VAR_1, "fatal\n");
  FUNC_2("Your installation contains the \"sql_identifier\" data type in user tables\n"
     "and/or indexes.  The on-disk format for this data type has changed, so this\n"
     "cluster cannot currently be upgraded.  You can remove the problem tables or\n"
     "change the data type to \"name\" and restart the upgrade.\n"
     "A list of the problem columns is in the file:\n"
     "    %s\n\n", VAR_3);
 }
 else
  FUNC_1();
}
