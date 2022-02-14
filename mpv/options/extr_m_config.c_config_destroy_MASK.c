
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_config {TYPE_1__* shadow; TYPE_1__* data; } ;
struct TYPE_2__ {scalar_t__ num_listeners; int lock; struct TYPE_2__* data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct m_config*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
    struct m_config *VAR_1 = VAR_0;
    FUNC_1(VAR_1);

    FUNC_3(VAR_1->data);

    if (VAR_1->shadow) {

        FUNC_0(VAR_1->shadow->num_listeners == 0);
        FUNC_3(VAR_1->shadow->data);
        FUNC_2(&VAR_1->shadow->lock);
        FUNC_3(VAR_1->shadow);
    }
}
