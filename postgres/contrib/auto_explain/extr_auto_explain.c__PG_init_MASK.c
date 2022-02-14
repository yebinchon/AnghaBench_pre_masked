
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*,int *,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (char*,char*,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_2 (char*,char*,char*,int *,int,int,int ,int ,int ,int *,int *,int *) ;
 int FUNC_3 (char*,char*,int *,int *,double,double,double,int ,int ,int *,int *,int *) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
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

void
FUNC_5(void)
{

 FUNC_2("auto_explain.log_min_duration",
       "Sets the minimum execution time above which plans will be logged.",
       "Zero prints all plans. -1 turns this feature off.",
       &VAR_13,
       -1,
       -1, VAR_6,
       VAR_8,
       VAR_5,
       ((void*)0),
       ((void*)0),
       ((void*)0));

 FUNC_0("auto_explain.log_analyze",
        "Use EXPLAIN ANALYZE for plan logging.",
        ((void*)0),
        &VAR_9,
        0,
        VAR_8,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_0("auto_explain.log_settings",
        "Log modified configuration parameters affecting query planning.",
        ((void*)0),
        &VAR_15,
        0,
        VAR_8,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_0("auto_explain.log_verbose",
        "Use EXPLAIN VERBOSE for plan logging.",
        ((void*)0),
        &VAR_18,
        0,
        VAR_8,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_0("auto_explain.log_buffers",
        "Log buffers usage.",
        ((void*)0),
        &VAR_10,
        0,
        VAR_8,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_0("auto_explain.log_triggers",
        "Include trigger statistics in plans.",
        "This has no effect unless log_analyze is also set.",
        &VAR_17,
        0,
        VAR_8,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_1("auto_explain.log_format",
        "EXPLAIN format to be used for plan logging.",
        ((void*)0),
        &VAR_11,
        VAR_0,
        VAR_24,
        VAR_8,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_1("auto_explain.log_level",
        "Log level for the plan.",
        ((void*)0),
        &VAR_12,
        VAR_7,
        VAR_25,
        VAR_8,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_0("auto_explain.log_nested_statements",
        "Log nested statements.",
        ((void*)0),
        &VAR_14,
        0,
        VAR_8,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_0("auto_explain.log_timing",
        "Collect timing data, not just row counts.",
        ((void*)0),
        &VAR_16,
        1,
        VAR_8,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_3("auto_explain.sample_rate",
        "Fraction of queries to process.",
        ((void*)0),
        &VAR_19,
        1.0,
        0.0,
        1.0,
        VAR_8,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_4("auto_explain");


 VAR_29 = VAR_4;
 VAR_4 = VAR_23;
 VAR_28 = VAR_3;
 VAR_3 = VAR_22;
 VAR_27 = VAR_2;
 VAR_2 = VAR_21;
 VAR_26 = VAR_1;
 VAR_1 = VAR_20;
}
