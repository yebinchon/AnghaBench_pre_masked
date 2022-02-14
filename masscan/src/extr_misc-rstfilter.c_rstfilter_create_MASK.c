
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ResetFilter {unsigned long long seed; int bucket_count; int bucket_mask; void* buckets; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (size_t) ;

struct ResetFilter *
FUNC_2(unsigned long long VAR_0, size_t VAR_1)
{
    struct ResetFilter *VAR_2;

    VAR_2 = FUNC_0(1, sizeof(*VAR_2));
    VAR_2->seed = VAR_0;
    VAR_2->bucket_count = FUNC_1(VAR_1);
    VAR_2->bucket_mask = VAR_2->bucket_count - 1;
    VAR_2->buckets = FUNC_0(VAR_2->bucket_count/2, sizeof(*VAR_2->buckets));

    return VAR_2;
}
