
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* zsl; } ;
typedef TYPE_2__ zset ;
struct TYPE_9__ {scalar_t__ encoding; TYPE_2__* ptr; } ;
typedef TYPE_3__ robj ;
struct TYPE_10__ {scalar_t__ zset_max_ziplist_entries; size_t zset_max_ziplist_value; } ;
struct TYPE_7__ {scalar_t__ length; } ;


 scalar_t__ VAR_0 ;
 TYPE_6__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,scalar_t__) ;

void FUNC_1(robj *VAR_2, size_t VAR_3) {
    if (VAR_2->encoding == VAR_0) return;
    zset *VAR_4 = VAR_2->ptr;

    if (VAR_4->zsl->length <= VAR_1.zset_max_ziplist_entries &&
        VAR_3 <= VAR_1.zset_max_ziplist_value)
            FUNC_0(VAR_2,VAR_0);
}
