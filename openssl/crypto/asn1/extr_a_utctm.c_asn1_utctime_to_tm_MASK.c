
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tm {int dummy; } ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ ASN1_UTCTIME ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct tm*,TYPE_1__ const*) ;

int FUNC_1(struct tm *VAR_1, const ASN1_UTCTIME *VAR_2)
{

    if (VAR_2->type != VAR_0)
        return 0;
    return FUNC_0(VAR_1, VAR_2);
}
