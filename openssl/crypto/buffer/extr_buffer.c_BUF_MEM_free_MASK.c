
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int max; int * data; } ;
typedef TYPE_1__ BUF_MEM ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(BUF_MEM *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return;
    if (VAR_1->data != ((void*)0)) {
        if (VAR_1->flags & VAR_0)
            FUNC_2(VAR_1->data, VAR_1->max);
        else
            FUNC_0(VAR_1->data, VAR_1->max);
    }
    FUNC_1(VAR_1);
}
