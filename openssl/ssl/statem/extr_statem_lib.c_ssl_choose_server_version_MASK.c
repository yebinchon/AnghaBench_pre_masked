
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {unsigned int version; TYPE_2__* (* smeth ) () ;} ;
typedef TYPE_1__ version_info ;
struct TYPE_23__ {int legacy_version; TYPE_4__* pre_proc_exts; } ;
struct TYPE_22__ {int parsed; int data; scalar_t__ present; } ;
struct TYPE_21__ {int client_version; unsigned int version; scalar_t__ hello_retry_request; TYPE_2__ const* method; } ;
struct TYPE_20__ {int version; } ;
typedef TYPE_2__ SSL_METHOD ;
typedef TYPE_3__ SSL ;
typedef TYPE_4__ RAW_EXTENSION ;
typedef int PACKET ;
typedef int DOWNGRADE ;
typedef TYPE_5__ CLIENTHELLO_MSG ;


 int VAR_0 ;

 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int*) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 size_t VAR_10 ;

 int FUNC_5 (TYPE_3__*,unsigned int,int *) ;
 TYPE_1__* VAR_11 ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_2__ const*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,unsigned int,TYPE_2__ const**) ;
 TYPE_2__* FUNC_8 () ;
 TYPE_1__* VAR_12 ;
 scalar_t__ FUNC_9 (TYPE_3__*,int,unsigned int) ;

int FUNC_10(SSL *VAR_13, CLIENTHELLO_MSG *VAR_14, DOWNGRADE *VAR_15)
{
    int VAR_16 = VAR_13->method->version;
    int VAR_17 = VAR_14->legacy_version;
    const version_info *VAR_18;
    const version_info *VAR_19;
    int VAR_20 = 0;
    RAW_EXTENSION *VAR_21;

    VAR_13->client_version = VAR_17;

    switch (VAR_16) {
    default:
        if (!FUNC_4(VAR_13)) {
            if (FUNC_9(VAR_13, VAR_17, VAR_13->version) < 0)
                return VAR_7;
            *VAR_15 = VAR_0;







            return 0;
        }





    case 128:
        VAR_19 = VAR_12;
        break;
    case 129:
        VAR_19 = VAR_11;
        break;
    }

    VAR_21 = &VAR_14->pre_proc_exts[VAR_10];


    if (!VAR_21->present && VAR_13->hello_retry_request != VAR_2)
        return VAR_5;

    if (VAR_21->present && !FUNC_3(VAR_13)) {
        unsigned int VAR_22 = 0;
        unsigned int VAR_23 = 0;
        const SSL_METHOD *VAR_24 = ((void*)0);
        PACKET VAR_25;

        VAR_21->parsed = 1;

        if (!FUNC_0(&VAR_21->data, &VAR_25)) {

            return VAR_4;
        }
        if (VAR_17 <= VAR_1)
            return VAR_3;

        while (FUNC_1(&VAR_25, &VAR_22)) {
            if (FUNC_9(VAR_13, VAR_22, VAR_23) <= 0)
                continue;
            if (FUNC_7(VAR_13, VAR_22, &VAR_24))
                VAR_23 = VAR_22;
        }
        if (FUNC_2(&VAR_25) != 0) {

            return VAR_4;
        }

        if (VAR_23 > 0) {
            if (VAR_13->hello_retry_request != VAR_2) {




                if (VAR_23 != VAR_9)
                    return VAR_5;
                return 0;
            }
            FUNC_5(VAR_13, VAR_23, VAR_15);
            VAR_13->version = VAR_23;
            VAR_13->method = VAR_24;
            return 0;
        }
        return VAR_5;
    }





    if (FUNC_9(VAR_13, VAR_17, VAR_9) >= 0)
        VAR_17 = VAR_8;





    for (VAR_18 = VAR_19; VAR_18->version != 0; ++VAR_18) {
        const SSL_METHOD *VAR_26;

        if (VAR_18->smeth == ((void*)0) ||
            FUNC_9(VAR_13, VAR_17, VAR_18->version) < 0)
            continue;
        VAR_26 = VAR_18->smeth();
        if (FUNC_6(VAR_13, VAR_26) == 0) {
            FUNC_5(VAR_13, VAR_18->version, VAR_15);
            VAR_13->version = VAR_18->version;
            VAR_13->method = VAR_26;
            return 0;
        }
        VAR_20 = 1;
    }
    return VAR_20 ? VAR_5 : VAR_6;
}
