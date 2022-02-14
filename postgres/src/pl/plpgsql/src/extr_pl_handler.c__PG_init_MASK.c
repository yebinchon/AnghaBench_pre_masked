
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PLpgSQL_plugin ;


 int FUNC_0 (char*,int ,int *,int *,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (char*,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_2 (char*,int ,int *,int *,char*,int ,int ,int ,int ,int *) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int ** VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

void
FUNC_10(void)
{

 static bool VAR_17 = 0;

 if (VAR_17)
  return;

 FUNC_8(VAR_4);

 FUNC_1("plpgsql.variable_conflict",
        FUNC_7("Sets handling of conflicts between PL/pgSQL variable names and table column names."),
        ((void*)0),
        &VAR_14,
        VAR_3,
        VAR_16,
        VAR_1, 0,
        ((void*)0), ((void*)0), ((void*)0));

 FUNC_0("plpgsql.print_strict_params",
        FUNC_7("Print information about parameters in the DETAIL part of the error messages generated on INTO ... STRICT failures."),
        ((void*)0),
        &VAR_12,
        0,
        VAR_2, 0,
        ((void*)0), ((void*)0), ((void*)0));

 FUNC_0("plpgsql.check_asserts",
        FUNC_7("Perform checks given in ASSERT statements."),
        ((void*)0),
        &VAR_5,
        1,
        VAR_2, 0,
        ((void*)0), ((void*)0), ((void*)0));

 FUNC_2("plpgsql.extra_warnings",
          FUNC_7("List of programming constructs that should produce a warning."),
          ((void*)0),
          &VAR_10,
          "none",
          VAR_2, VAR_0,
          VAR_6,
          VAR_9,
          ((void*)0));

 FUNC_2("plpgsql.extra_errors",
          FUNC_7("List of programming constructs that should produce an error."),
          ((void*)0),
          &VAR_8,
          "none",
          VAR_2, VAR_0,
          VAR_6,
          VAR_7,
          ((void*)0));

 FUNC_3("plpgsql");

 FUNC_9();
 FUNC_5(VAR_15, ((void*)0));
 FUNC_4(VAR_13, ((void*)0));


 VAR_11 = (PLpgSQL_plugin **) FUNC_6("PLpgSQL_plugin");

 VAR_17 = 1;
}
