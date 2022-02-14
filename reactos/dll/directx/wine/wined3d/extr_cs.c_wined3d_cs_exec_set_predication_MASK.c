
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_cs_set_predication {int value; int predicate; } ;
struct TYPE_2__ {int predicate_value; int predicate; } ;
struct wined3d_cs {TYPE_1__ state; } ;



__attribute__((used)) static void FUNC_0(struct wined3d_cs *VAR_0, const void *VAR_1)
{
    const struct wined3d_cs_set_predication *VAR_2 = VAR_1;

    VAR_0->state.predicate = VAR_2->predicate;
    VAR_0->state.predicate_value = VAR_2->value;
}
