
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_5__ {TYPE_1__* seat_config; } ;
struct TYPE_6__ {TYPE_2__ handler_context; } ;
struct TYPE_4__ {int fallback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_2 (char*,int) ;

struct cmd_results *FUNC_3(int VAR_4, char **VAR_5) {
 struct cmd_results *VAR_6 = ((void*)0);
 if ((VAR_6 = FUNC_0(VAR_4, "fallback", VAR_2, 1))) {
  return VAR_6;
 }
 if (!VAR_3->handler_context.seat_config) {
  return FUNC_1(VAR_0, "No seat defined");
 }

 VAR_3->handler_context.seat_config->fallback =
  FUNC_2(VAR_5[0], 0);

 return FUNC_1(VAR_1, ((void*)0));
}
