
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; struct TYPE_3__* next; } ;
typedef int GString ;
typedef TYPE_1__ GList ;


 int FUNC_0 (int *,char const*) ;

void
FUNC_1 (GList *VAR_0, GString *VAR_1, const char *VAR_2)
{
    GList *VAR_3;
    if (!VAR_0)
        return;

    VAR_3 = VAR_0;
    FUNC_0 (VAR_1, VAR_3->data);

    for (VAR_3 = VAR_3->next; VAR_3; VAR_3 = VAR_3->next) {
        FUNC_0 (VAR_1, VAR_2);
        FUNC_0 (VAR_1, (char *)VAR_3->data);
    }
}
