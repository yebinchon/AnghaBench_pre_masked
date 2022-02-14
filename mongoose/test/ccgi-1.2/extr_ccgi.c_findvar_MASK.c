
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* varname; struct TYPE_4__* next; struct TYPE_4__* iter; } ;
typedef TYPE_1__ CGI_varlist ;


 scalar_t__ FUNC_0 (char const*,char const*) ;

__attribute__((used)) static CGI_varlist *
FUNC_1(CGI_varlist *VAR_0, const char *VAR_1) {
    if (VAR_1 == 0 && VAR_0 != 0) {
        return VAR_0->iter;
    }
    for (; VAR_0 != 0; VAR_0 = VAR_0->next) {
        if (VAR_0->varname[0] == VAR_1[0] &&
            FUNC_0(VAR_0->varname, VAR_1) == 0)
        {
            break;
        }
    }
    return VAR_0;
}
