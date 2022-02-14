
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct map* map; } ;
struct popup_action {int fn; TYPE_1__ ms; } ;
struct map {int dummy; } ;
struct hist_browser {int hists; } ;


 scalar_t__ FUNC_0 (char**,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct hist_browser *VAR_2,
     struct popup_action *VAR_3, char **VAR_4, struct map *VAR_5)
{
 if (!FUNC_1(VAR_2->hists, VAR_1) || VAR_5 == ((void*)0))
  return 0;

 if (FUNC_0(VAR_4, "Browse map details") < 0)
  return 0;

 VAR_3->ms.map = VAR_5;
 VAR_3->fn = VAR_0;
 return 1;
}
