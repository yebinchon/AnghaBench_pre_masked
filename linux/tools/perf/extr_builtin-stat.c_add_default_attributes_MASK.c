
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct perf_event_attr {int config; int type; } ;
struct parse_events_error {int dummy; } ;
struct option {TYPE_3__** value; } ;
struct TYPE_6__ {int nr_entries; } ;
struct TYPE_8__ {TYPE_1__ core; } ;
struct TYPE_7__ {int metric_only; scalar_t__ aggr_mode; int metric_events; scalar_t__ null_run; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_0 (int*) ;
 int FUNC_1 () ;
 int VAR_26 ;
 TYPE_3__* VAR_27 ;
 int VAR_28 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (struct option*,char*,int *) ;
 scalar_t__ VAR_29 ;
 int FUNC_6 (TYPE_3__*,char*,struct parse_events_error*) ;
 int FUNC_7 (struct parse_events_error*,char*) ;
 int FUNC_8 (TYPE_3__*,struct perf_event_attr*) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;
 scalar_t__ VAR_30 ;
 char* VAR_31 ;
 int VAR_32 ;
 TYPE_2__ VAR_33 ;
 int VAR_34 ;
 scalar_t__ FUNC_11 (int ,int*) ;
 scalar_t__ FUNC_12 (int ,int) ;
 int VAR_35 ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__* VAR_36 ;
 scalar_t__ FUNC_14 (scalar_t__*,char**,int ) ;
 scalar_t__ VAR_37 ;
 char* VAR_38 ;
 char* VAR_39 ;
 scalar_t__ VAR_40 ;

__attribute__((used)) static int FUNC_15(void)
{
 int VAR_41;
 struct perf_event_attr VAR_42[] = {

  { .type = VAR_25, .config = VAR_22 },
  { .type = VAR_25, .config = VAR_18 },
  { .type = VAR_25, .config = VAR_20 },
  { .type = VAR_25, .config = VAR_21 },

  { .type = VAR_23, .config = VAR_14 },
};
 struct perf_event_attr VAR_43[] = {
  { .type = VAR_23, .config = VAR_17 },
};
 struct perf_event_attr VAR_44[] = {
  { .type = VAR_23, .config = VAR_16 },
};
 struct perf_event_attr VAR_45[] = {
  { .type = VAR_23, .config = VAR_15 },
  { .type = VAR_23, .config = VAR_3 },
  { .type = VAR_23, .config = VAR_4 },

};




 struct perf_event_attr VAR_46[] = {

  { .type = VAR_24,
    .config =
  VAR_7 << 0 |
 (VAR_11 << 8) |
 (VAR_12 << 16) },

  { .type = VAR_24,
    .config =
  VAR_7 << 0 |
 (VAR_11 << 8) |
 (VAR_13 << 16) },

  { .type = VAR_24,
    .config =
  VAR_9 << 0 |
 (VAR_11 << 8) |
 (VAR_12 << 16) },

  { .type = VAR_24,
    .config =
  VAR_9 << 0 |
 (VAR_11 << 8) |
 (VAR_13 << 16) },
};




 struct perf_event_attr VAR_47[] = {

  { .type = VAR_24,
    .config =
  VAR_8 << 0 |
 (VAR_11 << 8) |
 (VAR_12 << 16) },

  { .type = VAR_24,
    .config =
  VAR_8 << 0 |
 (VAR_11 << 8) |
 (VAR_13 << 16) },

  { .type = VAR_24,
    .config =
  VAR_5 << 0 |
 (VAR_11 << 8) |
 (VAR_12 << 16) },

  { .type = VAR_24,
    .config =
  VAR_5 << 0 |
 (VAR_11 << 8) |
 (VAR_13 << 16) },

  { .type = VAR_24,
    .config =
  VAR_6 << 0 |
 (VAR_11 << 8) |
 (VAR_12 << 16) },

  { .type = VAR_24,
    .config =
  VAR_6 << 0 |
 (VAR_11 << 8) |
 (VAR_13 << 16) },

};




 struct perf_event_attr VAR_48[] = {

  { .type = VAR_24,
    .config =
  VAR_7 << 0 |
 (VAR_10 << 8) |
 (VAR_12 << 16) },

  { .type = VAR_24,
    .config =
  VAR_7 << 0 |
 (VAR_10 << 8) |
 (VAR_13 << 16) },
};
 struct parse_events_error VAR_49;


 if (VAR_33.null_run)
  return 0;

 if (VAR_40) {





  if (FUNC_4("transaction")) {
   struct option VAR_50 = { .value = &VAR_27 };

   return FUNC_5(&VAR_50, "transaction",
        &VAR_33.metric_events);
  }

  if (FUNC_9("cpu", "cycles-ct") &&
      FUNC_9("cpu", "el-start"))
   VAR_41 = FUNC_6(VAR_27, VAR_38,
        &VAR_49);
  else
   VAR_41 = FUNC_6(VAR_27,
        VAR_39,
        &VAR_49);
  if (VAR_41) {
   FUNC_2(VAR_34, "Cannot set up transaction events\n");
   FUNC_7(&VAR_49, VAR_38);
   return -1;
  }
  return 0;
 }

 if (VAR_30) {
  int VAR_51;

  if (FUNC_11(VAR_2, &VAR_51) < 0) {
   FUNC_2(VAR_34, "freeze_on_smi is not supported.\n");
   return -1;
  }

  if (!VAR_51) {
   if (FUNC_12(VAR_2, 1) < 0) {
    FUNC_2(VAR_34, "Failed to set freeze_on_smi.\n");
    return -1;
   }
   VAR_32 = 1;
  }

  if (FUNC_9("msr", "aperf") &&
      FUNC_9("msr", "smi")) {
   if (!VAR_28)
    VAR_33.metric_only = 1;
   VAR_41 = FUNC_6(VAR_27, VAR_31, &VAR_49);
  } else {
   FUNC_2(VAR_34, "To measure SMI cost, it needs "
    "msr/aperf/, msr/smi/ and cpu/cycles/ support\n");
   FUNC_7(&VAR_49, VAR_31);
   return -1;
  }
  if (VAR_41) {
   FUNC_2(VAR_34, "Cannot set up SMI cost events\n");
   return -1;
  }
  return 0;
 }

 if (VAR_37) {
  char *VAR_52 = ((void*)0);
  bool VAR_53 = 0;

  if (VAR_33.aggr_mode != VAR_1 &&
      VAR_33.aggr_mode != VAR_0) {
   FUNC_10("top down event configuration requires --per-core mode\n");
   return -1;
  }
  VAR_33.aggr_mode = VAR_0;
  if (VAR_29 || !FUNC_13(&VAR_35)) {
   FUNC_10("top down event configuration requires system-wide mode (-a)\n");
   return -1;
  }

  if (!VAR_28)
   VAR_33.metric_only = 1;
  if (FUNC_14(VAR_36, &VAR_52,
    FUNC_0(&VAR_53)) < 0) {
   FUNC_10("Out of memory\n");
   return -1;
  }
  if (VAR_36[0] && VAR_52) {
   if (VAR_53)
    FUNC_1();
   VAR_41 = FUNC_6(VAR_27, VAR_52, &VAR_49);
   if (VAR_41) {
    FUNC_2(VAR_34,
     "Cannot set up top down events %s: %d\n",
     VAR_52, VAR_41);
    FUNC_7(&VAR_49, VAR_52);
    FUNC_3(VAR_52);
    return -1;
   }
  } else {
   FUNC_2(VAR_34, "System does not support topdown\n");
   return -1;
  }
  FUNC_3(VAR_52);
 }

 if (!VAR_27->core.nr_entries) {
  if (FUNC_13(&VAR_35))
   VAR_42[0].config = VAR_19;

  if (FUNC_8(VAR_27, VAR_42) < 0)
   return -1;
  if (FUNC_9("cpu", "stalled-cycles-frontend")) {
   if (FUNC_8(VAR_27,
      VAR_43) < 0)
    return -1;
  }
  if (FUNC_9("cpu", "stalled-cycles-backend")) {
   if (FUNC_8(VAR_27,
      VAR_44) < 0)
    return -1;
  }
  if (FUNC_8(VAR_27, VAR_45) < 0)
   return -1;
 }



 if (VAR_26 < 1)
  return 0;


 if (FUNC_8(VAR_27, VAR_46) < 0)
  return -1;

 if (VAR_26 < 2)
  return 0;


 if (FUNC_8(VAR_27, VAR_47) < 0)
  return -1;

 if (VAR_26 < 3)
  return 0;


 return FUNC_8(VAR_27, VAR_48);
}
