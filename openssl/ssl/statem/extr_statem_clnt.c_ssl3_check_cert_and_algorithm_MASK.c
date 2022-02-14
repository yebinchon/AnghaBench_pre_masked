
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* new_cipher; } ;
struct TYPE_14__ {int * peer_tmp; TYPE_2__ tmp; } ;
struct TYPE_16__ {TYPE_4__ s3; TYPE_3__* session; } ;
struct TYPE_15__ {long amask; } ;
struct TYPE_13__ {int peer; } ;
struct TYPE_11__ {long algorithm_mkey; long algorithm_auth; } ;
typedef TYPE_5__ SSL_CERT_LOOKUP ;
typedef TYPE_6__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long VAR_8 ;
 int VAR_9 ;
 long VAR_10 ;
 long VAR_11 ;
 long VAR_12 ;
 int FUNC_0 (TYPE_6__*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (int ,size_t*) ;
 scalar_t__ FUNC_3 (int ,TYPE_6__*) ;

int FUNC_4(SSL *VAR_13)
{
    const SSL_CERT_LOOKUP *VAR_14;
    size_t VAR_15;
    long VAR_16, VAR_17;

    VAR_16 = VAR_13->s3.tmp.new_cipher->algorithm_mkey;
    VAR_17 = VAR_13->s3.tmp.new_cipher->algorithm_auth;


    if (!(VAR_17 & VAR_8))
        return 1;


    VAR_14 = FUNC_2(FUNC_1(VAR_13->session->peer), &VAR_15);


    if (VAR_14 == ((void*)0) || (VAR_17 & VAR_14->amask) == 0) {
        FUNC_0(VAR_13, VAR_1,
                 VAR_3,
                 VAR_7);
        return 0;
    }


    if (VAR_14->amask & VAR_9) {
        if (FUNC_3(VAR_13->session->peer, VAR_13))
            return 1;
        FUNC_0(VAR_13, VAR_1,
                 VAR_3, VAR_5);
        return 0;
    }


    if (VAR_16 & (VAR_11 | VAR_12) && VAR_15 != VAR_4) {
        FUNC_0(VAR_13, VAR_1,
                 VAR_3,
                 VAR_6);
        return 0;
    }


    if ((VAR_16 & VAR_10) && (VAR_13->s3.peer_tmp == ((void*)0))) {
        FUNC_0(VAR_13, VAR_2, VAR_3,
                 VAR_0);
        return 0;
    }


    return 1;
}
