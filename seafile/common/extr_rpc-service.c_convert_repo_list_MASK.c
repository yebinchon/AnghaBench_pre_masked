
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * data; struct TYPE_9__* next; } ;
typedef int SeafRepo ;
typedef int GObject ;
typedef TYPE_1__ GList ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static GList *
FUNC_4 (GList *VAR_1)
{
    GList *VAR_2 = ((void*)0), *VAR_3;
    GObject *VAR_4 = ((void*)0);

    for (VAR_3 = VAR_1; VAR_3; VAR_3=VAR_3->next) {
        SeafRepo *VAR_5 = VAR_3->data;
        VAR_4 = FUNC_0 (VAR_5);
        if (!VAR_4) {
            FUNC_1 (VAR_2, VAR_0);
            return ((void*)0);
        }

        VAR_2 = FUNC_2 (VAR_2, VAR_4);
    }

    return FUNC_3 (VAR_2);
}
