
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lwan_array {size_t elements; struct coro_defer* base; } ;
struct TYPE_4__ {int data; int (* func ) (int ) ;} ;
struct TYPE_3__ {int data2; int data1; int (* func ) (int ,int ) ;} ;
struct coro_defer {TYPE_2__ one; TYPE_1__ two; scalar_t__ has_two_args; } ;
struct coro {int defer; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct coro *VAR_0, size_t VAR_1)
{
    struct lwan_array *VAR_2 = (struct lwan_array *)&VAR_0->defer;
    struct coro_defer *VAR_3 = VAR_2->base;

    for (size_t VAR_4 = VAR_2->elements; VAR_4 != VAR_1; VAR_4--) {
        struct coro_defer *VAR_5 = &VAR_3[VAR_4 - 1];

        if (VAR_5->has_two_args)
            VAR_5->two.func(VAR_5->two.data1, VAR_5->two.data2);
        else
            VAR_5->one.func(VAR_5->one.data);
    }

    VAR_2->elements = VAR_1;
}
