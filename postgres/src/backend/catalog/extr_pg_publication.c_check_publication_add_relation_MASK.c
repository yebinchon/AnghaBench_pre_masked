
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ relkind; } ;
typedef int Relation ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static void
FUNC_9(Relation VAR_5)
{

 if (FUNC_1(VAR_5)->relkind == VAR_3)
  FUNC_4(VAR_2,
    (FUNC_5(VAR_0),
     FUNC_8("\"%s\" is a partitioned table",
      FUNC_2(VAR_5)),
     FUNC_6("Adding partitioned tables to publications is not supported."),
     FUNC_7("You can add the table partitions individually.")));


 if (FUNC_1(VAR_5)->relkind != VAR_4)
  FUNC_4(VAR_2,
    (FUNC_5(VAR_1),
     FUNC_8("\"%s\" is not a table",
      FUNC_2(VAR_5)),
     FUNC_6("Only tables can be added to publications.")));


 if (FUNC_0(VAR_5))
  FUNC_4(VAR_2,
    (FUNC_5(VAR_1),
     FUNC_8("\"%s\" is a system table",
      FUNC_2(VAR_5)),
     FUNC_6("System tables cannot be added to publications.")));


 if (!FUNC_3(VAR_5))
  FUNC_4(VAR_2,
    (FUNC_5(VAR_1),
     FUNC_8("table \"%s\" cannot be replicated",
      FUNC_2(VAR_5)),
     FUNC_6("Temporary and unlogged relations cannot be replicated.")));
}
