
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int * VAR_12 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 char* FUNC_13 (char*) ;
 int FUNC_14 (int ,int,int) ;
 int VAR_15 ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 (int ,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 () ;
 int FUNC_22 (int ,scalar_t__) ;
 int FUNC_23 (char*) ;
 int FUNC_24 () ;
 int VAR_18 ;
 int FUNC_25 () ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int) ;
 int FUNC_28 (int ,int ) ;
 int FUNC_29 (int ,int ) ;
 int FUNC_30 (int ,int ) ;
 int FUNC_31 (int ,char*) ;
 int FUNC_32 () ;
 int FUNC_33 (int ,char*,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_34 (char*,char*) ;
 scalar_t__ FUNC_35 (char*,char*) ;
 int FUNC_36 (int ) ;

int FUNC_37(int VAR_21, char **VAR_22)
{
 int VAR_23, VAR_24;
 char *VAR_25;

 if (VAR_21 > 1 && FUNC_35(VAR_22[1], "-s") == 0) {

  FUNC_7(((void*)0));
  VAR_22++;
 }
 FUNC_5(VAR_22[1]);
 FUNC_6(((void*)0));

 VAR_25 = FUNC_13("NCONFIG_MODE");
 if (VAR_25) {
  if (!FUNC_34(VAR_25, "single_menu"))
   VAR_19 = 1;
 }


 FUNC_16();

 FUNC_25();

 FUNC_1();
 FUNC_21();
 FUNC_17(VAR_20, VAR_10);
 FUNC_8(0);

 FUNC_14(VAR_20, VAR_23, VAR_24);
 if (VAR_24 < 75 || VAR_23 < 20) {
  FUNC_11();
  FUNC_23("Your terminal should have at "
   "least 20 lines and 75 columns\n");
  return 1;
 }

 FUNC_22(VAR_20, VAR_1);



 VAR_0 = 1;



 VAR_13 = FUNC_20(VAR_14);
 FUNC_18(VAR_13, VAR_8);
 FUNC_19(VAR_13, VAR_9);
 FUNC_19(VAR_13, VAR_7);
 FUNC_19(VAR_13, VAR_6);
 FUNC_19(VAR_13, VAR_5);
 FUNC_31(VAR_13, " ");
 FUNC_29(VAR_13, VAR_11[VAR_3]);
 FUNC_28(VAR_13, VAR_11[VAR_2]);
 FUNC_30(VAR_13, VAR_11[VAR_4]);

 FUNC_26(FUNC_4());
 FUNC_32();


 if (FUNC_15(FUNC_0(1)) == VAR_1) {
  FUNC_33(VAR_16,
    "Instructions",
    VAR_17);
 }

 FUNC_7(VAR_12);

 while (!VAR_15) {
  FUNC_3(&VAR_18);
  if (!VAR_15 && FUNC_10() == 0)
   break;
 }

 FUNC_36(VAR_13);
 FUNC_12(VAR_13);
 FUNC_9(VAR_16);
 FUNC_2();
 FUNC_24();
 FUNC_11();
 return 0;
}
