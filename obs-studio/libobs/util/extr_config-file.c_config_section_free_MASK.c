
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; struct config_item* array; } ;
struct config_section {int name; TYPE_1__ items; } ;
struct config_item {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct config_item*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_3(struct config_section *VAR_0)
{
 struct config_item *VAR_1 = VAR_0->items.array;
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->items.num; VAR_2++)
  FUNC_1(VAR_1 + VAR_2);

 FUNC_2(&VAR_0->items);
 FUNC_0(VAR_0->name);
}
