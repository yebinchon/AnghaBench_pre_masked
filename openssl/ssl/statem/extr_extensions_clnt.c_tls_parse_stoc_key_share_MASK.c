
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef unsigned int uint16_t ;
typedef int X509 ;
struct TYPE_9__ {int * pkey; } ;
struct TYPE_10__ {unsigned int group_id; int * peer_tmp; TYPE_1__ tmp; } ;
struct TYPE_11__ {TYPE_2__ s3; } ;
typedef TYPE_3__ SSL ;
typedef int PACKET ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned int*) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (TYPE_3__*,int ,int ,int ) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int *,int *,int) ;
 int FUNC_10 (TYPE_3__*,unsigned int const**,size_t*) ;
 int FUNC_11 (TYPE_3__*,unsigned int,int ) ;

int FUNC_12(SSL *VAR_11, PACKET *VAR_12, unsigned int VAR_13, X509 *VAR_14,
                             size_t VAR_15)
{

    unsigned int VAR_16;
    PACKET VAR_17;
    EVP_PKEY *VAR_18 = VAR_11->s3.tmp.pkey, *VAR_19 = ((void*)0);


    if (VAR_18 == ((void*)0) || VAR_11->s3.peer_tmp != ((void*)0)) {
        FUNC_8(VAR_11, VAR_4, VAR_6,
                 VAR_0);
        return 0;
    }

    if (!FUNC_6(VAR_12, &VAR_16)) {
        FUNC_8(VAR_11, VAR_2, VAR_6,
                 VAR_9);
        return 0;
    }

    if ((VAR_13 & VAR_5) != 0) {
        const uint16_t *VAR_20 = ((void*)0);
        size_t VAR_21, VAR_22;

        if (FUNC_7(VAR_12) != 0) {
            FUNC_8(VAR_11, VAR_2, VAR_6,
                     VAR_9);
            return 0;
        }





        if (VAR_16 == VAR_11->s3.group_id) {
            FUNC_8(VAR_11, VAR_3,
                     VAR_6, VAR_8);
            return 0;
        }


        FUNC_10(VAR_11, &VAR_20, &VAR_22);
        for (VAR_21 = 0; VAR_21 < VAR_22; VAR_21++) {
            if (VAR_16 == VAR_20[VAR_21])
                break;
        }
        if (VAR_21 >= VAR_22
                || !FUNC_11(VAR_11, VAR_16, VAR_10)) {
            FUNC_8(VAR_11, VAR_3,
                     VAR_6, VAR_8);
            return 0;
        }

        VAR_11->s3.group_id = VAR_16;
        FUNC_1(VAR_11->s3.tmp.pkey);
        VAR_11->s3.tmp.pkey = ((void*)0);
        return 1;
    }

    if (VAR_16 != VAR_11->s3.group_id) {




        FUNC_8(VAR_11, VAR_3, VAR_6,
                 VAR_8);
        return 0;
    }

    if (!FUNC_4(VAR_12, &VAR_17)
            || FUNC_7(&VAR_17) == 0) {
        FUNC_8(VAR_11, VAR_2, VAR_6,
                 VAR_9);
        return 0;
    }

    VAR_19 = FUNC_2();
    if (VAR_19 == ((void*)0) || FUNC_0(VAR_19, VAR_18) <= 0) {
        FUNC_8(VAR_11, VAR_4, VAR_6,
                 VAR_1);
        return 0;
    }
    if (!FUNC_3(VAR_19, FUNC_5(&VAR_17),
                                        FUNC_7(&VAR_17))) {
        FUNC_8(VAR_11, VAR_3, VAR_6,
                 VAR_7);
        FUNC_1(VAR_19);
        return 0;
    }

    if (FUNC_9(VAR_11, VAR_18, VAR_19, 1) == 0) {

        FUNC_1(VAR_19);
        return 0;
    }
    VAR_11->s3.peer_tmp = VAR_19;


    return 1;
}
