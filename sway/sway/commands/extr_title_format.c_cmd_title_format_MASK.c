
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_view {char* title_format; } ;
struct sway_container {struct sway_view* view; } ;
struct cmd_results {int dummy; } ;
struct TYPE_3__ {struct sway_container* container; } ;
struct TYPE_4__ {TYPE_1__ handler_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char**,int) ;
 int FUNC_5 (struct sway_view*,int) ;

struct cmd_results *FUNC_6(int VAR_4, char **VAR_5) {
 struct cmd_results *VAR_6 = ((void*)0);
 if ((VAR_6 = FUNC_0(VAR_4, "title_format", VAR_2, 1))) {
  return VAR_6;
 }
 struct sway_container *VAR_7 = VAR_3->handler_context.container;
 if (!VAR_7 || !VAR_7->view) {
  return FUNC_1(VAR_0,
    "Only views can have a title_format");
 }
 struct sway_view *VAR_8 = VAR_7->view;
 char *VAR_9 = FUNC_4(VAR_5, VAR_4);
 if (VAR_8->title_format) {
  FUNC_3(VAR_8->title_format);
 }
 VAR_8->title_format = VAR_9;
 FUNC_5(VAR_8, 1);
 FUNC_2(1);
 return FUNC_1(VAR_1, ((void*)0));
}
