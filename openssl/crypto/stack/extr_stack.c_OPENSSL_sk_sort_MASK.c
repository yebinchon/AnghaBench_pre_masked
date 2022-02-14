
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sorted; int num; int * comp; int data; } ;
typedef TYPE_1__ OPENSSL_STACK ;


 int FUNC_0 (int ,int,int,int *) ;

void FUNC_1(OPENSSL_STACK *VAR_0)
{
    if (VAR_0 != ((void*)0) && !VAR_0->sorted && VAR_0->comp != ((void*)0)) {
        if (VAR_0->num > 1)
            FUNC_0(VAR_0->data, VAR_0->num, sizeof(void *), VAR_0->comp);
        VAR_0->sorted = 1;
    }
}
