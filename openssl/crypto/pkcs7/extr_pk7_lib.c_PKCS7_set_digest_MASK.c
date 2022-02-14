
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int type; } ;
struct TYPE_8__ {TYPE_2__* digest; } ;
struct TYPE_11__ {TYPE_1__ d; } ;
struct TYPE_10__ {int algorithm; TYPE_7__* parameter; } ;
struct TYPE_9__ {TYPE_3__* md; } ;
typedef TYPE_4__ PKCS7 ;
typedef int EVP_MD ;


 TYPE_7__* FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;

int FUNC_5(PKCS7 *VAR_4, const EVP_MD *VAR_5)
{
    if (FUNC_3(VAR_4)) {
        if ((VAR_4->d.digest->md->parameter = FUNC_0()) == ((void*)0)) {
            FUNC_4(VAR_1, VAR_0);
            return 0;
        }
        VAR_4->d.digest->md->parameter->type = VAR_3;
        VAR_4->d.digest->md->algorithm = FUNC_2(FUNC_1(VAR_5));
        return 1;
    }

    FUNC_4(VAR_1, VAR_2);
    return 1;
}
