
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_event_file {int event_call; struct trace_array* tr; } ;
struct trace_array {int dummy; } ;
struct hist_trigger_data {int enable_timestamps; TYPE_1__* attrs; } ;
struct ftrace_event_field {int size; } ;
struct TYPE_2__ {int ts_in_usecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ftrace_event_field* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct trace_array*,int ,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char* FUNC_6 (char**,char*) ;
 struct ftrace_event_field* FUNC_7 (int ,char*) ;

__attribute__((used)) static struct ftrace_event_field *
FUNC_8(struct hist_trigger_data *VAR_14, struct trace_event_file *VAR_15,
     char *VAR_16, unsigned long *VAR_17)
{
 struct ftrace_event_field *VAR_18 = ((void*)0);
 char *VAR_19, *VAR_20, *VAR_21;
 struct trace_array *VAR_22 = VAR_15->tr;

 VAR_20 = VAR_21 = FUNC_4(VAR_16, VAR_2);
 if (!VAR_20)
  return FUNC_0(-VAR_1);

 VAR_19 = FUNC_6(&VAR_20, ".");
 if (VAR_20) {
  if (FUNC_5(VAR_20, "hex") == 0)
   *VAR_17 |= VAR_7;
  else if (FUNC_5(VAR_20, "sym") == 0)
   *VAR_17 |= VAR_9;
  else if (FUNC_5(VAR_20, "sym-offset") == 0)
   *VAR_17 |= VAR_10;
  else if ((FUNC_5(VAR_20, "execname") == 0) &&
    (FUNC_5(VAR_19, "common_pid") == 0))
   *VAR_17 |= VAR_6;
  else if (FUNC_5(VAR_20, "syscall") == 0)
   *VAR_17 |= VAR_11;
  else if (FUNC_5(VAR_20, "log2") == 0)
   *VAR_17 |= VAR_8;
  else if (FUNC_5(VAR_20, "usecs") == 0)
   *VAR_17 |= VAR_13;
  else {
   FUNC_2(VAR_22, VAR_3, FUNC_1(VAR_20));
   VAR_18 = FUNC_0(-VAR_0);
   goto out;
  }
 }

 if (FUNC_5(VAR_19, "common_timestamp") == 0) {
  *VAR_17 |= VAR_12;
  VAR_14->enable_timestamps = 1;
  if (*VAR_17 & VAR_13)
   VAR_14->attrs->ts_in_usecs = 1;
 } else if (FUNC_5(VAR_19, "cpu") == 0)
  *VAR_17 |= VAR_5;
 else {
  VAR_18 = FUNC_7(VAR_15->event_call, VAR_19);
  if (!VAR_18 || !VAR_18->size) {
   FUNC_2(VAR_22, VAR_4, FUNC_1(VAR_19));
   VAR_18 = FUNC_0(-VAR_0);
   goto out;
  }
 }
 out:
 FUNC_3(VAR_21);

 return VAR_18;
}
