
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int SSL ;


 int FUNC_0 (int ,char*,...) ;
 int * FUNC_1 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(SSL *VAR_4, SSL *VAR_5)
{

    SSL_CTX* VAR_6 = FUNC_1(VAR_5);
    if (VAR_3 == 0)
        return 0;
    if (VAR_3 == 1 && VAR_6 == VAR_1)
        return 0;
    if (VAR_3 == 2 && VAR_6 == VAR_2)
        return 0;
    FUNC_0(VAR_0, "Servername: expected context %d\n", VAR_3);
    if (VAR_6 == VAR_2)
        FUNC_0(VAR_0, "Servername: context is 2\n");
    else if (VAR_6 == VAR_1)
        FUNC_0(VAR_0, "Servername: context is 1\n");
    else
        FUNC_0(VAR_0, "Servername: context is unknown\n");
    return -1;
}
