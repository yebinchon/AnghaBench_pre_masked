
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* value; struct TYPE_7__* next; } ;
struct TYPE_6__ {scalar_t__ vector; int numvalue; TYPE_2__* value; } ;
typedef TYPE_1__ CGI_varlist ;
typedef int CGI_value ;
typedef TYPE_2__ CGI_val ;


 TYPE_1__* FUNC_0 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_1 (int) ;

CGI_value *
FUNC_2(CGI_varlist *VAR_0, const char *VAR_1) {
    CGI_val *VAR_2;
    int VAR_3;

    if ((VAR_0 = FUNC_0(VAR_0, VAR_1)) == 0) {
        return 0;
    }
    if (VAR_0->vector == 0) {
        VAR_0->vector = (CGI_value *)
            FUNC_1(sizeof(CGI_value) * (VAR_0->numvalue + 1));
        VAR_3 = 0;



        for (VAR_2 = VAR_0->value; VAR_2 != 0 && VAR_3 < VAR_0->numvalue;
            VAR_2 = VAR_2->next)
        {
            ((const char **)VAR_0->vector)[VAR_3++] = VAR_2->value;
        }
        ((const char **)VAR_0->vector)[VAR_3] = 0;
    }
    return VAR_0->vector;
}
