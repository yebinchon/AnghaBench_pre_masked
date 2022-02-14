
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int value; struct TYPE_5__* next; } ;
struct TYPE_4__ {int varname; TYPE_2__* value; struct TYPE_4__* next; } ;
typedef TYPE_1__ CGI_varlist ;
typedef TYPE_2__ CGI_val ;


 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,char const*) ;
 char* FUNC_2 (int ,char*,char const*) ;

char *
FUNC_3(CGI_varlist *VAR_0, const char *VAR_1) {
    char *VAR_2, *VAR_3;
    CGI_varlist *VAR_4;
    CGI_val *VAR_5;
    int VAR_6 = 0;



    for (VAR_4 = VAR_0; VAR_4 != 0; VAR_4 = VAR_4->next) {
        for (VAR_5 = VAR_4->value; VAR_5 != 0; VAR_5 = VAR_5->next) {
            VAR_6 += 2 + FUNC_1(VAR_4->varname, VAR_1) +
                FUNC_1(VAR_5->value, VAR_1);
        }
    }
    if (VAR_6 == 0) {
        return 0;
    }
    VAR_3 = VAR_2 = FUNC_0(VAR_6);



    for (VAR_4 = VAR_0; VAR_4 != 0; VAR_4 = VAR_4->next) {
        for (VAR_5 = VAR_4->value; VAR_5 != 0; VAR_5 = VAR_5->next) {
            if (VAR_3 != VAR_2) {
                *VAR_3++ = '&';
            }
            VAR_3 = FUNC_2(VAR_4->varname, VAR_3, VAR_1);
            *VAR_3++ = '=';
            VAR_3 = FUNC_2(VAR_5->value, VAR_3, VAR_1);
        }
    }
    *VAR_3 = 0;
    return VAR_2;
}
