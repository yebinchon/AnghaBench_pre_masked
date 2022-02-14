
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lwan_url_map {int flags; TYPE_1__* module; int handler; int args; scalar_t__ prefix; int data; } ;
struct lwan {int url_map_trie; } ;
struct TYPE_2__ {int handle_request; int flags; int (* create ) (scalar_t__,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct lwan_url_map* FUNC_1 (int *,int *,struct lwan_url_map const*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (scalar_t__,int ) ;

void FUNC_6(struct lwan *VAR_2, const struct lwan_url_map *VAR_3)
{
    FUNC_3(&VAR_2->url_map_trie);
    if (FUNC_0(!FUNC_4(&VAR_2->url_map_trie, VAR_1)))
        FUNC_2("Could not initialize trie");

    for (; VAR_3->prefix; VAR_3++) {
        struct lwan_url_map *VAR_4 = FUNC_1(&VAR_2->url_map_trie, ((void*)0), VAR_3);

        if (VAR_4->module && VAR_4->module->create) {
            VAR_4->data = VAR_4->module->create (VAR_3->prefix, VAR_4->args);
            VAR_4->flags = VAR_4->module->flags;
            VAR_4->handler = VAR_4->module->handle_request;
        } else {
            VAR_4->flags = VAR_0;
        }
    }
}
