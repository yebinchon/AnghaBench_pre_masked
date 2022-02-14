
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* new_cipher; } ;
struct TYPE_11__ {TYPE_2__ tmp; } ;
struct TYPE_12__ {TYPE_3__ s3; } ;
struct TYPE_9__ {int algorithm_mkey; } ;
typedef TYPE_4__ SSL ;
typedef int PACKET ;
typedef int MSG_PROCESS_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_4__*) ;

MSG_PROCESS_RETURN FUNC_4(SSL *VAR_8, PACKET *VAR_9)
{
    if (FUNC_0(VAR_9) > 0) {

        FUNC_2(VAR_8, VAR_2, VAR_4,
                 VAR_5);
        return VAR_0;
    }

    if (VAR_8->s3.tmp.new_cipher->algorithm_mkey & VAR_7) {
        if (FUNC_1(VAR_8) <= 0) {
            FUNC_2(VAR_8, VAR_3, VAR_4,
                     VAR_6);
            return VAR_0;
        }
    }


    if (!FUNC_3(VAR_8)) {

        return VAR_0;
    }

    return VAR_1;
}
