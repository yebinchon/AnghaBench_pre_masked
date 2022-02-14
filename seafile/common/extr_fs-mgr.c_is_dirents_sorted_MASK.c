
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_5__ {TYPE_1__* data; struct TYPE_5__* next; } ;
struct TYPE_4__ {int name; } ;
typedef TYPE_1__ SeafDirent ;
typedef TYPE_2__ GList ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static gboolean
FUNC_1 (GList *VAR_2)
{
    GList *VAR_3;
    SeafDirent *VAR_4, *VAR_5;
    gboolean VAR_6 = VAR_1;

    for (VAR_3 = VAR_2; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
        VAR_4 = VAR_3->data;
        if (!VAR_3->next)
            break;
        VAR_5 = VAR_3->next->data;


        if (FUNC_0 (VAR_4->name, VAR_5->name) < 0) {
            VAR_6 = VAR_0;
            break;
        }
    }

    return VAR_6;
}
