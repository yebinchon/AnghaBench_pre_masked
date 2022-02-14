
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int references; int save_parameters; int * lock; void* save_type; void* type; } ;
typedef TYPE_1__ EVP_PKEY ;


 int * FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;

EVP_PKEY *FUNC_4(void)
{
    EVP_PKEY *VAR_3 = FUNC_3(sizeof(*VAR_3));

    if (VAR_3 == ((void*)0)) {
        FUNC_1(VAR_1, VAR_0);
        return ((void*)0);
    }
    VAR_3->type = VAR_2;
    VAR_3->save_type = VAR_2;
    VAR_3->references = 1;
    VAR_3->save_parameters = 1;
    VAR_3->lock = FUNC_0();
    if (VAR_3->lock == ((void*)0)) {
        FUNC_1(VAR_1, VAR_0);
        FUNC_2(VAR_3);
        return ((void*)0);
    }
    return VAR_3;
}
