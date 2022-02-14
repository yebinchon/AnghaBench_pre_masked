
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ status_type; } ;
struct TYPE_13__ {int verify_mode; int * ct_validation_callback; TYPE_3__* ctx; TYPE_1__ ext; } ;
struct TYPE_11__ {int (* status_cb ) (TYPE_4__*,int ) ;int status_arg; } ;
struct TYPE_12__ {TYPE_2__ ext; } ;
typedef TYPE_4__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*,int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ) ;

int FUNC_4(SSL *VAR_7)
{




    if (!FUNC_1(VAR_7)) {

        return 0;
    }






    if (VAR_7->ext.status_type != VAR_6
            && VAR_7->ctx->ext.status_cb != ((void*)0)) {
        int VAR_8 = VAR_7->ctx->ext.status_cb(VAR_7, VAR_7->ctx->ext.status_arg);

        if (VAR_8 == 0) {
            FUNC_0(VAR_7, VAR_1,
                     VAR_3,
                     VAR_4);
            return 0;
        }
        if (VAR_8 < 0) {
            FUNC_0(VAR_7, VAR_2,
                     VAR_3,
                     VAR_0);
            return 0;
        }
    }

    if (VAR_7->ct_validation_callback != ((void*)0)) {

        if (!FUNC_2(VAR_7) && (VAR_7->verify_mode & VAR_5)) {

            return 0;
        }
    }


    return 1;
}
