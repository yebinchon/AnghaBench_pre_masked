
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data_type; int data_size; int data; int * key; } ;
typedef TYPE_1__ OSSL_PARAM ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;

void FUNC_2(OSSL_PARAM *VAR_1)
{
    if (VAR_1 != ((void*)0)) {
        OSSL_PARAM *VAR_2;

        for (VAR_2 = VAR_1; VAR_2->key != ((void*)0); VAR_2++)
            ;
        if (VAR_2->data_type == VAR_0)
            FUNC_1(VAR_2->data, VAR_2->data_size);
        FUNC_0(VAR_1);
    }
}
