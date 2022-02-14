
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct trace_event_file {int dummy; } ;
struct trace_array {int dummy; } ;
struct hist_trigger_data {scalar_t__ key_size; scalar_t__ n_keys; int n_fields; struct hist_field** fields; TYPE_1__* event_file; } ;
struct hist_field {unsigned int size; unsigned int offset; } ;
struct TYPE_2__ {struct trace_array* tr; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct hist_field*) ;
 int FUNC_2 (struct hist_field*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (int) ;
 struct hist_field* FUNC_4 (struct hist_trigger_data*,int *,unsigned long,int *) ;
 int FUNC_5 (struct hist_field*,int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (struct hist_field*,int ) ;
 int FUNC_8 (struct trace_array*,int ,int ) ;
 struct hist_field* FUNC_9 (struct hist_trigger_data*,struct trace_event_file*,char*,unsigned long,int *,int ) ;
 scalar_t__ FUNC_10 (char*,char*) ;

__attribute__((used)) static int FUNC_11(struct hist_trigger_data *VAR_8,
       unsigned int VAR_9,
       unsigned int VAR_10,
       struct trace_event_file *VAR_11,
       char *VAR_12)
{
 struct trace_array *VAR_13 = VAR_8->event_file->tr;
 struct hist_field *VAR_14 = ((void*)0);
 unsigned long VAR_15 = 0;
 unsigned int VAR_16;
 int VAR_17 = 0;

 if (FUNC_3(VAR_9 >= VAR_2))
  return -VAR_0;

 VAR_15 |= VAR_3;

 if (FUNC_10(VAR_12, "stacktrace") == 0) {
  VAR_15 |= VAR_4;
  VAR_16 = sizeof(unsigned long) * VAR_6;
  VAR_14 = FUNC_4(VAR_8, ((void*)0), VAR_15, ((void*)0));
 } else {
  VAR_14 = FUNC_9(VAR_8, VAR_11, VAR_12, VAR_15,
     ((void*)0), 0);
  if (FUNC_1(VAR_14)) {
   VAR_17 = FUNC_2(VAR_14);
   goto out;
  }

  if (FUNC_7(VAR_14, 0)) {
   FUNC_8(VAR_13, VAR_1, FUNC_6(VAR_12));
   FUNC_5(VAR_14, 0);
   VAR_17 = -VAR_0;
   goto out;
  }

  VAR_16 = VAR_14->size;
 }

 VAR_8->fields[VAR_9] = VAR_14;

 VAR_16 = FUNC_0(VAR_16, sizeof(u64));
 VAR_8->fields[VAR_9]->size = VAR_16;
 VAR_8->fields[VAR_9]->offset = VAR_10;

 VAR_8->key_size += VAR_16;

 if (VAR_8->key_size > VAR_5) {
  VAR_17 = -VAR_0;
  goto out;
 }

 VAR_8->n_keys++;
 VAR_8->n_fields++;

 if (FUNC_3(VAR_8->n_keys > VAR_7))
  return -VAR_0;

 VAR_17 = VAR_16;
 out:
 return VAR_17;
}
