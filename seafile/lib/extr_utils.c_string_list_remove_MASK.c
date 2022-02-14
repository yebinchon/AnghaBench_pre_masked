
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ data; struct TYPE_8__* next; } ;
typedef TYPE_1__ GList ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (char*,char const*) ;

GList *
FUNC_4 (GList *VAR_0, const char *VAR_1)
{
    FUNC_2 (VAR_1 != ((void*)0), VAR_0);

    GList *VAR_2;

    for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next) {
        if (FUNC_3((char *)VAR_2->data, VAR_1) == 0) {
            FUNC_0 (VAR_2->data);
            return FUNC_1 (VAR_0, VAR_2);
        }
    }
    return VAR_0;
}
