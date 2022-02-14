
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* value; } ;
typedef TYPE_1__ pair_t ;
struct TYPE_7__ {int order; int * buckets; } ;
typedef TYPE_2__ hashtable_t ;
typedef int bucket_t ;


 size_t FUNC_0 (char const*) ;
 size_t FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int *,char const*,size_t) ;

void *FUNC_3(hashtable_t *VAR_0, const char *VAR_1)
{
    pair_t *VAR_2;
    size_t VAR_3;
    bucket_t *VAR_4;

    VAR_3 = FUNC_0(VAR_1);
    VAR_4 = &VAR_0->buckets[VAR_3 & FUNC_1(VAR_0->order)];

    VAR_2 = FUNC_2(VAR_0, VAR_4, VAR_1, VAR_3);
    if(!VAR_2)
        return ((void*)0);

    return VAR_2->value;
}
