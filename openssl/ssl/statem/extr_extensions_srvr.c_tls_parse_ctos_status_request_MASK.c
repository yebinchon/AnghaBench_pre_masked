
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_6__ {int * exts; int * ids; } ;
struct TYPE_7__ {scalar_t__ status_type; TYPE_1__ ocsp; } ;
struct TYPE_8__ {TYPE_2__ ext; scalar_t__ hit; } ;
typedef TYPE_3__ SSL ;
typedef int PACKET ;
typedef int OCSP_RESPID ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 unsigned char* FUNC_2 (int *) ;
 unsigned char const* FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned int*) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (TYPE_3__*,int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int * FUNC_8 (int *,unsigned char const**,int) ;
 int * FUNC_9 (int *,unsigned char const**,int) ;
 int * FUNC_10 () ;
 int FUNC_11 (int *,int (*) (int *)) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int ) ;

int FUNC_14(SSL *VAR_9, PACKET *VAR_10, unsigned int VAR_11,
                                  X509 *VAR_12, size_t VAR_13)
{
    PACKET VAR_14, VAR_15;


    if (VAR_9->hit)
        return 1;


    if (VAR_12 != ((void*)0))
        return 1;

    if (!FUNC_4(VAR_10, (unsigned int *)&VAR_9->ext.status_type)) {
        FUNC_7(VAR_9, VAR_2,
                 VAR_4, VAR_5);
        return 0;
    }

    if (VAR_9->ext.status_type != VAR_7) {



        VAR_9->ext.status_type = VAR_6;
        return 1;
    }

    if (!FUNC_5 (VAR_10, &VAR_14)) {
        FUNC_7(VAR_9, VAR_2,
                 VAR_4, VAR_5);
        return 0;
    }





    FUNC_11(VAR_9->ext.ocsp.ids, FUNC_0);
    if (FUNC_6(&VAR_14) > 0) {
        VAR_9->ext.ocsp.ids = FUNC_10();
        if (VAR_9->ext.ocsp.ids == ((void*)0)) {
            FUNC_7(VAR_9, VAR_3,
                     VAR_4, VAR_1);
            return 0;
        }
    } else {
        VAR_9->ext.ocsp.ids = ((void*)0);
    }

    while (FUNC_6(&VAR_14) > 0) {
        OCSP_RESPID *VAR_16;
        PACKET VAR_17;
        const unsigned char *VAR_18;

        if (!FUNC_5(&VAR_14, &VAR_17)
                || FUNC_6(&VAR_17) == 0) {
            FUNC_7(VAR_9, VAR_2,
                     VAR_4, VAR_5);
            return 0;
        }

        VAR_18 = FUNC_2(&VAR_17);

        VAR_16 = FUNC_8(((void*)0), &VAR_18,
                             (int)FUNC_6(&VAR_17));
        if (VAR_16 == ((void*)0)) {
            FUNC_7(VAR_9, VAR_2,
                     VAR_4, VAR_5);
            return 0;
        }

        if (VAR_18 != FUNC_3(&VAR_17)) {
            FUNC_0(VAR_16);
            FUNC_7(VAR_9, VAR_2,
                     VAR_4, VAR_5);

            return 0;
        }

        if (!FUNC_12(VAR_9->ext.ocsp.ids, VAR_16)) {
            FUNC_0(VAR_16);
            FUNC_7(VAR_9, VAR_3,
                     VAR_4, VAR_0);

            return 0;
        }
    }


    if (!FUNC_1(VAR_10, &VAR_15)) {
        FUNC_7(VAR_9, VAR_2,
                 VAR_4, VAR_5);
        return 0;
    }

    if (FUNC_6(&VAR_15) > 0) {
        const unsigned char *VAR_19 = FUNC_2(&VAR_15);

        FUNC_13(VAR_9->ext.ocsp.exts,
                                   VAR_8);
        VAR_9->ext.ocsp.exts =
            FUNC_9(((void*)0), &VAR_19, (int)FUNC_6(&VAR_15));
        if (VAR_9->ext.ocsp.exts == ((void*)0) || VAR_19 != FUNC_3(&VAR_15)) {
            FUNC_7(VAR_9, VAR_2,
                     VAR_4, VAR_5);
            return 0;
        }
    }

    return 1;
}
