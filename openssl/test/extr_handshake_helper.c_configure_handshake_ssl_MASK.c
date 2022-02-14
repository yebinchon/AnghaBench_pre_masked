
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ servername; scalar_t__ enable_pha; } ;
struct TYPE_5__ {TYPE_1__ client; } ;
typedef TYPE_2__ SSL_TEST_EXTRA_CONF ;
typedef int SSL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(SSL *VAR_1, SSL *VAR_2,
                                    const SSL_TEST_EXTRA_CONF *VAR_3)
{
    if (VAR_3->client.servername != VAR_0)
        FUNC_1(VAR_2,
                                 FUNC_2(VAR_3->client.servername));
    if (VAR_3->client.enable_pha)
        FUNC_0(VAR_2, 1);
}
