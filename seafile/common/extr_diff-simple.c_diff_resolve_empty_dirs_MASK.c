
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ status; } ;
struct TYPE_13__ {TYPE_2__* data; struct TYPE_13__* next; } ;
typedef TYPE_1__ GList ;
typedef TYPE_2__ DiffEntry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_2__*) ;

void
FUNC_4 (GList **VAR_2)
{
    GList *VAR_3 = ((void*)0);
    GList *VAR_4, *VAR_5, *VAR_6;
    DiffEntry *VAR_7, *VAR_8, *VAR_9;

    for (VAR_4 = *VAR_2; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
        VAR_7 = VAR_4->data;
        if (VAR_7->status == VAR_0 ||
            VAR_7->status == VAR_1)
            VAR_3 = FUNC_2 (VAR_3, VAR_4);
    }

    for (VAR_5 = VAR_3; VAR_5 != ((void*)0); VAR_5 = VAR_5->next) {
        VAR_8 = ((GList *)VAR_5->data)->data;
        for (VAR_6 = *VAR_2; VAR_6 != ((void*)0); VAR_6 = VAR_6->next) {
            VAR_9 = VAR_6->data;
            if (FUNC_3 (VAR_8, VAR_9)) {
                *VAR_2 = FUNC_0 (*VAR_2, VAR_5->data);
                break;
            }
        }
    }

    FUNC_1 (VAR_3);
}
