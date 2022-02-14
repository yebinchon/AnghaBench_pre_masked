
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct crush_work_bucket {int dummy; } ;
struct crush_work {TYPE_1__** work; } ;
struct crush_map {int max_buckets; int working_size; TYPE_2__** buckets; } ;
typedef int __u32 ;
typedef size_t __s32 ;
struct TYPE_4__ {int alg; int size; } ;
struct TYPE_3__ {void* perm; scalar_t__ perm_n; scalar_t__ perm_x; } ;


 int FUNC_0 (int) ;

void FUNC_1(const struct crush_map *VAR_0, void *VAR_1)
{
 struct crush_work *VAR_2 = VAR_1;
 __s32 VAR_3;
 VAR_1 += sizeof(struct crush_work);
 VAR_2->work = VAR_1;
 VAR_1 += VAR_0->max_buckets * sizeof(struct crush_work_bucket *);
 for (VAR_3 = 0; VAR_3 < VAR_0->max_buckets; ++VAR_3) {
  if (!VAR_0->buckets[VAR_3])
   continue;

  VAR_2->work[VAR_3] = VAR_1;
  switch (VAR_0->buckets[VAR_3]->alg) {
  default:
   VAR_1 += sizeof(struct crush_work_bucket);
   break;
  }
  VAR_2->work[VAR_3]->perm_x = 0;
  VAR_2->work[VAR_3]->perm_n = 0;
  VAR_2->work[VAR_3]->perm = VAR_1;
  VAR_1 += VAR_0->buckets[VAR_3]->size * sizeof(__u32);
 }
 FUNC_0(VAR_1 - (void *)VAR_2 != VAR_0->working_size);
}
