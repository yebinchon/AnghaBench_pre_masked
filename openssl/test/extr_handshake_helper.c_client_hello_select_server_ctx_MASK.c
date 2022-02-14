
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
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,unsigned char const**,size_t*) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char const*,char*,size_t) ;

__attribute__((used)) static int FUNC_8(SSL *VAR_5, void *VAR_6, int VAR_7)
{
    const char *VAR_8;
    const unsigned char *VAR_9;
    size_t VAR_10, VAR_11;
    HANDSHAKE_EX_DATA *VAR_12 =
        (HANDSHAKE_EX_DATA*)(FUNC_3(VAR_5, VAR_4));





    if (!FUNC_2(VAR_5, VAR_3, &VAR_9,
                                   &VAR_11) ||
        VAR_11 <= 2)
        return 0;

    VAR_10 = (*(VAR_9++) << 8);
    VAR_10 += *(VAR_9++);
    if (VAR_10 + 2 != VAR_11)
        return 0;
    VAR_11 = VAR_10;




    if (VAR_11 == 0 || *VAR_9++ != VAR_2)
        return 0;
    VAR_11--;

    if (VAR_11 <= 2)
        return 0;
    VAR_10 = (*(VAR_9++) << 8);
    VAR_10 += *(VAR_9++);
    if (VAR_10 + 2 > VAR_11)
        return 0;
    VAR_11 = VAR_10;
    VAR_8 = (const char *)VAR_9;

    if (VAR_10 == FUNC_6("server2") && FUNC_7(VAR_8, "server2", VAR_10) == 0) {
        SSL_CTX *VAR_13 = VAR_6;
        FUNC_4(VAR_5, VAR_13);





        FUNC_1(VAR_5, 0xFFFFFFFFL);
        FUNC_5(VAR_5, FUNC_0(VAR_13));

        VAR_12->servername = VAR_1;
        return 1;
    } else if (VAR_10 == FUNC_6("server1") &&
               FUNC_7(VAR_8, "server1", VAR_10) == 0) {
        VAR_12->servername = VAR_0;
        return 1;
    } else if (VAR_7) {
        VAR_12->servername = VAR_0;
        return 1;
    }
    return 0;
}
