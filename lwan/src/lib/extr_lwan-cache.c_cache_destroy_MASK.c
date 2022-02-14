
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int table; int lock; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_6__ {int evicted; int misses; int hits; } ;
struct cache {TYPE_2__ hash; TYPE_1__ queue; int flags; TYPE_3__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct cache*) ;
 int FUNC_1 (struct cache*) ;
 int FUNC_2 (struct cache*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int (*) (struct cache*),struct cache*) ;
 int FUNC_5 (char*,int ,int ,int ) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct cache *VAR_1)
{
    FUNC_0(VAR_1);


    FUNC_5("Cache stats: %d hits, %d misses, %d evictions",
                      VAR_1->stats.hits, VAR_1->stats.misses,
                      VAR_1->stats.evicted);


    FUNC_4(FUNC_1, VAR_1);
    VAR_1->flags |= VAR_0;
    FUNC_1(VAR_1);
    FUNC_6(&VAR_1->hash.lock);
    FUNC_6(&VAR_1->queue.lock);
    FUNC_3(VAR_1->hash.table);
    FUNC_2(VAR_1);
}
