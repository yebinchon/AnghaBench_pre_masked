
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int user; } ;
typedef int PGresult ;
typedef int PGconn ;
typedef int ClusterInfo ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int * FUNC_6 (int *,char*) ;
 int * FUNC_7 (int *,char*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10(ClusterInfo *VAR_3)
{
 PGresult *VAR_4;
 PGconn *VAR_5 = FUNC_6(VAR_3, "template1");

 FUNC_9("Checking database user is the install user");


 VAR_4 = FUNC_7(VAR_5,
       "SELECT rolsuper, oid "
       "FROM pg_catalog.pg_roles "
       "WHERE rolname = current_user "
       "AND rolname !~ '^pg_'");






 if (FUNC_3(VAR_4) != 1 ||
  FUNC_4(FUNC_2(VAR_4, 0, 1)) != VAR_0)
  FUNC_8("database user \"%s\" is not the install user\n",
     VAR_2.user);

 FUNC_0(VAR_4);

 VAR_4 = FUNC_7(VAR_5,
       "SELECT COUNT(*) "
       "FROM pg_catalog.pg_roles "
       "WHERE rolname !~ '^pg_'");

 if (FUNC_3(VAR_4) != 1)
  FUNC_8("could not determine the number of users\n");






 if (VAR_3 == &VAR_1 && FUNC_4(FUNC_2(VAR_4, 0, 0)) != 1)
  FUNC_8("Only the install user can be defined in the new cluster.\n");

 FUNC_0(VAR_4);

 FUNC_1(VAR_5);

 FUNC_5();
}
