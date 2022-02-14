
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int alpn_protocols_len; int alpn_protocols; } ;
typedef int SSL ;
typedef TYPE_1__ CTX_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char**,unsigned char*,int ,int ,unsigned char const*,unsigned int) ;

__attribute__((used)) static int FUNC_1(SSL *VAR_3, const unsigned char **VAR_4,
                          unsigned char *VAR_5, const unsigned char *VAR_6,
                          unsigned int VAR_7, void *VAR_8)
{
    CTX_DATA *VAR_9 = (CTX_DATA*)(VAR_8);
    int VAR_10;


    unsigned char *VAR_11;






    VAR_10 = FUNC_0(&VAR_11, VAR_5,
                                VAR_9->alpn_protocols,
                                VAR_9->alpn_protocols_len, VAR_6, VAR_7);

    *VAR_4 = VAR_11;

    return VAR_10 == VAR_0 ? VAR_2
        : VAR_1;
}
