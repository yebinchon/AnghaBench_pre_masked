
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_8__ {int length; char** items; } ;
typedef TYPE_2__ list_t ;
struct TYPE_9__ {TYPE_1__* current_bar; } ;
struct TYPE_7__ {int id; TYPE_2__* tray_outputs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_6__* VAR_4 ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,char*,...) ;

struct cmd_results *FUNC_9(int VAR_5, char **VAR_6) {
 return FUNC_1(VAR_0,
   "Sway has been compiled without tray support");

}
