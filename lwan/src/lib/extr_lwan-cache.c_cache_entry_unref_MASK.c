
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache_entry {int flags; int refs; int key; } ;
struct TYPE_2__ {int context; int (* destroy_entry ) (struct cache_entry*,int ) ;} ;
struct cache {TYPE_1__ cb; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cache_entry*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cache_entry*,int ) ;

void FUNC_4(struct cache *VAR_3, struct cache_entry *VAR_4)
{
    FUNC_1(VAR_4);

    if (VAR_4->flags & VAR_2) {


        if (VAR_4->flags & VAR_1)
            FUNC_2(VAR_4->key);

        goto destroy_entry;
    }

    if (FUNC_0(VAR_4->refs))
        return;



    if (VAR_4->flags & VAR_0) {
destroy_entry:



        VAR_3->cb.destroy_entry(VAR_4, VAR_3->cb.context);
    }
}
