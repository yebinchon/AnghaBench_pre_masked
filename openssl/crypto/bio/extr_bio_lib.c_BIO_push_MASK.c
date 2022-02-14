
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* prev_bio; struct TYPE_7__* next_bio; } ;
typedef TYPE_1__ BIO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ,TYPE_1__*) ;

BIO *FUNC_1(BIO *VAR_1, BIO *VAR_2)
{
    BIO *VAR_3;

    if (VAR_1 == ((void*)0))
        return VAR_2;
    VAR_3 = VAR_1;
    while (VAR_3->next_bio != ((void*)0))
        VAR_3 = VAR_3->next_bio;
    VAR_3->next_bio = VAR_2;
    if (VAR_2 != ((void*)0))
        VAR_2->prev_bio = VAR_3;

    FUNC_0(VAR_1, VAR_0, 0, VAR_3);
    return VAR_1;
}
