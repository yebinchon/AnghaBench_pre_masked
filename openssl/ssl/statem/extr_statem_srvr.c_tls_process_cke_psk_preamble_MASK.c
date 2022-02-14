
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int psk ;
struct TYPE_9__ {size_t psklen; int * psk; } ;
struct TYPE_10__ {TYPE_2__ tmp; } ;
struct TYPE_11__ {size_t (* psk_server_callback ) (TYPE_4__*,int ,unsigned char*,int) ;TYPE_3__ s3; TYPE_1__* session; } ;
struct TYPE_8__ {int psk_identity; } ;
typedef TYPE_4__ SSL ;
typedef int PACKET ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,size_t) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (unsigned char*,size_t) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (TYPE_4__*,int ,int ,int ) ;
 size_t FUNC_7 (TYPE_4__*,int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_8(SSL *VAR_12, PACKET *VAR_13)
{

    unsigned char VAR_14[VAR_3];
    size_t VAR_15;
    PACKET VAR_16;

    if (!FUNC_3(VAR_13, &VAR_16)) {
        FUNC_6(VAR_12, VAR_4, VAR_7,
                 VAR_9);
        return 0;
    }
    if (FUNC_4(&VAR_16) > VAR_2) {
        FUNC_6(VAR_12, VAR_4, VAR_7,
                 VAR_8);
        return 0;
    }
    if (VAR_12->psk_server_callback == ((void*)0)) {
        FUNC_6(VAR_12, VAR_5, VAR_7,
                 VAR_11);
        return 0;
    }

    if (!FUNC_5(&VAR_16, &VAR_12->session->psk_identity)) {
        FUNC_6(VAR_12, VAR_5, VAR_7,
                 VAR_0);
        return 0;
    }

    VAR_15 = VAR_12->psk_server_callback(VAR_12, VAR_12->session->psk_identity,
                                    VAR_14, sizeof(VAR_14));

    if (VAR_15 > VAR_3) {
        FUNC_6(VAR_12, VAR_5, VAR_7,
                 VAR_0);
        return 0;
    } else if (VAR_15 == 0) {



        FUNC_6(VAR_12, VAR_6,
                 VAR_7,
                 VAR_10);
        return 0;
    }

    FUNC_1(VAR_12->s3.tmp.psk);
    VAR_12->s3.tmp.psk = FUNC_2(VAR_14, VAR_15);
    FUNC_0(VAR_14, VAR_15);

    if (VAR_12->s3.tmp.psk == ((void*)0)) {
        FUNC_6(VAR_12, VAR_5,
                 VAR_7, VAR_1);
        return 0;
    }

    VAR_12->s3.tmp.psklen = VAR_15;

    return 1;






}
