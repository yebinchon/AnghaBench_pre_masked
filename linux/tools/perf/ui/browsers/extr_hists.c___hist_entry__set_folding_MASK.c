
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_entry {int unfolded; int has_children; int nr_rows; int sorted_chain; scalar_t__ leaf; } ;
struct hist_browser {int dummy; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct hist_browser*,struct hist_entry*,int) ;
 int FUNC_2 (struct hist_entry*) ;

__attribute__((used)) static void FUNC_3(struct hist_entry *VAR_0,
          struct hist_browser *VAR_1, bool VAR_2)
{
 FUNC_2(VAR_0);
 VAR_0->unfolded = VAR_2 ? VAR_0->has_children : 0;

 if (VAR_0->has_children) {
  int VAR_3;

  if (VAR_0->leaf)
   VAR_3 = FUNC_0(&VAR_0->sorted_chain, VAR_2);
  else
   VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2);

  VAR_0->nr_rows = VAR_2 ? VAR_3 : 0;
 } else
  VAR_0->nr_rows = 0;
}
