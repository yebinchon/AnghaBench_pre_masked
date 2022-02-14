
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int X509 ;
typedef int WPACKET ;
struct TYPE_6__ {scalar_t__ exts; int ids; } ;
struct TYPE_7__ {scalar_t__ status_type; TYPE_1__ ocsp; } ;
struct TYPE_8__ {TYPE_2__ ext; } ;
typedef TYPE_3__ SSL ;
typedef int OCSP_RESPID ;
typedef int EXT_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int,unsigned char**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int,unsigned char**) ;
 int FUNC_7 (int *,unsigned char**) ;
 int FUNC_8 (scalar_t__,unsigned char**) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (int ,int) ;

EXT_RETURN FUNC_11(SSL *VAR_8, WPACKET *VAR_9,
                                             unsigned int VAR_10, X509 *VAR_11,
                                             size_t VAR_12)
{
    int VAR_13;


    if (VAR_11 != ((void*)0))
        return VAR_2;

    if (VAR_8->ext.status_type != VAR_6)
        return VAR_2;

    if (!FUNC_3(VAR_9, VAR_7)

            || !FUNC_5(VAR_9)
            || !FUNC_4(VAR_9, VAR_6)

            || !FUNC_5(VAR_9)) {
        FUNC_0(VAR_8, VAR_4,
                 VAR_5, VAR_0);
        return VAR_1;
    }
    for (VAR_13 = 0; VAR_13 < FUNC_9(VAR_8->ext.ocsp.ids); VAR_13++) {
        unsigned char *VAR_14;
        OCSP_RESPID *VAR_15 = FUNC_10(VAR_8->ext.ocsp.ids, VAR_13);
        int VAR_16 = FUNC_7(VAR_15, ((void*)0));

        if (VAR_16 <= 0

                || !FUNC_6(VAR_9, VAR_16, &VAR_14)
                || FUNC_7(VAR_15, &VAR_14) != VAR_16) {
            FUNC_0(VAR_8, VAR_4,
                     VAR_5,
                     VAR_0);
            return VAR_1;
        }
    }
    if (!FUNC_2(VAR_9)
            || !FUNC_5(VAR_9)) {
        FUNC_0(VAR_8, VAR_4,
                 VAR_5, VAR_0);
        return VAR_1;
    }
    if (VAR_8->ext.ocsp.exts) {
        unsigned char *VAR_17;
        int VAR_18 = FUNC_8(VAR_8->ext.ocsp.exts, ((void*)0));

        if (VAR_18 < 0) {
            FUNC_0(VAR_8, VAR_4,
                     VAR_5,
                     VAR_0);
            return VAR_1;
        }
        if (!FUNC_1(VAR_9, VAR_18, &VAR_17)
                || FUNC_8(VAR_8->ext.ocsp.exts, &VAR_17)
                   != VAR_18) {
            FUNC_0(VAR_8, VAR_4,
                     VAR_5,
                     VAR_0);
            return VAR_1;
       }
    }
    if (!FUNC_2(VAR_9) || !FUNC_2(VAR_9)) {
        FUNC_0(VAR_8, VAR_4,
                 VAR_5, VAR_0);
        return VAR_1;
    }

    return VAR_3;
}
