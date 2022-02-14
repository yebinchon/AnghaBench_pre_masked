
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* optname; void* offset; void* opttype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (int ,char*,char*,int,int ) ;
 int FUNC_1 (int ,char*,char*,int ,int ,char*,int ) ;
 int FUNC_2 (int ,char*,char*,int,int,int,int ) ;
 int FUNC_3 (int ,char*,char*,double,int,int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,char*,char*,int *,int ) ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 void* FUNC_6 (int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static void
FUNC_7(void)
{
 VAR_8 = FUNC_4();

 FUNC_2(VAR_8, "option_int",
       "Integer option for dummy_index_am",
       10, -10, 100, VAR_0);
 VAR_9[0].optname = "option_int";
 VAR_9[0].opttype = VAR_5;
 VAR_9[0].offset = FUNC_6(VAR_2, VAR_13);

 FUNC_3(VAR_8, "option_real",
        "Real option for dummy_index_am",
        3.1415, -10, 100, VAR_0);
 VAR_9[1].optname = "option_real";
 VAR_9[1].opttype = VAR_6;
 VAR_9[1].offset = FUNC_6(VAR_2, VAR_14);

 FUNC_0(VAR_8, "option_bool",
        "Boolean option for dummy_index_am",
        1, VAR_0);
 VAR_9[2].optname = "option_bool";
 VAR_9[2].opttype = VAR_3;
 VAR_9[2].offset = FUNC_6(VAR_2, VAR_11);

 FUNC_1(VAR_8, "option_enum",
        "Enum option for dummy_index_am",
        VAR_10,
        VAR_1,
        "Valid values are \"one\" and \"two\".",
        VAR_0);
 VAR_9[3].optname = "option_enum";
 VAR_9[3].opttype = VAR_4;
 VAR_9[3].offset = FUNC_6(VAR_2, VAR_12);

 FUNC_5(VAR_8, "option_string_val",
       "String option for dummy_index_am with non-NULL default",
       "DefaultValue", &VAR_17,
       VAR_0);
 VAR_9[4].optname = "option_string_val";
 VAR_9[4].opttype = VAR_7;
 VAR_9[4].offset = FUNC_6(VAR_2,
            VAR_16);





 FUNC_5(VAR_8, "option_string_null",
       ((void*)0),
       ((void*)0), &VAR_17,
       VAR_0);
 VAR_9[5].optname = "option_string_null";
 VAR_9[5].opttype = VAR_7;
 VAR_9[5].offset = FUNC_6(VAR_2,
            VAR_15);
}
