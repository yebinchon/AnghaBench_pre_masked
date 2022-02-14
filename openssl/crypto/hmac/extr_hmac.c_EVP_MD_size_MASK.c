
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int md; } ;
typedef TYPE_1__ HMAC_CTX ;


 int FUNC_0 (int ) ;

size_t FUNC_1(const HMAC_CTX *VAR_0)
{
    int VAR_1 = FUNC_0((VAR_0)->md);

    return (VAR_1 < 0) ? 0 : VAR_1;
}
