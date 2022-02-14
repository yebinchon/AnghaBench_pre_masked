
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 int FUNC_0 (char*,unsigned int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,char*,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,unsigned char*,unsigned int) ;
 int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_3(SSL *VAR_3, const char *VAR_4,
                                        char *VAR_5,
                                        unsigned int VAR_6,
                                        unsigned char *VAR_7,
                                        unsigned int VAR_8)
{
    int VAR_9;
    unsigned int VAR_10 = 0;

    VAR_9 = FUNC_0(VAR_5, VAR_6, "Client_identity");
    if (VAR_9 < 0)
        goto out_err;
    if (VAR_0)
        FUNC_1(VAR_2, "client: created identity '%s' len=%d\n", VAR_5,
                VAR_9);
    VAR_9 = FUNC_2(VAR_1, VAR_7, VAR_8);
    if (VAR_9 < 0)
        goto out_err;
    VAR_10 = VAR_9;
 out_err:
    return VAR_10;
}
