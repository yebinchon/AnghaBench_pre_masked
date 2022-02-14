
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_4__ {struct TYPE_4__* next; int data; } ;
typedef TYPE_1__ GList ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

gboolean
FUNC_1 (GList *VAR_2, GList *VAR_3)
{
    GList *VAR_4 = VAR_2, *VAR_5 = VAR_3;

    while (VAR_4 && VAR_5) {
        if (FUNC_0(VAR_4->data, VAR_5->data) != 0)
            break;

        VAR_4 = VAR_4->next;
        VAR_5 = VAR_5->next;
    }

    if (!VAR_4 && !VAR_5)
        return VAR_1;
    return VAR_0;
}
