
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int n_items; scalar_t__ (* compare_func ) (int ,int ) ;TYPE_1__* items; } ;
struct TYPE_6__ {int data; } ;
typedef TYPE_2__ Prioq ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,unsigned int,unsigned int) ;

__attribute__((used)) static unsigned FUNC_4(Prioq *VAR_0, unsigned VAR_1) {
        FUNC_0(VAR_0);

        for (;;) {
                unsigned VAR_2, VAR_3, VAR_4;

                VAR_3 = (VAR_1+1)*2;
                VAR_2 = VAR_3-1;

                if (VAR_2 >= VAR_0->n_items)
                        break;

                if (VAR_0->compare_func(VAR_0->items[VAR_2].data, VAR_0->items[VAR_1].data) < 0)



                        VAR_4 = VAR_2;
                else
                        VAR_4 = VAR_1;

                if (VAR_3 < VAR_0->n_items &&
                    VAR_0->compare_func(VAR_0->items[VAR_3].data, VAR_0->items[VAR_4].data) < 0)



                        VAR_4 = VAR_3;



                if (VAR_4 == VAR_1)

                        break;

                FUNC_3(VAR_0, VAR_1, VAR_4);
                VAR_1 = VAR_4;
        }

        return VAR_1;
}
