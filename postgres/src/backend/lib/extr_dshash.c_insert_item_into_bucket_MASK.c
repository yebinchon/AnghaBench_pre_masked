
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


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(dshash_table *VAR_0,
      dsa_pointer VAR_1,
      dshash_table_item *VAR_2,
      dsa_pointer *VAR_3)
{
 FUNC_0(VAR_2 == FUNC_1(VAR_0->area, VAR_1));

 VAR_2->next = *VAR_3;
 *VAR_3 = VAR_1;
}
