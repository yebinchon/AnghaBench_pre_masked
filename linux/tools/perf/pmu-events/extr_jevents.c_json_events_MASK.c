
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct msrmap {char* pname; } ;
struct TYPE_11__ {scalar_t__ type; int size; } ;
typedef TYPE_1__ jsmntok_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,TYPE_1__*,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,char**,char*,char*,TYPE_1__*) ;
 char* FUNC_2 (int ,char*,TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,size_t,TYPE_1__*) ;
 scalar_t__ FUNC_7 (char*,TYPE_1__*,char*) ;
 struct msrmap* FUNC_8 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_9 (char*,TYPE_1__*,int,char**,TYPE_1__*) ;
 TYPE_1__* FUNC_10 (char const*,char**,size_t*,int*) ;
 char* FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,int,char*,unsigned long long) ;
 char* FUNC_13 (char const*) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,int *,int ) ;
 char FUNC_16 (char) ;
 int FUNC_17 (char const*,char*,char**,char**,char**,char**,char**,char**,char**,char**,char**,char**,char**,unsigned long long) ;
 int VAR_5 ;

int FUNC_18(const char *VAR_6,
   int (*VAR_7)(void *VAR_8, char *VAR_9, char *VAR_10, char *VAR_11,
        char *VAR_12,
        char *VAR_13, char *VAR_14, char *VAR_15,
        char *VAR_16,
        char *VAR_17, char *VAR_18),
   void *VAR_19)
{
 int VAR_20;
 size_t VAR_21;
 jsmntok_t *VAR_22, *VAR_23;
 int VAR_24, VAR_25, VAR_26;
 char *VAR_27;
 char VAR_28[128];

 if (!VAR_6)
  return -VAR_1;

 VAR_22 = FUNC_10(VAR_6, &VAR_27, &VAR_21, &VAR_26);
 if (!VAR_22)
  return -VAR_0;
 FUNC_0(VAR_22->type == VAR_2, VAR_22, "expected top level array");
 VAR_23 = VAR_22 + 1;
 for (VAR_24 = 0; VAR_24 < VAR_22->size; VAR_24++) {
  char *VAR_29 = ((void*)0), *VAR_30 = ((void*)0), *VAR_31 = ((void*)0);
  char *VAR_32 = ((void*)0);
  char *VAR_33 = ((void*)0);
  char *VAR_34 = ((void*)0);
  char *VAR_35 = ((void*)0);
  char *VAR_36 = ((void*)0);
  char *VAR_37 = ((void*)0);
  char *VAR_38 = ((void*)0);
  char *VAR_39 = ((void*)0);
  char *VAR_40 = ((void*)0);
  char *VAR_41 = ((void*)0);
  unsigned long long VAR_42 = 0;
  struct msrmap *VAR_43 = ((void*)0);
  jsmntok_t *VAR_44 = ((void*)0);
  jsmntok_t *VAR_45 = ((void*)0);
  jsmntok_t *VAR_46 = VAR_23++;

  FUNC_0(VAR_46->type == VAR_3, VAR_46, "expected object");
  for (VAR_25 = 0; VAR_25 < VAR_46->size; VAR_25 += 2) {
   jsmntok_t *VAR_47, *VAR_48;
   int VAR_49;
   char *VAR_50;

   VAR_47 = VAR_23 + VAR_25;
   FUNC_0(VAR_47->type == VAR_4, VAR_23 + VAR_25,
          "Expected field name");
   VAR_48 = VAR_23 + VAR_25 + 1;
   FUNC_0(VAR_48->type == VAR_4, VAR_23 + VAR_25 + 1,
          "Expected string value");

   VAR_49 = !FUNC_7(VAR_27, VAR_48, "0");
   if (FUNC_9(VAR_27, VAR_47, VAR_49, &VAR_29, VAR_48)) {

   } else if (FUNC_7(VAR_27, VAR_47, "EventCode")) {
    char *VAR_51 = ((void*)0);
    FUNC_1(VAR_27, &VAR_51, "", "", VAR_48);
    VAR_42 |= FUNC_15(VAR_51, ((void*)0), 0);
    FUNC_5(VAR_51);
   } else if (FUNC_7(VAR_27, VAR_47, "ExtSel")) {
    char *VAR_52 = ((void*)0);
    FUNC_1(VAR_27, &VAR_52, "", "", VAR_48);
    VAR_42 |= FUNC_15(VAR_52, ((void*)0), 0) << 21;
    FUNC_5(VAR_52);
   } else if (FUNC_7(VAR_27, VAR_47, "EventName")) {
    FUNC_1(VAR_27, &VAR_31, "", "", VAR_48);
   } else if (FUNC_7(VAR_27, VAR_47, "BriefDescription")) {
    FUNC_1(VAR_27, &VAR_30, "", "", VAR_48);
    FUNC_3(VAR_30);
   } else if (FUNC_7(VAR_27, VAR_47,
          "PublicDescription")) {
    FUNC_1(VAR_27, &VAR_32, "", "", VAR_48);
    FUNC_3(VAR_32);
   } else if (FUNC_7(VAR_27, VAR_47, "PEBS") && VAR_49) {
    VAR_45 = VAR_48;
   } else if (FUNC_7(VAR_27, VAR_47, "MSRIndex") && VAR_49) {
    VAR_43 = FUNC_8(VAR_27, VAR_48);
   } else if (FUNC_7(VAR_27, VAR_47, "MSRValue")) {
    VAR_44 = VAR_48;
   } else if (FUNC_7(VAR_27, VAR_47, "Errata") &&
       !FUNC_7(VAR_27, VAR_48, "null")) {
    FUNC_1(VAR_27, &VAR_33, ". ",
     " Spec update: ", VAR_48);
   } else if (FUNC_7(VAR_27, VAR_47, "Data_LA") && VAR_49) {
    FUNC_1(VAR_27, &VAR_33, ". ",
     " Supports address when precise",
     ((void*)0));
   } else if (FUNC_7(VAR_27, VAR_47, "Unit")) {
    const char *VAR_53;

    VAR_53 = FUNC_2(VAR_5, VAR_27, VAR_48);
    if (VAR_53) {
     VAR_34 = FUNC_13(VAR_53);
    } else {
     if (!VAR_34)
      VAR_34 = FUNC_13("uncore_");
     FUNC_1(VAR_27, &VAR_34, "", "", VAR_48);
     for (VAR_50 = VAR_34; *VAR_50; VAR_50++)
      *VAR_50 = FUNC_16(*VAR_50);
    }
    FUNC_1(VAR_27, &VAR_30, ". ", "Unit: ", ((void*)0));
    FUNC_1(VAR_27, &VAR_30, "", VAR_34, ((void*)0));
    FUNC_1(VAR_27, &VAR_30, "", " ", ((void*)0));
   } else if (FUNC_7(VAR_27, VAR_47, "Filter")) {
    FUNC_1(VAR_27, &VAR_35, "", "", VAR_48);
   } else if (FUNC_7(VAR_27, VAR_47, "ScaleUnit")) {
    FUNC_1(VAR_27, &VAR_37, "", "", VAR_48);
   } else if (FUNC_7(VAR_27, VAR_47, "PerPkg")) {
    FUNC_1(VAR_27, &VAR_36, "", "", VAR_48);
   } else if (FUNC_7(VAR_27, VAR_47, "MetricName")) {
    FUNC_1(VAR_27, &VAR_39, "", "", VAR_48);
   } else if (FUNC_7(VAR_27, VAR_47, "MetricGroup")) {
    FUNC_1(VAR_27, &VAR_40, "", "", VAR_48);
   } else if (FUNC_7(VAR_27, VAR_47, "MetricExpr")) {
    FUNC_1(VAR_27, &VAR_38, "", "", VAR_48);
    for (VAR_50 = VAR_38; *VAR_50; VAR_50++)
     *VAR_50 = FUNC_16(*VAR_50);
   } else if (FUNC_7(VAR_27, VAR_47, "ArchStdEvent")) {
    FUNC_1(VAR_27, &VAR_41, "", "", VAR_48);
    for (VAR_50 = VAR_41; *VAR_50; VAR_50++)
     *VAR_50 = FUNC_16(*VAR_50);
   }

  }
  if (VAR_45 && VAR_30 && !FUNC_14(VAR_30, "(Precise Event)")) {
   if (FUNC_7(VAR_27, VAR_45, "2"))
    FUNC_1(VAR_27, &VAR_33, " ",
      "(Must be precise)", ((void*)0));
   else
    FUNC_1(VAR_27, &VAR_33, " ",
      "(Precise event)", ((void*)0));
  }
  FUNC_12(VAR_28, sizeof VAR_28, "event=%#llx", VAR_42);
  FUNC_1(VAR_27, &VAR_29, ",", VAR_28, ((void*)0));
  if (VAR_30 && VAR_33)
   FUNC_1(VAR_27, &VAR_30, " ", VAR_33, ((void*)0));
  if (VAR_32 && VAR_33)
   FUNC_1(VAR_27, &VAR_32, " ", VAR_33, ((void*)0));
  if (VAR_35)
   FUNC_1(VAR_27, &VAR_29, ",", VAR_35, ((void*)0));
  if (VAR_43 != ((void*)0))
   FUNC_1(VAR_27, &VAR_29, ",", VAR_43->pname, VAR_44);
  if (VAR_31)
   FUNC_4(VAR_31);

  if (VAR_41) {




   VAR_20 = FUNC_17(VAR_6, VAR_41, &VAR_29, &VAR_30, &VAR_31,
     &VAR_32, &VAR_34, &VAR_35, &VAR_36,
     &VAR_37, &VAR_38, &VAR_39,
     &VAR_40, VAR_42);
   if (VAR_20)
    goto free_strings;
  }
  VAR_20 = VAR_7(VAR_19, VAR_31, FUNC_11(VAR_31, VAR_29), VAR_30, VAR_32,
      VAR_34, VAR_37, VAR_36, VAR_38, VAR_39, VAR_40);
free_strings:
  FUNC_5(VAR_29);
  FUNC_5(VAR_30);
  FUNC_5(VAR_31);
  FUNC_5(VAR_32);
  FUNC_5(VAR_33);
  FUNC_5(VAR_34);
  FUNC_5(VAR_35);
  FUNC_5(VAR_36);
  FUNC_5(VAR_37);
  FUNC_5(VAR_38);
  FUNC_5(VAR_39);
  FUNC_5(VAR_40);
  FUNC_5(VAR_41);

  if (VAR_20)
   break;
  VAR_23 += VAR_25;
 }
 FUNC_0(VAR_23 - VAR_22 == VAR_26, VAR_23, "unexpected objects at end");
 VAR_20 = 0;
out_free:
 FUNC_6(VAR_27, VAR_21, VAR_22);
 return VAR_20;
}
