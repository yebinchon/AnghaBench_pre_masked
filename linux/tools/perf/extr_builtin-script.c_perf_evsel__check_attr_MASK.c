
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_session {int evlist; int header; } ;
struct perf_event_attr {int sample_type; } ;
struct TYPE_2__ {struct perf_event_attr attr; } ;
struct evsel {TYPE_1__ core; } ;


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
 scalar_t__ FUNC_0 (int ) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct evsel*,int,char*,int) ;
 scalar_t__ FUNC_3 (struct evsel*,int,char*,int ,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct perf_session*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct evsel *VAR_43,
      struct perf_session *VAR_44)
{
 struct perf_event_attr *VAR_45 = &VAR_43->core.attr;
 bool VAR_46;

 if (FUNC_4(&VAR_44->header, VAR_7))
  return 0;

 VAR_46 = FUNC_4(&VAR_44->header,
            VAR_6);

 if (FUNC_0(VAR_40) &&
  !FUNC_5(VAR_44, "record -R"))
  return -VAR_5;

 if (FUNC_0(VAR_8)) {
  if (FUNC_2(VAR_43, VAR_25, "IP",
         VAR_13))
   return -VAR_5;
 }

 if (FUNC_0(VAR_0) &&
  FUNC_3(VAR_43, VAR_21, "ADDR",
        VAR_10, VAR_46))
  return -VAR_5;

 if (FUNC_0(VAR_3) &&
  FUNC_2(VAR_43, VAR_24, "DATA_SRC",
     VAR_12))
  return -VAR_5;

 if (FUNC_0(VAR_42) &&
  FUNC_2(VAR_43, VAR_31, "WEIGHT",
     VAR_20))
  return -VAR_5;

 if (FUNC_0(VAR_36) &&
  !(VAR_43->core.attr.sample_type & (VAR_25|VAR_21))) {
  FUNC_6("Display of symbols requested but neither sample IP nor "
      "sample address\navailable. Hence, no addresses to convert "
         "to symbols.\n");
  return -VAR_5;
 }
 if (FUNC_0(VAR_37) && !FUNC_0(VAR_36)) {
  FUNC_6("Display of offsets requested but symbol is not"
         "selected.\n");
  return -VAR_5;
 }
 if (FUNC_0(VAR_4) &&
  !(VAR_43->core.attr.sample_type & (VAR_25|VAR_21))) {
  FUNC_6("Display of DSO requested but no address to convert.\n");
  return -VAR_5;
 }
 if ((FUNC_0(VAR_35) || FUNC_0(VAR_34)) && !FUNC_0(VAR_8)) {
  FUNC_6("Display of source line number requested but sample IP is not\n"
         "selected. Hence, no address to lookup the source line number.\n");
  return -VAR_5;
 }
 if (FUNC_0(VAR_1) &&
     !(FUNC_1(VAR_44->evlist) &
       VAR_22)) {
  FUNC_6("Display of branch stack assembler requested, but non all-branch filter set\n"
         "Hint: run 'perf record -b ...'\n");
  return -VAR_5;
 }
 if ((FUNC_0(VAR_33) || FUNC_0(VAR_38)) &&
  FUNC_2(VAR_43, VAR_29, "TID",
     VAR_17|VAR_16))
  return -VAR_5;

 if (FUNC_0(VAR_39) &&
  FUNC_2(VAR_43, VAR_30, "TIME",
     VAR_18))
  return -VAR_5;

 if (FUNC_0(VAR_2) &&
  FUNC_3(VAR_43, VAR_23, "CPU",
        VAR_11, VAR_46))
  return -VAR_5;

 if (FUNC_0(VAR_9) &&
  FUNC_2(VAR_43, VAR_27, "IREGS",
     VAR_14))
  return -VAR_5;

 if (FUNC_0(VAR_41) &&
  FUNC_2(VAR_43, VAR_28, "UREGS",
     VAR_19))
  return -VAR_5;

 if (FUNC_0(VAR_32) &&
  FUNC_2(VAR_43, VAR_26, "PHYS_ADDR",
     VAR_15))
  return -VAR_5;

 return 0;
}
