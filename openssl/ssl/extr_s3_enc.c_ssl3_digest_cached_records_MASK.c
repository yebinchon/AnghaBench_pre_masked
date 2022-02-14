
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * handshake_buffer; int * handshake_dgst; } ;
struct TYPE_7__ {TYPE_1__ s3; } ;
typedef TYPE_2__ SSL ;
typedef int EVP_MD ;


 int FUNC_0 (int *) ;
 long FUNC_1 (int *,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int const*,int *) ;
 int FUNC_3 (int *,void*,long) ;
 int * FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ) ;
 int * FUNC_6 (TYPE_2__*) ;

int FUNC_7(SSL *VAR_5, int VAR_6)
{
    const EVP_MD *VAR_7;
    long VAR_8;
    void *VAR_9;

    if (VAR_5->s3.handshake_dgst == ((void*)0)) {
        VAR_8 = FUNC_1(VAR_5->s3.handshake_buffer, &VAR_9);
        if (VAR_8 <= 0) {
            FUNC_5(VAR_5, VAR_2, VAR_3,
                     VAR_4);
            return 0;
        }

        VAR_5->s3.handshake_dgst = FUNC_4();
        if (VAR_5->s3.handshake_dgst == ((void*)0)) {
            FUNC_5(VAR_5, VAR_2, VAR_3,
                     VAR_1);
            return 0;
        }

        VAR_7 = FUNC_6(VAR_5);
        if (VAR_7 == ((void*)0) || !FUNC_2(VAR_5->s3.handshake_dgst, VAR_7, ((void*)0))
            || !FUNC_3(VAR_5->s3.handshake_dgst, VAR_9, VAR_8)) {
            FUNC_5(VAR_5, VAR_2, VAR_3,
                     VAR_0);
            return 0;
        }
    }
    if (VAR_6 == 0) {
        FUNC_0(VAR_5->s3.handshake_buffer);
        VAR_5->s3.handshake_buffer = ((void*)0);
    }

    return 1;
}
