
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_probe_event {int event; void* group; } ;
struct bpf_program {int dummy; } ;
struct bpf_prog_priv {int is_tp; void* evt_name; int sys_name; struct perf_probe_event pev; } ;
struct TYPE_2__ {int no_inlines; int force_add; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*) ;
 char* VAR_3 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct bpf_program*,struct bpf_prog_priv*,int ) ;
 char* FUNC_3 (struct bpf_program*,int) ;
 struct bpf_prog_priv* FUNC_4 (int,int) ;
 int FUNC_5 (struct perf_probe_event*) ;
 int VAR_4 ;
 int FUNC_6 (struct bpf_prog_priv*) ;
 int FUNC_7 (char const*,char const**,int*,struct perf_probe_event*) ;
 int FUNC_8 (char*,...) ;
 TYPE_1__ VAR_5 ;
 char* FUNC_9 (char const*,char) ;
 scalar_t__ FUNC_10 (void*,char*) ;
 void* FUNC_11 (char*) ;
 int FUNC_12 (char const*,int) ;

__attribute__((used)) static int
FUNC_13(struct bpf_program *VAR_6)
{
 struct perf_probe_event *VAR_7 = ((void*)0);
 struct bpf_prog_priv *VAR_8 = ((void*)0);
 const char *VAR_9, *VAR_10;
 bool VAR_11 = 0;
 int VAR_12;


 VAR_5.no_inlines = 0;
 VAR_5.force_add = 0;

 VAR_9 = FUNC_3(VAR_6, 0);
 if (FUNC_0(VAR_9)) {
  FUNC_8("bpf: unable to get title for program\n");
  return FUNC_1(VAR_9);
 }

 VAR_8 = FUNC_4(sizeof(*VAR_8), 1);
 if (!VAR_8) {
  FUNC_8("bpf: failed to alloc priv\n");
  return -VAR_2;
 }
 VAR_7 = &VAR_8->pev;

 FUNC_8("bpf: config program '%s'\n", VAR_9);
 VAR_12 = FUNC_7(VAR_9, &VAR_10, &VAR_11, VAR_7);
 if (VAR_12)
  goto errout;

 if (VAR_11) {
  char *VAR_13 = FUNC_9(VAR_10, ':');

  VAR_8->is_tp = 1;
  VAR_8->sys_name = FUNC_12(VAR_10, VAR_13 - VAR_10);
  VAR_8->evt_name = FUNC_11(VAR_13 + 1);
  goto set_priv;
 }

 if (VAR_7->group && FUNC_10(VAR_7->group, VAR_3)) {
  FUNC_8("bpf: '%s': group for event is set and not '%s'.\n",
    VAR_9, VAR_3);
  VAR_12 = -VAR_1;
  goto errout;
 } else if (!VAR_7->group)
  VAR_7->group = FUNC_11(VAR_3);

 if (!VAR_7->group) {
  FUNC_8("bpf: strdup failed\n");
  VAR_12 = -VAR_2;
  goto errout;
 }

 if (!VAR_7->event) {
  FUNC_8("bpf: '%s': event name is missing. Section name should be 'key=value'\n",
    VAR_9);
  VAR_12 = -VAR_0;
  goto errout;
 }
 FUNC_8("bpf: config '%s' is ok\n", VAR_9);

set_priv:
 VAR_12 = FUNC_2(VAR_6, VAR_8, VAR_4);
 if (VAR_12) {
  FUNC_8("Failed to set priv for program '%s'\n", VAR_9);
  goto errout;
 }

 return 0;

errout:
 if (VAR_7)
  FUNC_5(VAR_7);
 FUNC_6(VAR_8);
 return VAR_12;
}
