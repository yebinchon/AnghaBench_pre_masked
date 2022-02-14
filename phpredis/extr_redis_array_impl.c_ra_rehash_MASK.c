
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_fcall_info_cache ;
typedef int zend_fcall_info ;
struct TYPE_6__ {int index; TYPE_1__* prev; } ;
struct TYPE_5__ {int count; int * hosts; int * redis; } ;
typedef TYPE_2__ RedisArray ;


 int FUNC_0 (TYPE_2__*,int *,int ,int ,int *,int *) ;

void
FUNC_1(RedisArray *VAR_0, zend_fcall_info *VAR_1, zend_fcall_info_cache *VAR_2) {
    int VAR_3;


    if(!VAR_0->prev)
        return;

    for(VAR_3 = 0; VAR_3 < VAR_0->prev->count; ++VAR_3) {
        FUNC_0(VAR_0, &VAR_0->prev->redis[VAR_3], VAR_0->prev->hosts[VAR_3], VAR_0->index, VAR_1, VAR_2);
    }
}
