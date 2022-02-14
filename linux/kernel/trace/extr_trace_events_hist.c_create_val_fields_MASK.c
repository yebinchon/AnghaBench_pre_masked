
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_event_file {int dummy; } ;
struct hist_trigger_data {TYPE_1__* attrs; } ;
struct TYPE_2__ {char* vals_str; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct hist_trigger_data*) ;
 int FUNC_1 (struct hist_trigger_data*,int ,struct trace_event_file*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 char* FUNC_3 (char**,char*) ;

__attribute__((used)) static int FUNC_4(struct hist_trigger_data *VAR_2,
        struct trace_event_file *VAR_3)
{
 char *VAR_4, *VAR_5;
 unsigned int VAR_6, VAR_7 = 1;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_2);
 if (VAR_8)
  goto out;

 VAR_4 = VAR_2->attrs->vals_str;
 if (!VAR_4)
  goto out;

 FUNC_3(&VAR_4, "=");
 if (!VAR_4)
  goto out;

 for (VAR_6 = 0, VAR_7 = 1; VAR_6 < VAR_1 &&
       VAR_7 < VAR_1; VAR_6++) {
  VAR_5 = FUNC_3(&VAR_4, ",");
  if (!VAR_5)
   break;

  if (FUNC_2(VAR_5, "hitcount") == 0)
   continue;

  VAR_8 = FUNC_1(VAR_2, VAR_7++, VAR_3, VAR_5);
  if (VAR_8)
   goto out;
 }

 if (VAR_4 && (FUNC_2(VAR_4, "hitcount") != 0))
  VAR_8 = -VAR_0;
 out:
 return VAR_8;
}
