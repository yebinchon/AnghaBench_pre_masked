
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct NBNameCache {int heap; } ;
struct TYPE_4__ {struct TYPE_4__* entry; struct TYPE_4__* next; } ;
typedef TYPE_1__ NBNameCacheNode ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct NBNameCache *VAR_0,
 NBNameCacheNode **VAR_1)
{
    if (VAR_0 && VAR_1 && *VAR_1)
    {
        NBNameCacheNode *VAR_2 = (*VAR_1)->next;

        FUNC_0(VAR_0->heap, 0, (*VAR_1)->entry);
        FUNC_0(VAR_0->heap, 0, *VAR_1);
        *VAR_1 = VAR_2;
    }
}
