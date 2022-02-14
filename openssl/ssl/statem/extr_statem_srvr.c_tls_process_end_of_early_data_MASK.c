
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ early_data_state; TYPE_2__* method; int rlayer; } ;
struct TYPE_8__ {TYPE_1__* ssl3_enc; } ;
struct TYPE_7__ {int (* change_cipher_state ) (TYPE_3__*,int) ;} ;
typedef TYPE_3__ SSL ;
typedef int PACKET ;
typedef int MSG_PROCESS_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int) ;

MSG_PROCESS_RETURN FUNC_4(SSL *VAR_14, PACKET *VAR_15)
{
    if (FUNC_0(VAR_15) != 0) {
        FUNC_2(VAR_14, VAR_5, VAR_11,
                 VAR_12);
        return VAR_2;
    }

    if (VAR_14->early_data_state != VAR_9
            && VAR_14->early_data_state != VAR_10) {
        FUNC_2(VAR_14, VAR_6, VAR_11,
                 VAR_0);
        return VAR_2;
    }





    if (FUNC_1(&VAR_14->rlayer)) {
        FUNC_2(VAR_14, VAR_7,
                 VAR_11,
                 VAR_13);
        return VAR_2;
    }

    VAR_14->early_data_state = VAR_8;
    if (!VAR_14->method->ssl3_enc->change_cipher_state(VAR_14,
                VAR_3 | VAR_4)) {

        return VAR_2;
    }

    return VAR_1;
}
