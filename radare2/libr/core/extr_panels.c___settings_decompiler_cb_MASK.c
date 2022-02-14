
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int config; TYPE_1__* panels; TYPE_2__* panels_root; } ;
struct TYPE_11__ {int depth; TYPE_3__** history; } ;
struct TYPE_10__ {size_t selectedIndex; char* name; struct TYPE_10__** sub; } ;
struct TYPE_9__ {int * cur_pdc_cache; int pdc_caches; } ;
struct TYPE_8__ {TYPE_4__* panels_menu; } ;
typedef int Sdb ;
typedef TYPE_2__ RPanelsRoot ;
typedef TYPE_3__ RPanelsMenuItem ;
typedef TYPE_4__ RPanelsMenu ;
typedef TYPE_5__ RCore ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*,int,int) ;
 char* FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,char const*) ;
 int * FUNC_4 () ;
 int * FUNC_5 (int ,char const*,int ) ;
 int FUNC_6 (int ,char const*,int *,int ) ;
 int FUNC_7 (char const*,char const*) ;

int FUNC_8(void *VAR_1) {
 RCore *VAR_2 = (RCore *)VAR_1;
 RPanelsRoot *VAR_3 = VAR_2->panels_root;
 RPanelsMenu *VAR_4 = VAR_2->panels->panels_menu;
 RPanelsMenuItem *VAR_5 = VAR_4->history[VAR_4->depth - 1];
 RPanelsMenuItem *VAR_6 = VAR_5->sub[VAR_5->selectedIndex];
 const char *VAR_7 = VAR_6->name;
 const char *VAR_8 = FUNC_2 (VAR_2->config, "cmd.pdc");
 if (!FUNC_7 (VAR_7, VAR_8)) {
  return 0;
 }
 FUNC_3 (VAR_2->config, "cmd.pdc", VAR_7);
 VAR_3->cur_pdc_cache = FUNC_5 (VAR_3->pdc_caches, VAR_7, 0);
 if (!VAR_3->cur_pdc_cache) {
  Sdb *VAR_9 = FUNC_4 ();
  FUNC_6 (VAR_3->pdc_caches, VAR_7, VAR_9, 0);
  VAR_3->cur_pdc_cache = VAR_9;
 }
 FUNC_1 (VAR_2, 0, 0);
 FUNC_0 (VAR_2, VAR_0);
 return 0;
}
