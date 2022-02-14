
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; } ;
typedef TYPE_1__ bstr ;


 TYPE_1__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static bool FUNC_3(const char *VAR_0, const char *VAR_1)
{
    if (!FUNC_2(VAR_1, "all"))
        return 1;

    bstr VAR_2 = FUNC_0(VAR_0);
    return FUNC_1(&VAR_2, VAR_1) && (FUNC_1(&VAR_2, "/") || !VAR_2.len);
}
