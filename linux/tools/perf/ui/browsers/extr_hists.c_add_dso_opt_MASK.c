
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct map* map; } ;
struct popup_action {int fn; TYPE_1__ ms; } ;
struct map {TYPE_2__* dso; } ;
struct hist_browser {TYPE_3__* hists; } ;
struct TYPE_6__ {scalar_t__ dso_filter; } ;
struct TYPE_5__ {char* short_name; } ;


 scalar_t__ FUNC_0 (struct map*) ;
 scalar_t__ FUNC_1 (char**,char*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,int ) ;

__attribute__((used)) static int
FUNC_3(struct hist_browser *VAR_2, struct popup_action *VAR_3,
     char **VAR_4, struct map *VAR_5)
{
 if (!FUNC_2(VAR_2->hists, VAR_1) || VAR_5 == ((void*)0))
  return 0;

 if (FUNC_1(VAR_4, "Zoom %s %s DSO",
       VAR_2->hists->dso_filter ? "out of" : "into",
       FUNC_0(VAR_5) ? "the Kernel" : VAR_5->dso->short_name) < 0)
  return 0;

 VAR_3->ms.map = VAR_5;
 VAR_3->fn = VAR_0;
 return 1;
}
