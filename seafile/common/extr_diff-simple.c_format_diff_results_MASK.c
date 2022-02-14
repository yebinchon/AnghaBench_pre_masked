
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ status; int new_name; int name; int unmerge_state; int type; } ;
struct TYPE_4__ {TYPE_2__* data; struct TYPE_4__* next; } ;
typedef int GString ;
typedef TYPE_1__ GList ;
typedef TYPE_2__ DiffEntry ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,scalar_t__,int ,int,int ,...) ;
 char* FUNC_1 (int *,int ) ;
 int * FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;

char *
FUNC_4(GList *VAR_2)
{
    GList *VAR_3;
    GString *VAR_4;
    DiffEntry *VAR_5;

    VAR_4 = FUNC_2("");

    for (VAR_3 = VAR_2; VAR_3; VAR_3 = VAR_3->next) {
        VAR_5 = VAR_3->data;

        if (VAR_5->status != VAR_0)
            FUNC_0(VAR_4, "%c %c %d %u %s\n",
                                   VAR_5->type, VAR_5->status, VAR_5->unmerge_state,
                                   (int)FUNC_3(VAR_5->name), VAR_5->name);
        else
            FUNC_0(VAR_4, "%c %c %d %u %s %u %s\n",
                                   VAR_5->type, VAR_5->status, VAR_5->unmerge_state,
                                   (int)FUNC_3(VAR_5->name), VAR_5->name,
                                   (int)FUNC_3(VAR_5->new_name), VAR_5->new_name);
    }

    return FUNC_1(VAR_4, VAR_1);
}
