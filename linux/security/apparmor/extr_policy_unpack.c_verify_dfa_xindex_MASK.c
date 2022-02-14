
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aa_dfa {TYPE_1__** tables; } ;
struct TYPE_2__ {int td_lolen; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct aa_dfa*,int) ;
 int FUNC_1 (struct aa_dfa*,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static bool FUNC_3(struct aa_dfa *VAR_1, int VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1->tables[VAR_0]->td_lolen; VAR_3++) {
  if (!FUNC_2(FUNC_1(VAR_1, VAR_3), VAR_2))
   return 0;
  if (!FUNC_2(FUNC_0(VAR_1, VAR_3), VAR_2))
   return 0;
 }
 return 1;
}
