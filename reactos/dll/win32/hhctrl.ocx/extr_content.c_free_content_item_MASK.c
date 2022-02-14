
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int chm_index; int chm_file; } ;
struct TYPE_5__ {TYPE_1__ merge; int local; int name; struct TYPE_5__* child; struct TYPE_5__* next; } ;
typedef TYPE_2__ ContentItem ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(ContentItem *VAR_0)
{
    ContentItem *VAR_1;

    while(VAR_0) {
        VAR_1 = VAR_0->next;

        FUNC_1(VAR_0->child);

        FUNC_0(VAR_0->name);
        FUNC_0(VAR_0->local);
        FUNC_0(VAR_0->merge.chm_file);
        FUNC_0(VAR_0->merge.chm_index);

        VAR_0 = VAR_1;
    }
}
