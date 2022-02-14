
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_1__ ;


typedef int TypeInfo ;
typedef int TableInfo ;
struct TYPE_42__ {int dopt; } ;
typedef int OprInfo ;
typedef int NamespaceInfo ;
typedef int InhInfo ;
typedef int FuncInfo ;
typedef int ExtensionInfo ;
typedef int CollInfo ;
typedef TYPE_1__ Archive ;


 void* FUNC_0 (int *,int,int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (TYPE_1__*,int *,int,int *,int) ;
 void* VAR_2 ;
 int FUNC_4 (TYPE_1__*,int*) ;
 int FUNC_5 (TYPE_1__*,int*) ;
 int FUNC_6 (TYPE_1__*,int*) ;
 int * FUNC_7 (TYPE_1__*,int*) ;
 int FUNC_8 (TYPE_1__*,int *,int) ;
 int FUNC_9 (TYPE_1__*,int*) ;
 int FUNC_10 (TYPE_1__*,int*) ;
 int FUNC_11 (TYPE_1__*,int*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int *,int) ;
 int * FUNC_14 (TYPE_1__*,int*) ;
 int FUNC_15 (TYPE_1__*,int*) ;
 int FUNC_16 (TYPE_1__*,int*) ;
 int * FUNC_17 (TYPE_1__*,int*) ;
 int FUNC_18 (TYPE_1__*,int *,int) ;
 int * FUNC_19 (TYPE_1__*,int*) ;
 int * FUNC_20 (TYPE_1__*,int*) ;
 int FUNC_21 (TYPE_1__*,int*) ;
 int * FUNC_22 (TYPE_1__*,int*) ;
 int FUNC_23 (TYPE_1__*,int*) ;
 int FUNC_24 (TYPE_1__*,int *,int) ;
 int FUNC_25 (TYPE_1__*,int *,int) ;
 int FUNC_26 (TYPE_1__*,int*) ;
 int FUNC_27 (TYPE_1__*,int *,int) ;
 int FUNC_28 (TYPE_1__*) ;
 int FUNC_29 (TYPE_1__*,int*) ;
 int FUNC_30 (TYPE_1__*) ;
 int FUNC_31 (TYPE_1__*,int*) ;
 int FUNC_32 (TYPE_1__*,int*) ;
 int FUNC_33 (TYPE_1__*,int*) ;
 int FUNC_34 (TYPE_1__*,int*) ;
 int FUNC_35 (TYPE_1__*,int *,int) ;
 int * FUNC_36 (TYPE_1__*,int*) ;
 int FUNC_37 (TYPE_1__*,int*) ;
 int FUNC_38 (TYPE_1__*,int *,int) ;
 int * FUNC_39 (TYPE_1__*,int*) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int FUNC_40 (char*) ;
 int FUNC_41 (TYPE_1__*,int *,int) ;
 void* VAR_12 ;
 void* VAR_13 ;

TableInfo *
FUNC_42(Archive *VAR_14, int *VAR_15)
{
 TableInfo *VAR_16;
 TypeInfo *VAR_17;
 FuncInfo *VAR_18;
 OprInfo *VAR_19;
 CollInfo *VAR_20;
 NamespaceInfo *VAR_21;
 ExtensionInfo *VAR_22;
 InhInfo *VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 int VAR_28;
 int VAR_29;
 int VAR_30;
 int VAR_31;
 int VAR_32;
 int VAR_33;
 int VAR_34;
 int VAR_35;
 int VAR_36;
 int VAR_37;
 int VAR_38;
 int VAR_39;
 int VAR_40;
 int VAR_41;






 FUNC_40("reading extensions");
 VAR_22 = FUNC_14(VAR_14, &VAR_5);
 VAR_1 = FUNC_0(VAR_22, VAR_5, sizeof(ExtensionInfo));

 FUNC_40("identifying extension members");
 FUNC_13(VAR_14, VAR_22, VAR_5);

 FUNC_40("reading schemas");
 VAR_21 = FUNC_20(VAR_14, &VAR_7);
 VAR_3 = FUNC_0(VAR_21, VAR_7, sizeof(NamespaceInfo));







 FUNC_40("reading user-defined tables");
 VAR_16 = FUNC_36(VAR_14, &VAR_9);
 VAR_12 = FUNC_0(VAR_16, VAR_9, sizeof(TableInfo));


 FUNC_24(VAR_14, VAR_16, VAR_9);

 FUNC_40("reading user-defined functions");
 VAR_18 = FUNC_17(VAR_14, &VAR_6);
 VAR_2 = FUNC_0(VAR_18, VAR_6, sizeof(FuncInfo));


 FUNC_40("reading user-defined types");
 VAR_17 = FUNC_39(VAR_14, &VAR_10);
 VAR_13 = FUNC_0(VAR_17, VAR_10, sizeof(TypeInfo));


 FUNC_40("reading procedural languages");
 FUNC_26(VAR_14, &VAR_27);

 FUNC_40("reading user-defined aggregate functions");
 FUNC_5(VAR_14, &VAR_24);

 FUNC_40("reading user-defined operators");
 VAR_19 = FUNC_22(VAR_14, &VAR_8);
 VAR_11 = FUNC_0(VAR_19, VAR_8, sizeof(OprInfo));

 FUNC_40("reading user-defined access methods");
 FUNC_4(VAR_14, &VAR_30);

 FUNC_40("reading user-defined operator classes");
 FUNC_21(VAR_14, &VAR_31);

 FUNC_40("reading user-defined operator families");
 FUNC_23(VAR_14, &VAR_32);

 FUNC_40("reading user-defined text search parsers");
 FUNC_33(VAR_14, &VAR_34);

 FUNC_40("reading user-defined text search templates");
 FUNC_34(VAR_14, &VAR_35);

 FUNC_40("reading user-defined text search dictionaries");
 FUNC_32(VAR_14, &VAR_36);

 FUNC_40("reading user-defined text search configurations");
 FUNC_31(VAR_14, &VAR_37);

 FUNC_40("reading user-defined foreign-data wrappers");
 FUNC_15(VAR_14, &VAR_38);

 FUNC_40("reading user-defined foreign servers");
 FUNC_16(VAR_14, &VAR_39);

 FUNC_40("reading default privileges");
 FUNC_10(VAR_14, &VAR_40);

 FUNC_40("reading user-defined collations");
 VAR_20 = FUNC_7(VAR_14, &VAR_4);
 VAR_0 = FUNC_0(VAR_20, VAR_4, sizeof(CollInfo));

 FUNC_40("reading user-defined conversions");
 FUNC_9(VAR_14, &VAR_33);

 FUNC_40("reading type casts");
 FUNC_6(VAR_14, &VAR_28);

 FUNC_40("reading transforms");
 FUNC_37(VAR_14, &VAR_29);

 FUNC_40("reading table inheritance information");
 VAR_23 = FUNC_19(VAR_14, &VAR_25);

 FUNC_40("reading event triggers");
 FUNC_11(VAR_14, &VAR_41);


 FUNC_40("finding extension tables");
 FUNC_41(VAR_14, VAR_22, VAR_5);


 FUNC_40("finding inheritance relationships");
 FUNC_3(VAR_14, VAR_16, VAR_9, VAR_23, VAR_25);

 FUNC_40("reading column info for interesting tables");
 FUNC_35(VAR_14, VAR_16, VAR_9);

 FUNC_40("flagging inherited columns in subtables");
 FUNC_1(VAR_14->dopt, VAR_16, VAR_9);

 FUNC_40("reading indexes");
 FUNC_18(VAR_14, VAR_16, VAR_9);

 FUNC_40("flagging indexes in partitioned tables");
 FUNC_2(VAR_14, VAR_16, VAR_9);

 FUNC_40("reading extended statistics");
 FUNC_12(VAR_14);

 FUNC_40("reading constraints");
 FUNC_8(VAR_14, VAR_16, VAR_9);

 FUNC_40("reading triggers");
 FUNC_38(VAR_14, VAR_16, VAR_9);

 FUNC_40("reading rewrite rules");
 FUNC_29(VAR_14, &VAR_26);

 FUNC_40("reading policies");
 FUNC_25(VAR_14, VAR_16, VAR_9);

 FUNC_40("reading publications");
 FUNC_28(VAR_14);

 FUNC_40("reading publication membership");
 FUNC_27(VAR_14, VAR_16, VAR_9);

 FUNC_40("reading subscriptions");
 FUNC_30(VAR_14);

 *VAR_15 = VAR_9;
 return VAR_16;
}
