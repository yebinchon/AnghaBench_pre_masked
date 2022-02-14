
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int * new_cipher; } ;
struct TYPE_12__ {int change_cipher_spec; TYPE_1__ tmp; } ;
struct TYPE_14__ {scalar_t__ version; TYPE_3__* d1; TYPE_2__ s3; } ;
struct TYPE_13__ {int handshake_read_seq; } ;
typedef TYPE_4__ SSL ;
typedef int PACKET ;
typedef int MSG_PROCESS_RETURN ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_4__*) ;

MSG_PROCESS_RETURN FUNC_7(SSL *VAR_13, PACKET *VAR_14)
{
    size_t VAR_15;

    VAR_15 = FUNC_1(VAR_14);





    if (FUNC_2(VAR_13)) {
        if ((VAR_13->version == VAR_1
             && VAR_15 != VAR_2 + 1)
            || (VAR_13->version != VAR_1
                && VAR_15 != VAR_2 - 1)) {
            FUNC_4(VAR_13, VAR_7,
                     VAR_10,
                    VAR_11);
            return VAR_5;
        }
    } else {
        if (VAR_15 != 0) {
            FUNC_4(VAR_13, VAR_7,
                     VAR_10,
                     VAR_11);
            return VAR_5;
        }
    }


    if (VAR_13->s3.tmp.new_cipher == ((void*)0)) {
        FUNC_4(VAR_13, VAR_9,
                 VAR_10, VAR_12);
        return VAR_5;
    }

    VAR_13->s3.change_cipher_spec = 1;
    if (!FUNC_6(VAR_13)) {
        FUNC_4(VAR_13, VAR_8, VAR_10,
                 VAR_3);
        return VAR_5;
    }

    if (FUNC_2(VAR_13)) {
        FUNC_5(VAR_13, VAR_6);

        if (VAR_13->version == VAR_1)
            VAR_13->d1->handshake_read_seq++;







        FUNC_0(FUNC_3(VAR_13), VAR_0, 1, ((void*)0));

    }

    return VAR_4;
}
