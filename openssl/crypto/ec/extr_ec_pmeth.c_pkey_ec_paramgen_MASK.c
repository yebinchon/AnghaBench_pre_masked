
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * gen_group; } ;
struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef TYPE_2__ EC_PKEY_CTX ;
typedef int EC_KEY ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(EVP_PKEY_CTX *VAR_2, EVP_PKEY *VAR_3)
{
    EC_KEY *VAR_4 = ((void*)0);
    EC_PKEY_CTX *VAR_5 = VAR_2->data;
    int VAR_6;

    if (VAR_5->gen_group == ((void*)0)) {
        FUNC_3(VAR_0, VAR_1);
        return 0;
    }
    VAR_4 = FUNC_1();
    if (VAR_4 == ((void*)0))
        return 0;
    if (!(VAR_6 = FUNC_2(VAR_4, VAR_5->gen_group))
        || !FUNC_5(VAR_6 = FUNC_4(VAR_3, VAR_4)))
        FUNC_0(VAR_4);
    return VAR_6;
}
