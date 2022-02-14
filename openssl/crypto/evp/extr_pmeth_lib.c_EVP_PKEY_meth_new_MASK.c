
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pkey_id; int flags; } ;
typedef TYPE_1__ EVP_PKEY_METHOD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int) ;

EVP_PKEY_METHOD *FUNC_2(int VAR_3, int VAR_4)
{
    EVP_PKEY_METHOD *VAR_5;

    VAR_5 = FUNC_1(sizeof(*VAR_5));
    if (VAR_5 == ((void*)0)) {
        FUNC_0(VAR_1, VAR_0);
        return ((void*)0);
    }

    VAR_5->pkey_id = VAR_3;
    VAR_5->flags = VAR_4 | VAR_2;
    return VAR_5;
}
