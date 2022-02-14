
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_14__ {scalar_t__ version; int (* smeth ) () ;} ;
typedef TYPE_3__ version_info ;
struct TYPE_16__ {scalar_t__ version; } ;
struct TYPE_15__ {scalar_t__ version; TYPE_2__* ctx; } ;
struct TYPE_13__ {TYPE_1__* method; } ;
struct TYPE_12__ {scalar_t__ version; } ;
struct TYPE_11__ {scalar_t__ version; } ;
typedef TYPE_4__ SSL ;


 TYPE_10__* FUNC_0 () ;
 TYPE_9__* FUNC_1 () ;
 TYPE_3__* VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 () ;
 TYPE_3__* VAR_1 ;

int FUNC_4(SSL *VAR_2)
{
    const version_info *VAR_3;
    const version_info *VAR_4;






    if (VAR_2->version == VAR_2->ctx->method->version)
        return 1;





    if (VAR_2->ctx->method->version == FUNC_1()->version)
        VAR_4 = VAR_1;
    else if (VAR_2->ctx->method->version == FUNC_0()->version)
        VAR_4 = VAR_0;
    else {

        return 0;
    }

    for (VAR_3 = VAR_4; VAR_3->version != 0; ++VAR_3) {
        if (VAR_3->smeth != ((void*)0) && FUNC_2(VAR_2, VAR_3->smeth()) == 0)
            return VAR_2->version == VAR_3->version;
    }
    return 0;
}
