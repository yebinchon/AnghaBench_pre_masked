
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crush_work_bucket {int dummy; } ;
struct crush_work {int dummy; } ;
struct crush_map {int working_size; int max_buckets; TYPE_1__** buckets; } ;
typedef int __u32 ;
typedef size_t __s32 ;
struct TYPE_2__ {int alg; int size; } ;



__attribute__((used)) static void FUNC_0(struct crush_map *VAR_0)
{
 __s32 VAR_1;


 VAR_0->working_size = sizeof(struct crush_work) +
     VAR_0->max_buckets * sizeof(struct crush_work_bucket *);

 for (VAR_1 = 0; VAR_1 < VAR_0->max_buckets; VAR_1++) {
  if (!VAR_0->buckets[VAR_1])
   continue;

  switch (VAR_0->buckets[VAR_1]->alg) {
  default:




   VAR_0->working_size += sizeof(struct crush_work_bucket);
   break;
  }

  VAR_0->working_size += VAR_0->buckets[VAR_1]->size * sizeof(__u32);
 }
}
