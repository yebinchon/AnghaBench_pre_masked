
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_array {int dummy; } ;
struct TYPE_2__ {void* event_system; void* event; } ;
struct action_data {TYPE_1__ match_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct action_data* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct trace_array*,char*,struct action_data*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct trace_array*,char*,char*) ;
 int FUNC_5 (struct trace_array*,int ,int ) ;
 void* FUNC_6 (char*,int ) ;
 struct action_data* FUNC_7 (int,int ) ;
 int FUNC_8 (struct action_data*) ;
 char* FUNC_9 (char**,char*) ;

__attribute__((used)) static struct action_data *FUNC_10(struct trace_array *VAR_7, char *VAR_8)
{
 char *VAR_9, *VAR_10;
 struct action_data *VAR_11;
 int VAR_12 = -VAR_0;

 VAR_11 = FUNC_7(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return FUNC_0(-VAR_1);

 VAR_9 = FUNC_9(&VAR_8, ")");
 if (!VAR_9 || !VAR_8) {
  FUNC_5(VAR_7, VAR_5, FUNC_3(VAR_9));
  goto free;
 }

 VAR_10 = FUNC_9(&VAR_9, ".");
 if (!VAR_9) {
  FUNC_5(VAR_7, VAR_6, FUNC_3(VAR_10));
  goto free;
 }

 if (FUNC_1(FUNC_4(VAR_7, VAR_10, VAR_9))) {
  FUNC_5(VAR_7, VAR_4, FUNC_3(VAR_9));
  goto free;
 }

 VAR_11->match_data.event = FUNC_6(VAR_9, VAR_2);
 if (!VAR_11->match_data.event) {
  VAR_12 = -VAR_1;
  goto free;
 }

 VAR_11->match_data.event_system = FUNC_6(VAR_10, VAR_2);
 if (!VAR_11->match_data.event_system) {
  VAR_12 = -VAR_1;
  goto free;
 }

 VAR_12 = FUNC_2(VAR_7, VAR_8, VAR_11, VAR_3);
 if (VAR_12)
  goto free;
 out:
 return VAR_11;
 free:
 FUNC_8(VAR_11);
 VAR_11 = FUNC_0(VAR_12);
 goto out;
}
