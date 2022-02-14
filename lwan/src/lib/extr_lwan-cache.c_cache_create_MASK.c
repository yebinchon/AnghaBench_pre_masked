
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_8__ {int table; int lock; } ;
struct TYPE_7__ {int list; int lock; } ;
struct TYPE_6__ {scalar_t__ time_to_live; } ;
struct TYPE_5__ {int create_entry; int destroy_entry; void* context; } ;
struct cache {TYPE_4__ hash; TYPE_3__ queue; TYPE_2__ settings; TYPE_1__ cb; } ;
typedef int cache_destroy_entry_cb ;
typedef int cache_create_entry_cb ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct cache* FUNC_1 (int,int) ;
 int FUNC_2 (struct cache*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int (*) (struct cache*),int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct cache*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;

struct cache *FUNC_9(cache_create_entry_cb VAR_1,
                             cache_destroy_entry_cb VAR_2,
                             void *VAR_3,
                             time_t VAR_4)
{
    struct cache *VAR_5;

    FUNC_0(VAR_1);
    FUNC_0(VAR_2);
    FUNC_0(VAR_4 > 0);

    VAR_5 = FUNC_1(1, sizeof(*VAR_5));
    if (!VAR_5)
        return ((void*)0);

    VAR_5->hash.table = FUNC_4(FUNC_2, ((void*)0));
    if (!VAR_5->hash.table)
        goto error_no_hash;

    if (FUNC_8(&VAR_5->hash.lock, ((void*)0)))
        goto error_no_hash_lock;
    if (FUNC_8(&VAR_5->queue.lock, ((void*)0)))
        goto error_no_queue_lock;

    VAR_5->cb.create_entry = VAR_1;
    VAR_5->cb.destroy_entry = VAR_2;
    VAR_5->cb.context = VAR_3;

    VAR_5->settings.time_to_live = VAR_4;

    FUNC_5(&VAR_5->queue.list);

    FUNC_6(VAR_0, VAR_5);

    return VAR_5;

error_no_queue_lock:
    FUNC_7(&VAR_5->hash.lock);
error_no_hash_lock:
    FUNC_3(VAR_5->hash.table);
error_no_hash:
    FUNC_2(VAR_5);

    return ((void*)0);
}
