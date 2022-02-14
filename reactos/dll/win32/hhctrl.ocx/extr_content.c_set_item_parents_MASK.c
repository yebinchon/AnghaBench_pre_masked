
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* child; struct TYPE_4__* parent; } ;
typedef TYPE_1__ ContentItem ;



__attribute__((used)) static void FUNC_0(ContentItem *VAR_0, ContentItem *VAR_1)
{
    while(VAR_1) {
        VAR_1->parent = VAR_0;
        FUNC_0(VAR_1, VAR_1->child);
        VAR_1 = VAR_1->next;
    }
}
