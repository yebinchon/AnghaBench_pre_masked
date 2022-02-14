
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int type; int config; } ;
typedef unsigned long pid_t ;
typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (unsigned long,char*,unsigned long) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
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
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int *,char*,int,int ,int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_5 (char*) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_6 (char*,int,char*,char*,int,int ,int) ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;

__attribute__((used)) static int FUNC_7(struct perf_event_attr *VAR_45, pid_t VAR_46, int VAR_47,
         int VAR_48, int VAR_49, unsigned long VAR_50)
{
 FILE *VAR_51;
 char VAR_52[VAR_0];

 if (!VAR_32)
  return 0;

 FUNC_6(VAR_52, VAR_0, "%s/event-%d-%llu-%d", VAR_10,
   VAR_45->type, VAR_45->config, VAR_48);

 VAR_51 = FUNC_3(VAR_52, "w+");
 if (!VAR_51) {
  FUNC_5("test attr - failed to open event file");
  return -1;
 }

 if (FUNC_4(VAR_51, "[event-%d-%llu-%d]\n",
      VAR_45->type, VAR_45->config, VAR_48) < 0) {
  FUNC_5("test attr - failed to write event file");
  FUNC_2(VAR_51);
  return -1;
 }


 FUNC_1(VAR_48, "d", VAR_48);
 FUNC_1(VAR_49, "d", VAR_49);
 FUNC_1(VAR_47, "d", VAR_47);
 FUNC_1(VAR_46, "d", VAR_46);
 FUNC_1(VAR_50, "lu", VAR_50);


 FUNC_0(VAR_40, VAR_1);
 FUNC_0(VAR_38, VAR_1);
 FUNC_0(VAR_6, "llu");
 FUNC_0(VAR_34, "llu");
 FUNC_0(VAR_37, "llu");
 FUNC_0(VAR_31, "llu");
 FUNC_0(VAR_11, "d");
 FUNC_0(VAR_23, "d");
 FUNC_0(VAR_29, "d");
 FUNC_0(VAR_21, "d");
 FUNC_0(VAR_20, "d");
 FUNC_0(VAR_19, "d");
 FUNC_0(VAR_17, "d");
 FUNC_0(VAR_18, "d");
 FUNC_0(VAR_25, "d");
 FUNC_0(VAR_4, "d");
 FUNC_0(VAR_22, "d");
 FUNC_0(VAR_24, "d");
 FUNC_0(VAR_12, "d");
 FUNC_0(VAR_39, "d");
 FUNC_0(VAR_43, "d");
 FUNC_0(VAR_30, "d");
 FUNC_0(VAR_27, "d");
 FUNC_0(VAR_33, "d");
 FUNC_0(VAR_16, "d");
 FUNC_0(VAR_15, "d");
 FUNC_0(VAR_13, "d");
 FUNC_0(VAR_14, "d");
 FUNC_0(VAR_26, "d");
 FUNC_0(VAR_5, "d");
 FUNC_0(VAR_9, "d");
 FUNC_0(VAR_44, "d");
 FUNC_0(VAR_28, "d");
 FUNC_0(VAR_41, "d");
 FUNC_0(VAR_42, VAR_1);
 FUNC_0(VAR_2, VAR_1);
 FUNC_0(VAR_7, "llu");
 FUNC_0(VAR_8, "llu");
 FUNC_0(VAR_3, "llu");
 FUNC_0(VAR_35, "llu");
 FUNC_0(VAR_36, VAR_1);

 FUNC_2(VAR_51);
 return 0;
}
