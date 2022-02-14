
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* ameth; } ;
struct TYPE_8__ {int (* set_pub_key ) (TYPE_2__*,unsigned char const*,size_t) ;} ;
typedef TYPE_2__ EVP_PKEY ;
typedef int ENGINE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,int *,int,int *,int) ;
 int FUNC_4 (TYPE_2__*,unsigned char const*,size_t) ;

EVP_PKEY *FUNC_5(int VAR_3, ENGINE *VAR_4,
                                      const unsigned char *VAR_5,
                                      size_t VAR_6)
{
    EVP_PKEY *VAR_7 = FUNC_1();

    if (VAR_7 == ((void*)0)
            || !FUNC_3(VAR_7, VAR_4, VAR_3, ((void*)0), -1)) {

        goto err;
    }

    if (VAR_7->ameth->set_pub_key == ((void*)0)) {
        FUNC_2(VAR_0,
               VAR_2);
        goto err;
    }

    if (!VAR_7->ameth->set_pub_key(VAR_7, VAR_5, VAR_6)) {
        FUNC_2(VAR_0, VAR_1);
        goto err;
    }

    return VAR_7;

 err:
    FUNC_0(VAR_7);
    return ((void*)0);
}
