
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_event_file {int dummy; } ;
struct hist_trigger_data {unsigned int n_vals; TYPE_1__* attrs; } ;
struct TYPE_2__ {char* keys_str; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct hist_trigger_data*,unsigned int,unsigned int,struct trace_event_file*,char*) ;
 char* FUNC_1 (char**,char*) ;

__attribute__((used)) static int FUNC_2(struct hist_trigger_data *VAR_2,
        struct trace_event_file *VAR_3)
{
 unsigned int VAR_4, VAR_5 = 0, VAR_6 = VAR_2->n_vals;
 char *VAR_7, *VAR_8;
 int VAR_9 = -VAR_0;

 VAR_7 = VAR_2->attrs->keys_str;
 if (!VAR_7)
  goto out;

 FUNC_1(&VAR_7, "=");
 if (!VAR_7)
  goto out;

 for (VAR_4 = VAR_6; VAR_4 < VAR_6 + VAR_1; VAR_4++) {
  VAR_8 = FUNC_1(&VAR_7, ",");
  if (!VAR_8)
   break;
  VAR_9 = FUNC_0(VAR_2, VAR_4, VAR_5,
           VAR_3, VAR_8);
  if (VAR_9 < 0)
   goto out;
  VAR_5 += VAR_9;
 }
 if (VAR_7) {
  VAR_9 = -VAR_0;
  goto out;
 }
 VAR_9 = 0;
 out:
 return VAR_9;
}
