
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int BIO ;


 int FUNC_0 (int *,char*,int ,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(BIO *VAR_0, SSL_CTX *VAR_1)
{
    FUNC_0(VAR_0, "%4ld items in the session cache\n",
               FUNC_12(VAR_1));
    FUNC_0(VAR_0, "%4ld client connects (SSL_connect())\n",
               FUNC_6(VAR_1));
    FUNC_0(VAR_0, "%4ld client renegotiates (SSL_connect())\n",
               FUNC_8(VAR_1));
    FUNC_0(VAR_0, "%4ld client connects that finished\n",
               FUNC_7(VAR_1));
    FUNC_0(VAR_0, "%4ld server accepts (SSL_accept())\n",
               FUNC_1(VAR_1));
    FUNC_0(VAR_0, "%4ld server renegotiates (SSL_accept())\n",
               FUNC_3(VAR_1));
    FUNC_0(VAR_0, "%4ld server accepts that finished\n",
               FUNC_2(VAR_1));
    FUNC_0(VAR_0, "%4ld session cache hits\n", FUNC_10(VAR_1));
    FUNC_0(VAR_0, "%4ld session cache misses\n",
               FUNC_11(VAR_1));
    FUNC_0(VAR_0, "%4ld session cache timeouts\n",
               FUNC_13(VAR_1));
    FUNC_0(VAR_0, "%4ld callback cache hits\n",
               FUNC_5(VAR_1));
    FUNC_0(VAR_0, "%4ld cache full overflows (%ld allowed)\n",
               FUNC_4(VAR_1),
               FUNC_9(VAR_1));
}
