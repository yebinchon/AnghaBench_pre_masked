
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* iter; } ;
struct TYPE_4__ {char const* varname; struct TYPE_4__* next; } ;
typedef TYPE_2__ CGI_varlist ;



const char *
FUNC_0(CGI_varlist *VAR_0) {
    return VAR_0 == 0 || VAR_0->iter == 0 || (VAR_0->iter = VAR_0->iter->next) == 0 ?
        0 : VAR_0->iter->varname;
}
