
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct popup_action {int fn; } ;
struct hist_browser {int hbt; } ;


 scalar_t__ FUNC_0 (char**,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct hist_browser *VAR_1,
        struct popup_action *VAR_2, char **VAR_3)
{
 if (!FUNC_1(VAR_1->hbt))
  return 0;

 if (FUNC_0(VAR_3, "Switch to another data file in PWD") < 0)
  return 0;

 VAR_2->fn = VAR_0;
 return 1;
}
