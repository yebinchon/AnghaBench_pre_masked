
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int exporterlabel ;
struct TYPE_9__ {scalar_t__ max_early_data; } ;
struct TYPE_12__ {TYPE_1__ ext; } ;
struct TYPE_11__ {scalar_t__ max_early_data; unsigned char* early_exporter_master_secret; TYPE_8__* session; TYPE_8__* psksession; int server; } ;
struct TYPE_10__ {int algorithm2; } ;
typedef TYPE_2__ SSL_CIPHER ;
typedef TYPE_3__ SSL ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 scalar_t__ FUNC_0 (int *,unsigned char*,unsigned int*) ;
 scalar_t__ FUNC_1 (int *,int const*,int *) ;
 scalar_t__ FUNC_2 (int *,unsigned char const*,size_t) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 TYPE_2__* FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*,int const*,unsigned char*,unsigned char const*,int,unsigned char*,unsigned int,unsigned char*,size_t,int ) ;

int FUNC_9(SSL *VAR_1, unsigned char *VAR_2, size_t VAR_3,
                                       const char *VAR_4, size_t VAR_5,
                                       const unsigned char *VAR_6,
                                       size_t VAR_7)
{



  static const unsigned char VAR_8[] = "exporter";

    unsigned char VAR_9[VAR_0];
    unsigned char VAR_10[VAR_0], VAR_11[VAR_0];
    const EVP_MD *VAR_12;
    EVP_MD_CTX *VAR_13 = FUNC_4();
    unsigned int VAR_14, VAR_15;
    int VAR_16 = 0;
    const SSL_CIPHER *VAR_17;

    if (VAR_13 == ((void*)0) || !FUNC_6(VAR_1))
        goto err;

    if (!VAR_1->server && VAR_1->max_early_data > 0
            && VAR_1->session->ext.max_early_data == 0)
        VAR_17 = FUNC_5(VAR_1->psksession);
    else
        VAR_17 = FUNC_5(VAR_1->session);

    VAR_12 = FUNC_7(VAR_17->algorithm2);
    if (FUNC_1(VAR_13, VAR_12, ((void*)0)) <= 0
            || FUNC_2(VAR_13, VAR_6, VAR_7) <= 0
            || FUNC_0(VAR_13, VAR_10, &VAR_14) <= 0
            || FUNC_1(VAR_13, VAR_12, ((void*)0)) <= 0
            || FUNC_0(VAR_13, VAR_11, &VAR_15) <= 0
            || !FUNC_8(VAR_1, VAR_12, VAR_1->early_exporter_master_secret,
                                  (const unsigned char *)VAR_4, VAR_5,
                                  VAR_11, VAR_15, VAR_9, VAR_14, 0)
            || !FUNC_8(VAR_1, VAR_12, VAR_9, VAR_8,
                                  sizeof(VAR_8) - 1, VAR_10, VAR_14,
                                  VAR_2, VAR_3, 0))
        goto err;

    VAR_16 = 1;
 err:
    FUNC_3(VAR_13);
    return VAR_16;
}
