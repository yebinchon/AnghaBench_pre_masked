
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_SESSION ;
typedef int SSL ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_6(SSL *VAR_4, SSL_SESSION *VAR_5)
{

    if (VAR_3 != ((void*)0)) {
        BIO *VAR_6 = FUNC_1(VAR_3, "w");

        if (VAR_6 == ((void*)0)) {
            FUNC_2(VAR_2, "Error writing session file %s\n", VAR_3);
        } else {
            FUNC_3(VAR_6, VAR_5);
            FUNC_0(VAR_6);
        }
    }





    if (FUNC_5(VAR_4) == VAR_0) {
        FUNC_2(VAR_1,
                   "---\nPost-Handshake New Session Ticket arrived:\n");
        FUNC_4(VAR_1, VAR_5);
        FUNC_2(VAR_1, "---\n");
    }





    return 0;
}
