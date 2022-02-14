
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* next; scalar_t__ value; } ;
struct TYPE_7__ {int numvalue; scalar_t__ vector; struct TYPE_7__* iter; TYPE_2__* valtail; struct TYPE_7__* tail; struct TYPE_7__* next; TYPE_2__* value; scalar_t__ varname; } ;
typedef TYPE_1__ CGI_varlist ;
typedef TYPE_2__ CGI_val ;


 TYPE_1__* FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

CGI_varlist *
FUNC_5(CGI_varlist *VAR_0, const char *VAR_1, const char *VAR_2) {
    CGI_val *VAR_3;
    CGI_varlist *VAR_4;

    if (VAR_1 == 0 || VAR_2 == 0) {
        return VAR_0;
    }



    VAR_3 = (CGI_val *) FUNC_2(sizeof(*VAR_3) + FUNC_4(VAR_2));
    FUNC_3((char *) VAR_3->value, VAR_2);
    VAR_3->next = 0;







    if ((VAR_4 = FUNC_0(VAR_0, VAR_1)) == 0) {
        VAR_4 = (CGI_varlist *) FUNC_2(sizeof(*VAR_4) + FUNC_4(VAR_1));
        FUNC_3((char *) VAR_4->varname, VAR_1);
        VAR_4->value = VAR_3;
        VAR_4->numvalue = 1;
        VAR_4->next = VAR_4->iter = VAR_4->tail = 0;
        VAR_4->vector = 0;
        if (VAR_0 == 0) {
            VAR_0 = VAR_4;
        }
        else {
            VAR_0->tail->next = VAR_4;
        }
        VAR_0->tail = VAR_4;
    }
    else {
        VAR_4->valtail->next = VAR_3;
        VAR_4->numvalue++;
    }
    VAR_4->valtail = VAR_3;
    if (VAR_4->vector != 0) {
        FUNC_1((void *)VAR_4->vector);
        VAR_4->vector = 0;
    }
    VAR_0->iter = 0;
    return VAR_0;
}
