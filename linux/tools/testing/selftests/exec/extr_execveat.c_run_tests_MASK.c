
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (int,char*,int) ;
 scalar_t__ FUNC_1 (int,char*,int,int ) ;
 scalar_t__ FUNC_2 (int,char*,int) ;
 char* FUNC_3 (char*,char*) ;
 scalar_t__ VAR_16 ;
 int FUNC_4 (int,int *,int *,int *,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,int,int ) ;
 int FUNC_7 (char*,int) ;
 char* FUNC_8 (char*,int *) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(void)
{
 int VAR_17 = 0;
 char *VAR_18 = FUNC_8("execveat", ((void*)0));
 char *VAR_19 = FUNC_8("script", ((void*)0));
 char *VAR_20 = FUNC_3(VAR_18, ".symlink");
 int VAR_21 = FUNC_7("subdir", VAR_12|VAR_14);
 int VAR_22 = FUNC_7("subdir.ephemeral",
            VAR_12|VAR_14);
 int VAR_23 = FUNC_7(".", VAR_12|VAR_14);
 int VAR_24 = FUNC_7("/", VAR_12|VAR_14);
 int VAR_25 = FUNC_7(".", VAR_12|VAR_14|VAR_13);
 int VAR_26 = FUNC_7(".", VAR_12|VAR_14|VAR_11);
 int VAR_27 = FUNC_7("execveat", VAR_14);
 int VAR_28 = FUNC_7("execveat", VAR_14|VAR_13);
 int VAR_29 = FUNC_7("execveat.symlink", VAR_14);
 int VAR_30 = FUNC_7("execveat.denatured", VAR_14);
 int VAR_31 = FUNC_7("execveat.denatured",
         VAR_14|VAR_13);
 int VAR_32 = FUNC_7("script", VAR_14);
 int VAR_33 = FUNC_7("execveat.ephemeral", VAR_14);
 int VAR_34 = FUNC_7("execveat.path.ephemeral",
         VAR_14|VAR_13);
 int VAR_35 = FUNC_7("script.ephemeral", VAR_14);
 int VAR_36 = FUNC_7("execveat", VAR_14|VAR_11);
 int VAR_37 = FUNC_7("script", VAR_14|VAR_11);


 VAR_16 = 0;
 FUNC_4(-1, ((void*)0), ((void*)0), ((void*)0), 0);
 if (VAR_16 == VAR_9) {
  FUNC_5(
   "ENOSYS calling execveat - no kernel support?\n");
 }


 FUNC_6(VAR_27, 10, VAR_15);



 VAR_17 += FUNC_0(VAR_21, "../execveat", 0);
 VAR_17 += FUNC_0(VAR_23, "execveat", 0);
 VAR_17 += FUNC_0(VAR_25, "execveat", 0);

 VAR_17 += FUNC_0(VAR_1, VAR_18, 0);

 VAR_17 += FUNC_0(99, VAR_18, 0);

 VAR_17 += FUNC_0(VAR_27, "", VAR_0);

 VAR_17 += FUNC_0(VAR_36, "", VAR_0);

 VAR_17 += FUNC_0(VAR_28, "", VAR_0);



 FUNC_9("execveat.ephemeral", "execveat.moved");
 VAR_17 += FUNC_0(VAR_33, "", VAR_0);

 FUNC_10("execveat.moved");
 VAR_17 += FUNC_0(VAR_33, "", VAR_0);



 FUNC_10("execveat.path.ephemeral");
 VAR_17 += FUNC_0(VAR_34, "", VAR_0);


 VAR_17 += FUNC_1(VAR_27, "", 0, VAR_8);
 VAR_17 += FUNC_1(VAR_27, ((void*)0), VAR_0, VAR_5);



 VAR_17 += FUNC_0(VAR_23, "execveat.symlink", 0);
 VAR_17 += FUNC_0(VAR_25, "execveat.symlink", 0);

 VAR_17 += FUNC_0(VAR_1, VAR_20, 0);

 VAR_17 += FUNC_0(VAR_29, "", VAR_0);
 VAR_17 += FUNC_0(VAR_29, "",
          VAR_0|VAR_2);



 VAR_17 += FUNC_1(VAR_23, "execveat.symlink",
        VAR_2, VAR_7);
 VAR_17 += FUNC_1(VAR_25, "execveat.symlink",
        VAR_2, VAR_7);

 VAR_17 += FUNC_1(VAR_1, VAR_20,
        VAR_2, VAR_7);



 VAR_17 += FUNC_0(VAR_21, "../script", 0);
 VAR_17 += FUNC_0(VAR_23, "script", 0);
 VAR_17 += FUNC_0(VAR_25, "script", 0);

 VAR_17 += FUNC_0(VAR_1, VAR_19, 0);

 VAR_17 += FUNC_0(VAR_32, "", VAR_0);
 VAR_17 += FUNC_0(VAR_32, "",
          VAR_0|VAR_2);

 VAR_17 += FUNC_1(VAR_37, "", VAR_0,
        VAR_8);
 VAR_17 += FUNC_1(VAR_26, "script", 0, VAR_8);



 FUNC_9("script.ephemeral", "script.moved");
 VAR_17 += FUNC_0(VAR_35, "", VAR_0);

 FUNC_10("script.moved");
 VAR_17 += FUNC_0(VAR_35, "", VAR_0);


 FUNC_9("subdir.ephemeral", "subdir.moved");
 VAR_17 += FUNC_0(VAR_22, "../script", 0);
 VAR_17 += FUNC_0(VAR_22, "script", 0);

 FUNC_10("subdir.moved/script");
 FUNC_10("subdir.moved");

 VAR_17 += FUNC_0(VAR_22, "../script", 0);
 VAR_17 += FUNC_1(VAR_22, "script", 0, VAR_8);


 VAR_17 += FUNC_1(VAR_23, "execveat", 0xFFFF, VAR_6);

 VAR_17 += FUNC_1(VAR_23, "no-such-file", 0, VAR_8);
 VAR_17 += FUNC_1(VAR_25, "no-such-file", 0, VAR_8);
 VAR_17 += FUNC_1(VAR_1, "no-such-file", 0, VAR_8);

 VAR_17 += FUNC_1(VAR_23, "", VAR_0, VAR_3);

 VAR_17 += FUNC_1(VAR_23, "Makefile", 0, VAR_3);
 VAR_17 += FUNC_1(VAR_30, "", VAR_0, VAR_3);
 VAR_17 += FUNC_1(VAR_31, "", VAR_0,
        VAR_3);

 VAR_17 += FUNC_1(99, "", VAR_0, VAR_4);
 VAR_17 += FUNC_1(99, "execveat", 0, VAR_4);

 VAR_17 += FUNC_1(VAR_27, "execveat", 0, VAR_10);

 VAR_17 += FUNC_2(VAR_24, "execveat", 0);
 VAR_17 += FUNC_2(VAR_24, "script", 1);
 return VAR_17;
}
