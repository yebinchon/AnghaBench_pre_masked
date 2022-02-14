
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct map* map; } ;
struct popup_action {TYPE_1__ ms; } ;
struct map {TYPE_2__* dso; } ;
struct hist_browser {TYPE_4__* hists; int pstack; } ;
struct TYPE_8__ {TYPE_2__* dso_filter; } ;
struct TYPE_7__ {char* short_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct map*) ;
 int VAR_1 ;
 int FUNC_1 (struct hist_browser*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,TYPE_2__**) ;
 int FUNC_6 (int ,TYPE_2__**) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 () ;

__attribute__((used)) static int
FUNC_9(struct hist_browser *VAR_2, struct popup_action *VAR_3)
{
 struct map *VAR_4 = VAR_3->ms.map;

 if (!FUNC_3(VAR_2->hists, VAR_1) || VAR_4 == ((void*)0))
  return 0;

 if (VAR_2->hists->dso_filter) {
  FUNC_6(VAR_2->pstack, &VAR_2->hists->dso_filter);
  FUNC_4(VAR_0, 0);
  VAR_2->hists->dso_filter = ((void*)0);
  FUNC_8();
 } else {
  FUNC_7("To zoom out press ESC or ENTER + \"Zoom out of %s DSO\"",
       FUNC_0(VAR_4) ? "the Kernel" : VAR_4->dso->short_name);
  VAR_2->hists->dso_filter = VAR_4->dso;
  FUNC_4(VAR_0, 1);
  FUNC_5(VAR_2->pstack, &VAR_2->hists->dso_filter);
 }

 FUNC_2(VAR_2->hists);
 FUNC_1(VAR_2);
 return 0;
}
