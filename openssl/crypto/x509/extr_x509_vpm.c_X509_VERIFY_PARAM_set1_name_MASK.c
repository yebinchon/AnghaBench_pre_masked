
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ name; } ;
typedef TYPE_1__ X509_VERIFY_PARAM ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*) ;

int FUNC_2(X509_VERIFY_PARAM *VAR_0, const char *VAR_1)
{
    FUNC_0(VAR_0->name);
    VAR_0->name = FUNC_1(VAR_1);
    if (VAR_0->name)
        return 1;
    return 0;
}
