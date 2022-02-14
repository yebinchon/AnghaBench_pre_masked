
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int X509 ;
typedef int WPACKET ;
struct TYPE_8__ {int * pkey; } ;
struct TYPE_9__ {TYPE_1__ tmp; int group_id; int * peer_tmp; } ;
struct TYPE_10__ {scalar_t__ hello_retry_request; TYPE_2__ s3; int hit; } ;
typedef TYPE_3__ SSL ;
typedef int EXT_RETURN ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *,unsigned char**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (unsigned char*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ) ;
 int VAR_9 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned char*,size_t) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int *,int *,int) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*,int *,int ) ;

EXT_RETURN FUNC_11(SSL *VAR_10, WPACKET *VAR_11,
                                        unsigned int VAR_12, X509 *VAR_13,
                                        size_t VAR_14)
{

    unsigned char *VAR_15;
    size_t VAR_16 = 0;
    EVP_PKEY *VAR_17 = VAR_10->s3.peer_tmp, *VAR_18 = ((void*)0);

    if (VAR_10->hello_retry_request == VAR_8) {
        if (VAR_17 != ((void*)0)) {

            return VAR_4;
        }
        if (!FUNC_5(VAR_11, VAR_9)
                || !FUNC_6(VAR_11)
                || !FUNC_5(VAR_11, VAR_10->s3.group_id)
                || !FUNC_4(VAR_11)) {
            FUNC_3(VAR_10, VAR_6,
                     VAR_7,
                     VAR_1);
            return VAR_3;
        }

        return VAR_5;
    }

    if (VAR_17 == ((void*)0)) {

        if (!VAR_10->hit || !FUNC_10(VAR_10, ((void*)0), 0)) {
            FUNC_3(VAR_10, VAR_6,
                     VAR_7, VAR_1);
            return VAR_3;
        }
        return VAR_4;
    }

    if (!FUNC_5(VAR_11, VAR_9)
            || !FUNC_6(VAR_11)
            || !FUNC_5(VAR_11, VAR_10->s3.group_id)) {
        FUNC_3(VAR_10, VAR_6,
                 VAR_7, VAR_1);
        return VAR_3;
    }

    VAR_18 = FUNC_9(VAR_17);
    if (VAR_18 == ((void*)0)) {
        FUNC_3(VAR_10, VAR_6, VAR_7,
                 VAR_2);
        return VAR_3;
    }


    VAR_16 = FUNC_1(VAR_18, &VAR_15);
    if (VAR_16 == 0) {
        FUNC_3(VAR_10, VAR_6, VAR_7,
                 VAR_0);
        FUNC_0(VAR_18);
        return VAR_3;
    }

    if (!FUNC_7(VAR_11, VAR_15, VAR_16)
            || !FUNC_4(VAR_11)) {
        FUNC_3(VAR_10, VAR_6, VAR_7,
                 VAR_1);
        FUNC_0(VAR_18);
        FUNC_2(VAR_15);
        return VAR_3;
    }
    FUNC_2(VAR_15);


    VAR_10->s3.tmp.pkey = VAR_18;
    if (FUNC_8(VAR_10, VAR_18, VAR_17, 1) == 0) {

        return VAR_3;
    }
    return VAR_5;



}
