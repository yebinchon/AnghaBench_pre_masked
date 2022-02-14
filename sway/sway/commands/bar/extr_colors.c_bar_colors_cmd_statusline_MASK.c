
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_6__ {TYPE_2__* current_bar; } ;
struct TYPE_4__ {int statusline; } ;
struct TYPE_5__ {TYPE_1__ colors; } ;


 TYPE_3__* VAR_0 ;
 struct cmd_results* FUNC_0 (int *,char*,int,char**) ;

struct cmd_results *FUNC_1(int VAR_1, char **VAR_2) {
 return FUNC_0(&(VAR_0->current_bar->colors.statusline),
   "statusline", VAR_1, VAR_2);
}
