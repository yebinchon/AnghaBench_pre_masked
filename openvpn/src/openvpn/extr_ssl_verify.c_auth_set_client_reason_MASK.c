
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_multi {int * client_reason; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,int *) ;
 scalar_t__ FUNC_2 (char const*) ;

void
FUNC_3(struct tls_multi* VAR_0, const char* VAR_1)
{
    if (VAR_0->client_reason)
    {
        FUNC_0(VAR_0->client_reason);
        VAR_0->client_reason = ((void*)0);
    }
    if (VAR_1 && FUNC_2(VAR_1))
    {
        VAR_0->client_reason = FUNC_1(VAR_1, ((void*)0));
    }
}
