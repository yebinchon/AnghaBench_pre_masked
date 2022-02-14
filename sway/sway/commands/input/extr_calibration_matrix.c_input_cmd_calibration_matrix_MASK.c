
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int configured; int matrix; } ;
struct input_config {TYPE_1__ calibration_matrix; } ;
struct cmd_results {int dummy; } ;
struct TYPE_5__ {struct input_config* input_config; } ;
struct TYPE_6__ {TYPE_2__ handler_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*,...) ;
 TYPE_3__* VAR_3 ;
 scalar_t__ FUNC_2 (float) ;
 int FUNC_3 (int ,float*,int) ;
 float FUNC_4 (char*) ;

struct cmd_results *FUNC_5(int VAR_4, char **VAR_5) {
 struct cmd_results *VAR_6 = ((void*)0);
 if ((VAR_6 = FUNC_0(VAR_4, "calibration_matrix", VAR_2, 6))) {
  return VAR_6;
 }
 struct input_config *VAR_7 = VAR_3->handler_context.input_config;
 if (!VAR_7) {
  return FUNC_1(VAR_0, "No input device defined.");
 }

 float VAR_8[6];
 for (int VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9) {
  char *VAR_10 = VAR_5[VAR_9];
  float VAR_11 = FUNC_4(VAR_10);
  if (FUNC_2(VAR_11)) {
   return FUNC_1(VAR_0, "calibration_matrix: unable to parse float: %s", VAR_10);
  }
  VAR_8[VAR_9] = VAR_11;
 }

 VAR_7->calibration_matrix.configured = 1;
 FUNC_3(VAR_7->calibration_matrix.matrix, VAR_8, sizeof(VAR_7->calibration_matrix.matrix));

 return FUNC_1(VAR_1, ((void*)0));
}
