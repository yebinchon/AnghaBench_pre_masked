
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
struct TYPE_4__ {int hide_cursor_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_3__* VAR_4 ;
 int FUNC_2 (char*,char**,int) ;

struct cmd_results *FUNC_3(int VAR_5, char **VAR_6) {
 struct cmd_results *VAR_7 = ((void*)0);
 if ((VAR_7 = FUNC_0(VAR_5, "hide_cursor", VAR_3, 1))) {
  return VAR_7;
 }
 if (!VAR_4->handler_context.seat_config) {
  return FUNC_1(VAR_0, "No seat defined");
 }

 char *VAR_8;
 int VAR_9 = FUNC_2(VAR_6[0], &VAR_8, 10);
 if (*VAR_8) {
  return FUNC_1(VAR_1, "Expected an integer timeout");
 }
 if (VAR_9 < 100 && VAR_9 != 0) {
  VAR_9 = 100;
 }
 VAR_4->handler_context.seat_config->hide_cursor_timeout = VAR_9;

 return FUNC_1(VAR_2, ((void*)0));
}
