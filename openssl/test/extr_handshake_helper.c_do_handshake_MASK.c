
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ result; } ;
struct TYPE_8__ {scalar_t__ handshake_mode; int resume_extra; int extra; } ;
typedef TYPE_1__ SSL_TEST_CTX ;
typedef int SSL_SESSION ;
typedef int SSL_CTX ;
typedef TYPE_2__ HANDSHAKE_RESULT ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_2 (int *,int *,int *,TYPE_1__ const*,int *,int *,int *,int **,int **) ;

HANDSHAKE_RESULT *FUNC_3(SSL_CTX *VAR_4, SSL_CTX *VAR_5,
                               SSL_CTX *VAR_6, SSL_CTX *VAR_7,
                               SSL_CTX *VAR_8,
                               const SSL_TEST_CTX *VAR_9)
{
    HANDSHAKE_RESULT *VAR_10;
    SSL_SESSION *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);

    VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6,
                                   VAR_9, &VAR_9->extra,
                                   ((void*)0), ((void*)0), &VAR_11, &VAR_12);
    if (VAR_10 == ((void*)0)
            || VAR_9->handshake_mode != VAR_1
            || VAR_10->result == VAR_2)
        goto end;

    if (VAR_10->result != VAR_3) {
        VAR_10->result = VAR_0;
        goto end;
    }

    FUNC_0(VAR_10);

    VAR_10 = FUNC_2(VAR_7, ((void*)0), VAR_8,
                                   VAR_9, &VAR_9->resume_extra,
                                   VAR_11, VAR_12, ((void*)0), ((void*)0));
 end:
    FUNC_1(VAR_11);
    FUNC_1(VAR_12);
    return VAR_10;
}
