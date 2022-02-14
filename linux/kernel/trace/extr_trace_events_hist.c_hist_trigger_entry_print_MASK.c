
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tracing_map_elt {int dummy; } ;
struct seq_file {int dummy; } ;
struct hist_trigger_data {unsigned int n_vals; TYPE_1__** fields; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 char* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct seq_file*,struct hist_trigger_data*,void*,struct tracing_map_elt*) ;
 int FUNC_2 (struct seq_file*,struct hist_trigger_data*,struct tracing_map_elt*) ;
 int FUNC_3 (struct seq_file*,char*,char const*,...) ;
 int FUNC_4 (struct seq_file*,char*) ;
 int FUNC_5 (struct tracing_map_elt*,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct seq_file *VAR_4,
         struct hist_trigger_data *VAR_5,
         void *VAR_6,
         struct tracing_map_elt *VAR_7)
{
 const char *VAR_8;
 unsigned int VAR_9;

 FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);

 FUNC_3(VAR_4, " hitcount: %10llu",
     FUNC_5(VAR_7, VAR_3));

 for (VAR_9 = 1; VAR_9 < VAR_5->n_vals; VAR_9++) {
  VAR_8 = FUNC_0(VAR_5->fields[VAR_9], 0);

  if (VAR_5->fields[VAR_9]->flags & VAR_2 ||
      VAR_5->fields[VAR_9]->flags & VAR_0)
   continue;

  if (VAR_5->fields[VAR_9]->flags & VAR_1) {
   FUNC_3(VAR_4, "  %s: %10llx", VAR_8,
       FUNC_5(VAR_7, VAR_9));
  } else {
   FUNC_3(VAR_4, "  %s: %10llu", VAR_8,
       FUNC_5(VAR_7, VAR_9));
  }
 }

 FUNC_2(VAR_4, VAR_5, VAR_7);

 FUNC_4(VAR_4, "\n");
}
