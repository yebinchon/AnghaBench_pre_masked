
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_7__ {TYPE_2__* seat_config; } ;
struct TYPE_8__ {TYPE_3__ handler_context; } ;
struct TYPE_5__ {unsigned int size; int name; } ;
struct TYPE_6__ {TYPE_1__ xcursor_theme; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_4__* VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 unsigned int FUNC_4 (char*,char**,int) ;

struct cmd_results *FUNC_5(int VAR_6, char **VAR_7) {
 struct cmd_results *VAR_8 = ((void*)0);
 if ((VAR_8 = FUNC_0(VAR_6, "xcursor_theme", VAR_3, 1)) ||
  (VAR_8 = FUNC_0(VAR_6, "xcursor_theme", VAR_4, 2))) {
  return VAR_8;
 }
 if (!VAR_5->handler_context.seat_config) {
  return FUNC_1(VAR_0, "No seat defined");
 }

 const char *VAR_9 = VAR_7[0];
 unsigned VAR_10 = 24;

 if (VAR_6 == 2) {
  char *VAR_11;
  VAR_10 = FUNC_4(VAR_7[1], &VAR_11, 10);
  if (*VAR_11) {
   return FUNC_1(
    VAR_1, "Expected a positive integer size");
  }
 }

 FUNC_2(VAR_5->handler_context.seat_config->xcursor_theme.name);
 VAR_5->handler_context.seat_config->xcursor_theme.name = FUNC_3(VAR_9);
 VAR_5->handler_context.seat_config->xcursor_theme.size = VAR_10;

 return FUNC_1(VAR_2, ((void*)0));
}
