
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; int mem; } ;
typedef TYPE_1__ OCSP_REQ_CTX ;


 scalar_t__ FUNC_0 (int ,char const*,char const*,char const*) ;
 int VAR_0 ;

int FUNC_1(OCSP_REQ_CTX *VAR_1, const char *VAR_2, const char *VAR_3)
{
    static const char VAR_4[] = "%s %s HTTP/1.0\r\n";

    if (VAR_3 == ((void*)0))
        VAR_3 = "/";

    if (FUNC_0(VAR_1->mem, VAR_4, VAR_2, VAR_3) <= 0)
        return 0;
    VAR_1->state = VAR_0;
    return 1;
}
