
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* value; } ;
struct TYPE_6__ {char const* value; } ;
typedef TYPE_2__ CGI_varlist ;


 TYPE_2__* FUNC_0 (TYPE_2__*,char const*) ;

const char *
FUNC_1(CGI_varlist *VAR_0, const char *VAR_1) {
    return (VAR_0 = FUNC_0(VAR_0, VAR_1)) == 0 ? 0 : VAR_0->value->value;
}
