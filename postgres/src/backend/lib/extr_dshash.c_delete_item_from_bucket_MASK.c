
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int next; } ;
typedef TYPE_1__ dshash_table_item ;
struct TYPE_7__ {int area; } ;
typedef TYPE_2__ dshash_table ;
typedef int dsa_pointer ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (int ,int ) ;

__attribute__((used)) static bool
FUNC_3(dshash_table *VAR_0,
      dshash_table_item *VAR_1,
      dsa_pointer *VAR_2)
{
 while (FUNC_0(*VAR_2))
 {
  dshash_table_item *VAR_3;

  VAR_3 = FUNC_2(VAR_0->area, *VAR_2);

  if (VAR_3 == VAR_1)
  {
   dsa_pointer VAR_4;

   VAR_4 = VAR_1->next;
   FUNC_1(VAR_0->area, *VAR_2);
   *VAR_2 = VAR_4;
   return 1;
  }
  VAR_2 = &VAR_3->next;
 }
 return 0;
}
