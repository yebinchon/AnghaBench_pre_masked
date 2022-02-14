
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* servername; } ;
typedef int SSL_CTX ;
typedef int SSL ;
typedef TYPE_1__ HANDSHAKE_EX_DATA ;


 int FUNC_0 (int *) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 char* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static int FUNC_7(SSL *VAR_7, void *VAR_8, int VAR_9)
{
    const char *VAR_10 = FUNC_3(VAR_7, VAR_5);
    HANDSHAKE_EX_DATA *VAR_11 =
        (HANDSHAKE_EX_DATA*)(FUNC_2(VAR_7, VAR_6));

    if (VAR_10 == ((void*)0)) {
        VAR_11->servername = VAR_0;
        return VAR_3;
    }

    if (FUNC_6(VAR_10, "server2") == 0) {
        SSL_CTX *VAR_12 = (SSL_CTX*)VAR_8;
        FUNC_4(VAR_7, VAR_12);





        FUNC_1(VAR_7, 0xFFFFFFFFL);
        FUNC_5(VAR_7, FUNC_0(VAR_12));

        VAR_11->servername = VAR_1;
        return VAR_4;
    } else if (FUNC_6(VAR_10, "server1") == 0) {
        VAR_11->servername = VAR_0;
        return VAR_4;
    } else if (VAR_9) {
        VAR_11->servername = VAR_0;
        return VAR_3;
    } else {

        return VAR_2;
    }
}
