
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int X509 ;
typedef int WPACKET ;
struct TYPE_11__ {scalar_t__ use_etm; } ;
struct TYPE_9__ {TYPE_1__* new_cipher; } ;
struct TYPE_10__ {TYPE_2__ tmp; } ;
struct TYPE_12__ {TYPE_4__ ext; TYPE_3__ s3; } ;
struct TYPE_8__ {scalar_t__ algorithm_mac; scalar_t__ algorithm_enc; } ;
typedef TYPE_5__ SSL ;
typedef int EXT_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_5__*,int ,int ,int ) ;
 int VAR_10 ;
 int FUNC_1 (int *,int ) ;

EXT_RETURN FUNC_2(SSL *VAR_11, WPACKET *VAR_12, unsigned int VAR_13,
                                  X509 *VAR_14, size_t VAR_15)
{
    if (!VAR_11->ext.use_etm)
        return VAR_2;





    if (VAR_11->s3.tmp.new_cipher->algorithm_mac == VAR_5
        || VAR_11->s3.tmp.new_cipher->algorithm_enc == VAR_7
        || VAR_11->s3.tmp.new_cipher->algorithm_enc == VAR_8
        || VAR_11->s3.tmp.new_cipher->algorithm_enc == VAR_9) {
        VAR_11->ext.use_etm = 0;
        return VAR_2;
    }

    if (!FUNC_1(VAR_12, VAR_10)
            || !FUNC_1(VAR_12, 0)) {
        FUNC_0(VAR_11, VAR_4, VAR_6,
                 VAR_0);
        return VAR_1;
    }

    return VAR_3;
}
