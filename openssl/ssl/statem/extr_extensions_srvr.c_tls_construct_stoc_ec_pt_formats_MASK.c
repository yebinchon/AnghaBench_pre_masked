
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int X509 ;
typedef int WPACKET ;
struct TYPE_10__ {int * peer_ecpointformats; } ;
struct TYPE_11__ {TYPE_4__* new_cipher; } ;
struct TYPE_9__ {TYPE_3__ tmp; } ;
struct TYPE_13__ {TYPE_2__ ext; TYPE_1__ s3; } ;
struct TYPE_12__ {unsigned long algorithm_mkey; unsigned long algorithm_auth; } ;
typedef TYPE_5__ SSL ;
typedef int EXT_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (TYPE_5__*,int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char const*,size_t) ;
 int FUNC_5 (TYPE_5__*,unsigned char const**,size_t*) ;

EXT_RETURN FUNC_6(SSL *VAR_9, WPACKET *VAR_10,
                                            unsigned int VAR_11, X509 *VAR_12,
                                            size_t VAR_13)
{
    unsigned long VAR_14 = VAR_9->s3.tmp.new_cipher->algorithm_mkey;
    unsigned long VAR_15 = VAR_9->s3.tmp.new_cipher->algorithm_auth;
    int VAR_16 = ((VAR_14 & VAR_7) || (VAR_15 & VAR_6))
                    && (VAR_9->ext.peer_ecpointformats != ((void*)0));
    const unsigned char *VAR_17;
    size_t VAR_18;

    if (!VAR_16)
        return VAR_2;

    FUNC_5(VAR_9, &VAR_17, &VAR_18);
    if (!FUNC_2(VAR_10, VAR_8)
            || !FUNC_3(VAR_10)
            || !FUNC_4(VAR_10, VAR_17, VAR_18)
            || !FUNC_1(VAR_10)) {
        FUNC_0(VAR_9, VAR_4,
                 VAR_5, VAR_0);
        return VAR_1;
    }

    return VAR_3;
}
