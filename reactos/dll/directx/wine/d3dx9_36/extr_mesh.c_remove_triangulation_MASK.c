
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct triangulation_array {size_t count; int * items; } ;
struct TYPE_2__ {int items; } ;
struct triangulation {TYPE_1__ vertex_stack; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct triangulation*,struct triangulation*,int) ;

__attribute__((used)) static void FUNC_3(struct triangulation_array *VAR_0, struct triangulation *VAR_1)
{
    FUNC_1(FUNC_0(), 0, VAR_1->vertex_stack.items);
    FUNC_2(VAR_1, VAR_1 + 1, (char*)&VAR_0->items[VAR_0->count] - (char*)(VAR_1 + 1));
    VAR_0->count--;
}
