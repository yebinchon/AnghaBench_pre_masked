
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int sample_period; int wakeup_events; int config; int sample_type; int type; } ;
struct bpf_insn {int dummy; } ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;
typedef int buf ;


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
 int FUNC_0 (char*) ;
 int FUNC_1 (int,struct bpf_insn*,size_t,int ,int ,char*,int ) ;
 char* VAR_19 ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (int) ;
 int VAR_20 ;
 int* VAR_21 ;
 int FUNC_4 (int,int ,int) ;
 scalar_t__ FUNC_5 (char const) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (char const*,int) ;
 int FUNC_8 (char*,...) ;
 int VAR_24 ;
 int* VAR_25 ;
 int FUNC_9 (int,char*,int) ;
 int FUNC_10 (char*,int,char*,char,char const*,char const*) ;
 int FUNC_11 (char*,char const*) ;
 int FUNC_12 (char*,int ) ;
 char* FUNC_13 (int) ;
 scalar_t__ FUNC_14 (char const*,char*,int) ;
 int FUNC_15 (struct perf_event_attr*,int,int ,int,int ) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static int FUNC_17(const char *VAR_26, struct bpf_insn *VAR_27, int VAR_28)
{
 bool VAR_29 = FUNC_14(VAR_26, "socket", 6) == 0;
 bool VAR_30 = FUNC_14(VAR_26, "kprobe/", 7) == 0;
 bool VAR_31 = FUNC_14(VAR_26, "kretprobe/", 10) == 0;
 bool VAR_32 = FUNC_14(VAR_26, "tracepoint/", 11) == 0;
 bool VAR_33 = FUNC_14(VAR_26, "raw_tracepoint/", 15) == 0;
 bool VAR_34 = FUNC_14(VAR_26, "xdp", 3) == 0;
 bool VAR_35 = FUNC_14(VAR_26, "perf_event", 10) == 0;
 bool VAR_36 = FUNC_14(VAR_26, "cgroup/skb", 10) == 0;
 bool VAR_37 = FUNC_14(VAR_26, "cgroup/sock", 11) == 0;
 bool VAR_38 = FUNC_14(VAR_26, "sockops", 7) == 0;
 bool VAR_39 = FUNC_14(VAR_26, "sk_skb", 6) == 0;
 bool VAR_40 = FUNC_14(VAR_26, "sk_msg", 6) == 0;
 size_t VAR_41 = VAR_28 / sizeof(struct bpf_insn);
 enum bpf_prog_type VAR_42;
 char VAR_43[256];
 int VAR_44, VAR_45, VAR_46, VAR_47;
 struct perf_event_attr VAR_48 = {};

 VAR_48.type = VAR_18;
 VAR_48.sample_type = VAR_17;
 VAR_48.sample_period = 1;
 VAR_48.wakeup_events = 1;

 if (VAR_29) {
  VAR_42 = VAR_8;
 } else if (VAR_30 || VAR_31) {
  VAR_42 = VAR_3;
 } else if (VAR_32) {
  VAR_42 = VAR_10;
 } else if (VAR_33) {
  VAR_42 = VAR_5;
 } else if (VAR_34) {
  VAR_42 = VAR_11;
 } else if (VAR_35) {
  VAR_42 = VAR_4;
 } else if (VAR_36) {
  VAR_42 = VAR_1;
 } else if (VAR_37) {
  VAR_42 = VAR_2;
 } else if (VAR_38) {
  VAR_42 = VAR_9;
 } else if (VAR_39) {
  VAR_42 = VAR_7;
 } else if (VAR_40) {
  VAR_42 = VAR_6;
 } else {
  FUNC_8("Unknown event '%s'\n", VAR_26);
  return -1;
 }

 if (VAR_24 == VAR_13)
  return -1;

 VAR_44 = FUNC_1(VAR_42, VAR_27, VAR_41, VAR_23, VAR_22,
         VAR_19, VAR_0);
 if (VAR_44 < 0) {
  FUNC_8("bpf_load_program() err=%d\n%s", VAR_20, VAR_19);
  return -1;
 }

 VAR_25[VAR_24++] = VAR_44;

 if (VAR_34 || VAR_35 || VAR_36 || VAR_37)
  return 0;

 if (VAR_29 || VAR_38 || VAR_39 || VAR_40) {
  if (VAR_29)
   VAR_26 += 6;
  else
   VAR_26 += 7;
  if (*VAR_26 != '/')
   return 0;
  VAR_26++;
  if (!FUNC_5(*VAR_26)) {
   FUNC_8("invalid prog number\n");
   return -1;
  }
  return FUNC_7(VAR_26, VAR_44);
 }

 if (VAR_33) {
  VAR_45 = FUNC_2(VAR_26 + 15, VAR_44);
  if (VAR_45 < 0) {
   FUNC_8("tracepoint %s %s\n", VAR_26 + 15, FUNC_13(VAR_20));
   return -1;
  }
  VAR_21[VAR_24 - 1] = VAR_45;
  return 0;
 }

 if (VAR_30 || VAR_31) {
  bool VAR_49 = 1;
  const char *VAR_50 = "";

  if (VAR_30)
   VAR_26 += 7;
  else
   VAR_26 += 10;

  if (*VAR_26 == 0) {
   FUNC_8("event name cannot be empty\n");
   return -1;
  }

  if (FUNC_5(*VAR_26))
   return FUNC_7(VAR_26, VAR_44);


  if (FUNC_14(VAR_26, "sys_", 4) == 0) {
   FUNC_10(VAR_43, sizeof(VAR_43), "%c:__x64_%s __x64_%s",
    VAR_30 ? 'p' : 'r', VAR_26, VAR_26);
   VAR_46 = FUNC_16(VAR_43);
   if (VAR_46 >= 0) {
    VAR_49 = 0;
    VAR_50 = "__x64_";
   }
  }

  if (VAR_49) {
   FUNC_10(VAR_43, sizeof(VAR_43), "%c:%s %s",
    VAR_30 ? 'p' : 'r', VAR_26, VAR_26);
   VAR_46 = FUNC_16(VAR_43);
   if (VAR_46 < 0) {
    FUNC_8("failed to create kprobe '%s' error '%s'\n",
           VAR_26, FUNC_13(VAR_20));
    return -1;
   }
  }

  FUNC_12(VAR_43, VAR_12);
  FUNC_11(VAR_43, "events/kprobes/");
  FUNC_11(VAR_43, VAR_50);
  FUNC_11(VAR_43, VAR_26);
  FUNC_11(VAR_43, "/id");
 } else if (VAR_32) {
  VAR_26 += 11;

  if (*VAR_26 == 0) {
   FUNC_8("event name cannot be empty\n");
   return -1;
  }
  FUNC_12(VAR_43, VAR_12);
  FUNC_11(VAR_43, "events/");
  FUNC_11(VAR_43, VAR_26);
  FUNC_11(VAR_43, "/id");
 }

 VAR_45 = FUNC_6(VAR_43, VAR_14, 0);
 if (VAR_45 < 0) {
  FUNC_8("failed to open event %s\n", VAR_26);
  return -1;
 }

 VAR_46 = FUNC_9(VAR_45, VAR_43, sizeof(VAR_43));
 if (VAR_46 < 0 || VAR_46 >= sizeof(VAR_43)) {
  FUNC_8("read from '%s' failed '%s'\n", VAR_26, FUNC_13(VAR_20));
  return -1;
 }

 FUNC_3(VAR_45);

 VAR_43[VAR_46] = 0;
 VAR_47 = FUNC_0(VAR_43);
 VAR_48.config = VAR_47;

 VAR_45 = FUNC_15(&VAR_48, -1 , 0 , -1 , 0);
 if (VAR_45 < 0) {
  FUNC_8("event %d fd %d err %s\n", VAR_47, VAR_45, FUNC_13(VAR_20));
  return -1;
 }
 VAR_21[VAR_24 - 1] = VAR_45;
 VAR_46 = FUNC_4(VAR_45, VAR_15, 0);
 if (VAR_46 < 0) {
  FUNC_8("ioctl PERF_EVENT_IOC_ENABLE failed err %s\n",
         FUNC_13(VAR_20));
  return -1;
 }
 VAR_46 = FUNC_4(VAR_45, VAR_16, VAR_44);
 if (VAR_46 < 0) {
  FUNC_8("ioctl PERF_EVENT_IOC_SET_BPF failed err %s\n",
         FUNC_13(VAR_20));
  return -1;
 }

 return 0;
}
