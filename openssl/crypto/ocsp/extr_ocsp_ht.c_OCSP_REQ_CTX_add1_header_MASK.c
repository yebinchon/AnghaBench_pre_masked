
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; int mem; } ;
typedef TYPE_1__ OCSP_REQ_CTX ;


 scalar_t__ FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;

int FUNC_2(OCSP_REQ_CTX *VAR_1,
                             const char *VAR_2, const char *VAR_3)
{
    if (!VAR_2)
        return 0;
    if (FUNC_0(VAR_1->mem, VAR_2) <= 0)
        return 0;
    if (VAR_3) {
        if (FUNC_1(VAR_1->mem, ": ", 2) != 2)
            return 0;
        if (FUNC_0(VAR_1->mem, VAR_3) <= 0)
            return 0;
    }
    if (FUNC_1(VAR_1->mem, "\r\n", 2) != 2)
        return 0;
    VAR_1->state = VAR_0;
    return 1;
}
