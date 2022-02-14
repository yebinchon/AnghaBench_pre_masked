
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int attributes; int lock; int references; } ;
typedef TYPE_1__ EVP_PKEY ;


 int FUNC_0 (int *,int*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_6 (int ,int ) ;

void FUNC_7(EVP_PKEY *VAR_1)
{
    int VAR_2;

    if (VAR_1 == ((void*)0))
        return;

    FUNC_0(&VAR_1->references, &VAR_2, VAR_1->lock);
    FUNC_5("EVP_PKEY", VAR_1);
    if (VAR_2 > 0)
        return;
    FUNC_4(VAR_2 < 0);
    FUNC_2(VAR_1);
    FUNC_1(VAR_1->lock);
    FUNC_6(VAR_1->attributes, VAR_0);
    FUNC_3(VAR_1);
}
