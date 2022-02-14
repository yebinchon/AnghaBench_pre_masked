
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int *,int *,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (char*,char*,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_2 (char*,char*,int *,int *,int,int,int ,int ,int ,int *,int *,int *) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 () ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;

void
FUNC_7(void)
{
 if (!VAR_29)
  return;




 FUNC_2("pg_stat_statements.max",
       "Sets the maximum number of statements tracked by pg_stat_statements.",
       ((void*)0),
       &VAR_15,
       5000,
       100,
       VAR_4,
       VAR_5,
       0,
       ((void*)0),
       ((void*)0),
       ((void*)0));

 FUNC_1("pg_stat_statements.track",
        "Selects which statements are tracked by pg_stat_statements.",
        ((void*)0),
        &VAR_19,
        VAR_8,
        VAR_31,
        VAR_7,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_0("pg_stat_statements.track_utility",
        "Selects whether utility commands are tracked by pg_stat_statements.",
        ((void*)0),
        &VAR_20,
        1,
        VAR_7,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_0("pg_stat_statements.save",
        "Save pg_stat_statements statistics across server shutdowns.",
        ((void*)0),
        &VAR_17,
        1,
        VAR_6,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_3("pg_stat_statements");






 FUNC_4(FUNC_6());
 FUNC_5("pg_stat_statements", 1);




 VAR_28 = VAR_30;
 VAR_30 = VAR_18;
 VAR_27 = VAR_21;
 VAR_21 = VAR_16;
 VAR_25 = VAR_3;
 VAR_3 = VAR_13;
 VAR_24 = VAR_2;
 VAR_2 = VAR_12;
 VAR_23 = VAR_1;
 VAR_1 = VAR_11;
 VAR_22 = VAR_0;
 VAR_0 = VAR_10;
 VAR_26 = VAR_9;
 VAR_9 = VAR_14;
}
