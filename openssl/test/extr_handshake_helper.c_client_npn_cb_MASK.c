
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int npn_protocols_len; int npn_protocols; } ;
typedef int SSL ;
typedef TYPE_1__ CTX_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char**,unsigned char*,unsigned char const*,unsigned int,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(SSL *VAR_4, unsigned char **VAR_5, unsigned char *VAR_6,
                         const unsigned char *VAR_7, unsigned int VAR_8,
                         void *VAR_9)
{
    CTX_DATA *VAR_10 = (CTX_DATA*)(VAR_9);
    int VAR_11;

    VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8,
                                VAR_10->npn_protocols,
                                VAR_10->npn_protocols_len);

    return FUNC_1(VAR_11 == VAR_0 || VAR_11 == VAR_1)
        ? VAR_3 : VAR_2;
}
