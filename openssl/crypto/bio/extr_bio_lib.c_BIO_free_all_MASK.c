
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int references; struct TYPE_4__* next_bio; } ;
typedef TYPE_1__ BIO ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(BIO *VAR_0)
{
    BIO *VAR_1;
    int VAR_2;

    while (VAR_0 != ((void*)0)) {
        VAR_1 = VAR_0;
        VAR_2 = VAR_1->references;
        VAR_0 = VAR_0->next_bio;
        FUNC_0(VAR_1);

        if (VAR_2 > 1)
            break;
    }
}
