
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ relkind; int relname; } ;
typedef int Oid ;
typedef TYPE_1__* Form_pg_class ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 char* FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (scalar_t__,int ,char*) ;
 int VAR_7 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_9(Oid VAR_8, Form_pg_class VAR_9)
{
 AclResult VAR_10;
 char *VAR_11 = FUNC_2(VAR_9->relname);






 if (VAR_9->relkind != VAR_6 &&
  VAR_9->relkind != VAR_5)
  FUNC_4(VAR_4,
    (FUNC_5(VAR_3),
     FUNC_6("\"%s\" is not a table", VAR_11)));


 VAR_10 = FUNC_8(VAR_8, FUNC_0(), VAR_1);
 if (VAR_10 != VAR_0)
  FUNC_3(VAR_10, FUNC_7(VAR_9->relkind),
        VAR_11);

 if (!VAR_7 && FUNC_1(VAR_8, VAR_9))
  FUNC_4(VAR_4,
    (FUNC_5(VAR_2),
     FUNC_6("permission denied: \"%s\" is a system catalog",
      VAR_11)));
}
