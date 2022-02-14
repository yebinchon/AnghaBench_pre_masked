
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct line_finder {int found; TYPE_1__* lr; int cu_die; } ;
struct TYPE_2__ {int path; int line_list; } ;
typedef int Dwarf_Die ;


 int FUNC_0 (int *,int ,struct line_finder*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(Dwarf_Die *VAR_1, struct line_finder *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1 ?: &VAR_2->cu_die, VAR_0, VAR_2);


 if (VAR_3 >= 0)
  if (!FUNC_1(VAR_2->lr->line_list))
   VAR_3 = VAR_2->found = 1;
  else
   VAR_3 = 0;
 else {
  FUNC_2(&VAR_2->lr->path);
 }
 return VAR_3;
}
