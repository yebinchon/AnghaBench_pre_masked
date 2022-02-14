
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ameth; } ;
struct TYPE_5__ {int (* get_pub_key ) (TYPE_2__ const*,unsigned char*,size_t*) ;} ;
typedef TYPE_2__ EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__ const*,unsigned char*,size_t*) ;

int FUNC_2(const EVP_PKEY *VAR_3, unsigned char *VAR_4,
                                size_t *VAR_5)
{
     if (VAR_3->ameth->get_pub_key == ((void*)0)) {
        FUNC_0(VAR_0,
               VAR_2);
        return 0;
    }

    if (!VAR_3->ameth->get_pub_key(VAR_3, VAR_4, VAR_5)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    return 1;
}
