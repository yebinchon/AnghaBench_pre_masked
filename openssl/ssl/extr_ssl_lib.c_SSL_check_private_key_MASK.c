
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* cert; } ;
struct TYPE_6__ {TYPE_1__* key; } ;
struct TYPE_5__ {int * privatekey; int * x509; } ;
typedef TYPE_3__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(const SSL *VAR_4)
{
    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_1, VAR_0);
        return 0;
    }
    if (VAR_4->cert->key->x509 == ((void*)0)) {
        FUNC_0(VAR_1, VAR_2);
        return 0;
    }
    if (VAR_4->cert->key->privatekey == ((void*)0)) {
        FUNC_0(VAR_1, VAR_3);
        return 0;
    }
    return FUNC_1(VAR_4->cert->key->x509,
                                   VAR_4->cert->key->privatekey);
}
