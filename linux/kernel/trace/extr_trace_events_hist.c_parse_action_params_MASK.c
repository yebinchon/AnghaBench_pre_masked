
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int dummy; } ;
struct action_data {scalar_t__ n_params; char* synth_event_name; char** params; scalar_t__ use_trace_keyword; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct trace_array*,int ,int ) ;
 char* FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char**,char*) ;
 char* FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct trace_array *VAR_7, char *VAR_8,
          struct action_data *VAR_9)
{
 char *VAR_10, *VAR_11;
 bool VAR_12 = 1;
 int VAR_13 = 0;

 while (VAR_8) {
  if (VAR_9->n_params >= VAR_6) {
   FUNC_1(VAR_7, VAR_5, 0);
   goto out;
  }

  VAR_10 = FUNC_4(&VAR_8, ",");
  if (!VAR_10) {
   FUNC_1(VAR_7, VAR_4, 0);
   VAR_13 = -VAR_0;
   goto out;
  }

  VAR_10 = FUNC_5(VAR_10);
  if (FUNC_3(VAR_10) < 2) {
   FUNC_1(VAR_7, VAR_3, FUNC_0(VAR_10));
   VAR_13 = -VAR_0;
   goto out;
  }

  VAR_11 = FUNC_2(VAR_10, VAR_2);
  if (!VAR_11) {
   VAR_13 = -VAR_1;
   goto out;
  }

  if (VAR_12 && VAR_9->use_trace_keyword) {
   VAR_9->synth_event_name = VAR_11;
   VAR_12 = 0;
   continue;
  }
  VAR_12 = 0;

  VAR_9->params[VAR_9->n_params++] = VAR_11;
 }
 out:
 return VAR_13;
}
