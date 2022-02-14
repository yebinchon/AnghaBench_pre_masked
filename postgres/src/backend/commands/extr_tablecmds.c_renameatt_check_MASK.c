
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char relkind; int relname; scalar_t__ reloftype; } ;
typedef int Oid ;
typedef TYPE_1__* Form_pg_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 char VAR_11 ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_12 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void
FUNC_10(Oid VAR_13, Form_pg_class VAR_14, bool VAR_15)
{
 char VAR_16 = VAR_14->relkind;

 if (VAR_14->reloftype && !VAR_15)
  FUNC_4(VAR_3,
    (FUNC_5(VAR_2),
     FUNC_6("cannot rename column of typed table")));
 if (VAR_16 != VAR_10 &&
  VAR_16 != VAR_11 &&
  VAR_16 != VAR_7 &&
  VAR_16 != VAR_4 &&
  VAR_16 != VAR_6 &&
  VAR_16 != VAR_8 &&
  VAR_16 != VAR_5 &&
  VAR_16 != VAR_9)
  FUNC_4(VAR_3,
    (FUNC_5(VAR_2),
     FUNC_6("\"%s\" is not a table, view, materialized view, composite type, index, or foreign table",
      FUNC_2(VAR_14->relname))));




 if (!FUNC_9(VAR_13, FUNC_0()))
  FUNC_3(VAR_0, FUNC_8(FUNC_7(VAR_13)),
        FUNC_2(VAR_14->relname));
 if (!VAR_12 && FUNC_1(VAR_13, VAR_14))
  FUNC_4(VAR_3,
    (FUNC_5(VAR_1),
     FUNC_6("permission denied: \"%s\" is a system catalog",
      FUNC_2(VAR_14->relname))));
}
