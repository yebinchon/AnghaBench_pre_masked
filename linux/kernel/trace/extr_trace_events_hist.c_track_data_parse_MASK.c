
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hist_trigger_data {TYPE_2__* event_file; } ;
struct TYPE_3__ {int var_str; } ;
struct action_data {TYPE_1__ track_data; } ;
typedef enum handler_id { ____Placeholder_handler_id } handler_id ;
struct TYPE_4__ {int tr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct action_data* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,struct action_data*,int) ;
 int FUNC_2 (char*,int ) ;
 struct action_data* FUNC_3 (int,int ) ;
 char* FUNC_4 (char**,char*) ;
 int FUNC_5 (struct hist_trigger_data*,struct action_data*) ;

__attribute__((used)) static struct action_data *FUNC_6(struct hist_trigger_data *VAR_3,
         char *VAR_4, enum handler_id VAR_5)
{
 struct action_data *VAR_6;
 int VAR_7 = -VAR_0;
 char *VAR_8;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 VAR_8 = FUNC_4(&VAR_4, ")");
 if (!VAR_8 || !VAR_4) {
  VAR_7 = -VAR_0;
  goto free;
 }

 VAR_6->track_data.var_str = FUNC_2(VAR_8, VAR_2);
 if (!VAR_6->track_data.var_str) {
  VAR_7 = -VAR_1;
  goto free;
 }

 VAR_7 = FUNC_1(VAR_3->event_file->tr, VAR_4, VAR_6, VAR_5);
 if (VAR_7)
  goto free;
 out:
 return VAR_6;
 free:
 FUNC_5(VAR_3, VAR_6);
 VAR_6 = FUNC_0(VAR_7);
 goto out;
}
