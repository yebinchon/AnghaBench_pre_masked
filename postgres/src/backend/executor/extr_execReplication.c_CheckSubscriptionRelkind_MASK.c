
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*,char const*) ;
 int FUNC_3 (char*,char const*,char const*) ;

void
FUNC_4(char VAR_5, const char *VAR_6,
       const char *VAR_7)
{




 if (VAR_5 == VAR_3)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("cannot use relation \"%s.%s\" as logical replication target",
      VAR_6, VAR_7),
     FUNC_2("\"%s.%s\" is a partitioned table.",
         VAR_6, VAR_7)));
 else if (VAR_5 == VAR_2)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("cannot use relation \"%s.%s\" as logical replication target",
      VAR_6, VAR_7),
     FUNC_2("\"%s.%s\" is a foreign table.",
         VAR_6, VAR_7)));

 if (VAR_5 != VAR_4)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("cannot use relation \"%s.%s\" as logical replication target",
      VAR_6, VAR_7),
     FUNC_2("\"%s.%s\" is not a table.",
         VAR_6, VAR_7)));
}
