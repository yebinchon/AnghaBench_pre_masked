
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int alloc_len; int buffer; scalar_t__ secure; int attached; } ;
typedef TYPE_1__ RAND_POOL ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(RAND_POOL *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;







    if (!VAR_0->attached) {
        if (VAR_0->secure)
            FUNC_2(VAR_0->buffer, VAR_0->alloc_len);
        else
            FUNC_0(VAR_0->buffer, VAR_0->alloc_len);
    }

    FUNC_1(VAR_0);
}
