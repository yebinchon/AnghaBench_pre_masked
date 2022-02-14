
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int X509 ;
typedef int WPACKET ;
struct TYPE_9__ {scalar_t__ group_id; } ;
struct TYPE_10__ {TYPE_1__ s3; } ;
typedef TYPE_2__ SSL ;
typedef int EXT_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,scalar_t__ const**,size_t*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,scalar_t__,int ) ;

EXT_RETURN FUNC_8(SSL *VAR_8, WPACKET *VAR_9,
                                               unsigned int VAR_10, X509 *VAR_11,
                                               size_t VAR_12)
{
    const uint16_t *VAR_13;
    size_t VAR_14, VAR_15, VAR_16 = 1;


    if (VAR_8->s3.group_id == 0)
        return VAR_2;


    FUNC_5(VAR_8, &VAR_13, &VAR_14);
    if (VAR_14 == 0) {
        FUNC_1(VAR_8, VAR_4,
                 VAR_5, VAR_0);
        return VAR_1;
    }


    for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
        uint16_t VAR_17 = VAR_13[VAR_15];

        if (FUNC_7(VAR_8, VAR_17, FUNC_0(VAR_8))
                && FUNC_6(VAR_8, VAR_17, VAR_6)) {
            if (VAR_16) {




                if (VAR_8->s3.group_id == VAR_17)
                    return VAR_2;


                if (!FUNC_3(VAR_9, VAR_7)

                        || !FUNC_4(VAR_9)
                        || !FUNC_4(VAR_9)) {
                    FUNC_1(VAR_8, VAR_4,
                             VAR_5,
                             VAR_0);
                    return VAR_1;
                }

                VAR_16 = 0;
            }
            if (!FUNC_3(VAR_9, VAR_17)) {
                    FUNC_1(VAR_8, VAR_4,
                             VAR_5,
                             VAR_0);
                    return VAR_1;
                }
        }
    }

    if (!FUNC_2(VAR_9) || !FUNC_2(VAR_9)) {
        FUNC_1(VAR_8, VAR_4,
                 VAR_5,
                 VAR_0);
        return VAR_1;
    }

    return VAR_3;
}
