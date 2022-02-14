
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* new_cipher; } ;
struct TYPE_13__ {TYPE_2__ tmp; } ;
struct TYPE_17__ {TYPE_5__* cert; TYPE_3__ s3; scalar_t__ server; } ;
struct TYPE_16__ {int amask; } ;
struct TYPE_15__ {TYPE_4__* pkeys; TYPE_4__* key; } ;
struct TYPE_14__ {int * privatekey; } ;
struct TYPE_11__ {int algorithm_auth; } ;
typedef TYPE_6__ SSL_CERT_LOOKUP ;
typedef TYPE_7__ SSL ;
typedef int SIGALG_LOOKUP ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_7__ const*) ;
 scalar_t__ VAR_4 ;
 int const VAR_5 ;
 TYPE_6__* FUNC_2 (size_t) ;
 int FUNC_3 (int const*,int *) ;
 int * FUNC_4 (int ) ;
 int * VAR_6 ;

__attribute__((used)) static const SIGALG_LOOKUP *FUNC_5(const SSL *VAR_7, int VAR_8)
{
    if (VAR_8 == -1) {
        if (VAR_7->server) {
            size_t VAR_9;


            for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
                const SSL_CERT_LOOKUP *VAR_10 = FUNC_2(VAR_9);

                if (VAR_10->amask & VAR_7->s3.tmp.new_cipher->algorithm_auth) {
                    VAR_8 = VAR_9;
                    break;
                }
            }




            if (VAR_8 == VAR_0 && VAR_7->s3.tmp.new_cipher->algorithm_auth != VAR_4) {
                int VAR_11;

                for (VAR_11 = VAR_1; VAR_11 >= VAR_0;
                     VAR_11--) {
                    if (VAR_7->cert->pkeys[VAR_11].privatekey != ((void*)0)) {
                        VAR_8 = VAR_11;
                        break;
                    }
                }
            }
        } else {
            VAR_8 = VAR_7->cert->key - VAR_7->cert->pkeys;
        }
    }
    if (VAR_8 < 0 || VAR_8 >= (int)FUNC_0(VAR_6))
        return ((void*)0);
    if (FUNC_1(VAR_7) || VAR_8 != VAR_3) {
        const SIGALG_LOOKUP *VAR_12 = FUNC_4(VAR_6[VAR_8]);

        if (!FUNC_3(VAR_12, ((void*)0)))
            return ((void*)0);
        return VAR_12;
    }
    return &VAR_5;
}
