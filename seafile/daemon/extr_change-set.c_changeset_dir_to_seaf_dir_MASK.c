
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int version; int dents; } ;
struct TYPE_11__ {int * data; struct TYPE_11__* next; } ;
typedef int SeafDirent ;
typedef int SeafDir ;
typedef TYPE_1__ GList ;
typedef int ChangeSetDirent ;
typedef TYPE_2__ ChangeSetDir ;


 int * FUNC_0 (int ,int *) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,int ) ;
 int * FUNC_5 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static SeafDir *
FUNC_6 (ChangeSetDir *VAR_1)
{
    GList *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
    GList *VAR_4;
    ChangeSetDirent *VAR_5;
    SeafDirent *VAR_6;
    SeafDir *VAR_7;

    VAR_2 = FUNC_1 (VAR_1->dents);
    for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next) {
        VAR_5 = VAR_4->data;
        VAR_6 = FUNC_0 (VAR_1->version, VAR_5);
        VAR_3 = FUNC_3 (VAR_3, VAR_6);
    }

    VAR_3 = FUNC_4 (VAR_3, VAR_0);


    VAR_7 = FUNC_5 (((void*)0), VAR_3, VAR_1->version);

    FUNC_2 (VAR_2);
    return VAR_7;
}
