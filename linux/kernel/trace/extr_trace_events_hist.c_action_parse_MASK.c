
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_array {int dummy; } ;
struct TYPE_2__ {void* save_data; void* check_val; } ;
struct action_data {int use_trace_keyword; int handler; int action_name; int action; void* fn; TYPE_1__ track_data; } ;
typedef enum handler_id { ____Placeholder_handler_id } handler_id ;


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
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct trace_array*,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 void* VAR_16 ;
 int FUNC_3 (struct trace_array*,char*,struct action_data*) ;
 void* VAR_17 ;
 void* VAR_18 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 char* FUNC_5 (char**,char*) ;

__attribute__((used)) static int FUNC_6(struct trace_array *VAR_19, char *VAR_20, struct action_data *VAR_21,
   enum handler_id VAR_22)
{
 char *VAR_23;
 int VAR_24 = 0;

 FUNC_5(&VAR_20, ".");
 if (!VAR_20) {
  FUNC_1(VAR_19, VAR_10, 0);
  VAR_24 = -VAR_3;
  goto out;
 }

 VAR_23 = FUNC_5(&VAR_20, "(");
 if (!VAR_23 || !VAR_20) {
  FUNC_1(VAR_19, VAR_10, 0);
  VAR_24 = -VAR_3;
  goto out;
 }

 if (FUNC_4(VAR_23, "save")) {
  char *VAR_25 = FUNC_5(&VAR_20, ")");

  if (!VAR_25) {
   FUNC_1(VAR_19, VAR_12, 0);
   VAR_24 = -VAR_3;
   goto out;
  }

  VAR_24 = FUNC_3(VAR_19, VAR_25, VAR_21);
  if (VAR_24)
   goto out;

  if (VAR_22 == VAR_8)
   VAR_21->track_data.check_val = VAR_15;
  else if (VAR_22 == VAR_6)
   VAR_21->track_data.check_val = VAR_14;
  else {
   FUNC_1(VAR_19, VAR_9, FUNC_0(VAR_23));
   VAR_24 = -VAR_3;
   goto out;
  }

  VAR_21->track_data.save_data = VAR_18;
  VAR_21->fn = VAR_16;
  VAR_21->action = VAR_0;
 } else if (FUNC_4(VAR_23, "snapshot")) {
  char *VAR_26 = FUNC_5(&VAR_20, ")");

  if (!VAR_20) {
   FUNC_1(VAR_19, VAR_11, FUNC_0(VAR_26));
   VAR_24 = -VAR_3;
   goto out;
  }

  if (VAR_22 == VAR_8)
   VAR_21->track_data.check_val = VAR_15;
  else if (VAR_22 == VAR_6)
   VAR_21->track_data.check_val = VAR_14;
  else {
   FUNC_1(VAR_19, VAR_9, FUNC_0(VAR_23));
   VAR_24 = -VAR_3;
   goto out;
  }

  VAR_21->track_data.save_data = VAR_17;
  VAR_21->fn = VAR_16;
  VAR_21->action = VAR_1;
 } else {
  char *VAR_27 = FUNC_5(&VAR_20, ")");

  if (FUNC_4(VAR_23, "trace"))
   VAR_21->use_trace_keyword = 1;

  if (VAR_27) {
   VAR_24 = FUNC_3(VAR_19, VAR_27, VAR_21);
   if (VAR_24)
    goto out;
  }

  if (VAR_22 == VAR_8)
   VAR_21->track_data.check_val = VAR_15;
  else if (VAR_22 == VAR_6)
   VAR_21->track_data.check_val = VAR_14;

  if (VAR_22 != VAR_7) {
   VAR_21->track_data.save_data = VAR_13;
   VAR_21->fn = VAR_16;
  } else
   VAR_21->fn = VAR_13;

  VAR_21->action = VAR_2;
 }

 VAR_21->action_name = FUNC_2(VAR_23, VAR_5);
 if (!VAR_21->action_name) {
  VAR_24 = -VAR_4;
  goto out;
 }

 VAR_21->handler = VAR_22;
 out:
 return VAR_24;
}
