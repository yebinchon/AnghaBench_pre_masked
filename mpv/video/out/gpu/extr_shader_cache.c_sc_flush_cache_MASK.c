
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sc_entry {int timer; scalar_t__ pass; int ubo; } ;
struct gl_shader_cache {int num_entries; TYPE_2__* ra; struct sc_entry** entries; } ;
struct TYPE_5__ {TYPE_1__* fns; } ;
struct TYPE_4__ {int (* renderpass_destroy ) (TYPE_2__*,scalar_t__) ;} ;


 int FUNC_0 (struct gl_shader_cache*,char*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (struct sc_entry*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct gl_shader_cache *VAR_0)
{
    FUNC_0(VAR_0, "flushing shader cache\n");

    for (int VAR_1 = 0; VAR_1 < VAR_0->num_entries; VAR_1++) {
        struct sc_entry *VAR_2 = VAR_0->entries[VAR_1];
        FUNC_1(VAR_0->ra, &VAR_2->ubo);
        if (VAR_2->pass)
            VAR_0->ra->fns->renderpass_destroy(VAR_0->ra, VAR_2->pass);
        FUNC_4(VAR_2->timer);
        FUNC_3(VAR_2);
    }
    VAR_0->num_entries = 0;
}
