
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr_entries; } ;
struct hist_browser {TYPE_1__ b; int he_selection; } ;


 int FUNC_0 (struct hist_browser*) ;
 int FUNC_1 (int ,struct hist_browser*,int) ;

__attribute__((used)) static void FUNC_2(struct hist_browser *VAR_0, bool VAR_1)
{
 if (!VAR_0->he_selection)
  return;

 FUNC_1(VAR_0->he_selection, VAR_0, VAR_1);
 VAR_0->b.nr_entries = FUNC_0(VAR_0);
}
