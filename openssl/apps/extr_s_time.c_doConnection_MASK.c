
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct linger {int l_onoff; scalar_t__ l_linger; } ;
typedef int no_linger ;
struct TYPE_2__ {scalar_t__ error; } ;
typedef int SSL_CTX ;
typedef int SSL ;
typedef int BIO ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_12 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_13 (int,int ,int ,char*,int) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static SSL *FUNC_14(SSL *VAR_6, const char *VAR_7, SSL_CTX *VAR_8)
{
    BIO *VAR_9;
    SSL *VAR_10;
    int VAR_11;

    if ((VAR_9 = FUNC_0(FUNC_2())) == ((void*)0))
        return ((void*)0);

    FUNC_3(VAR_9, VAR_7);
    FUNC_4(VAR_9, VAR_0);

    if (VAR_6 == ((void*)0))
        VAR_10 = FUNC_9(VAR_8);
    else {
        VAR_10 = VAR_6;
        FUNC_11(VAR_10);
    }

    FUNC_10(VAR_10, VAR_9, VAR_9);


    VAR_11 = FUNC_6(VAR_10);
    if (VAR_11 <= 0) {
        FUNC_1(VAR_4, "ERROR\n");
        if (VAR_5.error != VAR_3)
            FUNC_1(VAR_4, "verify error:%s\n",
                       FUNC_12(VAR_5.error));
        else
            FUNC_5(VAR_4);
        if (VAR_6 == ((void*)0))
            FUNC_7(VAR_10);
        return ((void*)0);
    }
    return VAR_10;
}
