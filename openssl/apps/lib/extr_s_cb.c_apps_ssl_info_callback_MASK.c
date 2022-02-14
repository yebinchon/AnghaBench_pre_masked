
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 int FUNC_0 (int ,char*,char const*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int const*) ;
 int VAR_7 ;

void FUNC_4(const SSL *VAR_8, int VAR_9, int VAR_10)
{
    const char *VAR_11;
    int VAR_12;

    VAR_12 = VAR_9 & ~VAR_6;

    if (VAR_12 & VAR_5)
        VAR_11 = "SSL_connect";
    else if (VAR_12 & VAR_4)
        VAR_11 = "SSL_accept";
    else
        VAR_11 = "undefined";

    if (VAR_9 & VAR_2) {
        FUNC_0(VAR_7, "%s:%s\n", VAR_11, FUNC_3(VAR_8));
    } else if (VAR_9 & VAR_0) {
        VAR_11 = (VAR_9 & VAR_3) ? "read" : "write";
        FUNC_0(VAR_7, "SSL3 alert %s:%s:%s\n",
                   VAR_11,
                   FUNC_2(VAR_10),
                   FUNC_1(VAR_10));
    } else if (VAR_9 & VAR_1) {
        if (VAR_10 == 0)
            FUNC_0(VAR_7, "%s:failed in %s\n",
                       VAR_11, FUNC_3(VAR_8));
        else if (VAR_10 < 0)
            FUNC_0(VAR_7, "%s:error in %s\n",
                       VAR_11, FUNC_3(VAR_8));
    }
}
