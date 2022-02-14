
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int next; } ;
typedef TYPE_1__ dshash_table_item ;
struct TYPE_9__ {int area; } ;
typedef TYPE_2__ dshash_table ;
typedef int dsa_pointer ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,void const*,int ) ;

__attribute__((used)) static inline dshash_table_item *
FUNC_4(dshash_table *VAR_0, const void *VAR_1,
      dsa_pointer VAR_2)
{
 while (FUNC_0(VAR_2))
 {
  dshash_table_item *VAR_3;

  VAR_3 = FUNC_2(VAR_0->area, VAR_2);
  if (FUNC_3(VAR_0, VAR_1, FUNC_1(VAR_3)))
   return VAR_3;
  VAR_2 = VAR_3->next;
 }
 return ((void*)0);
}
