
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
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
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;

__attribute__((used)) static void FUNC_4(void)
{
 FUNC_3("  --------------------------------------------------------------------------\n");
 FUNC_3("  | Wound/wait tests |\n");
 FUNC_3("  ---------------------\n");

 FUNC_2("ww api failures");
 FUNC_0(VAR_24, VAR_2, VAR_1);
 FUNC_0(VAR_25, VAR_2, VAR_1);
 FUNC_0(VAR_37, VAR_0, VAR_1);
 FUNC_1("\n");

 FUNC_2("ww contexts mixing");
 FUNC_0(VAR_36, VAR_0, VAR_1);
 FUNC_0(VAR_13, VAR_0, VAR_1);
 FUNC_1("\n");

 FUNC_2("finishing ww context");
 FUNC_0(VAR_8, VAR_0, VAR_1);
 FUNC_0(VAR_12, VAR_0, VAR_1);
 FUNC_0(VAR_9, VAR_0, VAR_1);
 FUNC_0(VAR_10, VAR_0, VAR_1);
 FUNC_1("\n");

 FUNC_2("locking mismatches");
 FUNC_0(VAR_28, VAR_0, VAR_1);
 FUNC_0(VAR_27, VAR_0, VAR_1);
 FUNC_0(VAR_26, VAR_0, VAR_1);
 FUNC_1("\n");

 FUNC_2("EDEADLK handling");
 FUNC_0(VAR_22, VAR_2, VAR_1);
 FUNC_0(VAR_23, VAR_2, VAR_1);
 FUNC_0(VAR_20, VAR_0, VAR_1);
 FUNC_0(VAR_21, VAR_0, VAR_1);
 FUNC_0(VAR_14, VAR_0, VAR_1);
 FUNC_0(VAR_17, VAR_0, VAR_1);
 FUNC_0(VAR_15, VAR_0, VAR_1);
 FUNC_0(VAR_16, VAR_0, VAR_1);
 FUNC_0(VAR_18, VAR_0, VAR_1);
 FUNC_0(VAR_19, VAR_0, VAR_1);
 FUNC_1("\n");

 FUNC_2("spinlock nest unlocked");
 FUNC_0(VAR_31, VAR_0, VAR_1);
 FUNC_1("\n");

 FUNC_3("  -----------------------------------------------------\n");
 FUNC_3("                                 |block | try  |context|\n");
 FUNC_3("  -----------------------------------------------------\n");

 FUNC_2("context");
 FUNC_0(VAR_6, VAR_0, VAR_1);
 FUNC_0(VAR_11, VAR_2, VAR_1);
 FUNC_0(VAR_7, VAR_2, VAR_1);
 FUNC_1("\n");

 FUNC_2("try");
 FUNC_0(VAR_33, VAR_0, VAR_1);
 FUNC_0(VAR_35, VAR_2, VAR_1);
 FUNC_0(VAR_34, VAR_0, VAR_1);
 FUNC_1("\n");

 FUNC_2("block");
 FUNC_0(VAR_3, VAR_0, VAR_1);
 FUNC_0(VAR_5, VAR_2, VAR_1);
 FUNC_0(VAR_4, VAR_0, VAR_1);
 FUNC_1("\n");

 FUNC_2("spinlock");
 FUNC_0(VAR_29, VAR_0, VAR_1);
 FUNC_0(VAR_32, VAR_2, VAR_1);
 FUNC_0(VAR_30, VAR_0, VAR_1);
 FUNC_1("\n");
}
