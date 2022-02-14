
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector {unsigned int num_elts; unsigned int num_buckets; unsigned int shift; int buckets_allocated; void** buckets; unsigned int elt_size; } ;
struct pool {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,void**,int) ;
 void* FUNC_2 (struct pool*,unsigned int) ;
 void* FUNC_3 (struct vector*,unsigned int) ;

void* FUNC_4(struct vector* VAR_0, struct pool* VAR_1)
{
    unsigned VAR_2 = VAR_0->num_elts++;


    FUNC_0(VAR_0->num_elts > VAR_2);
    if (VAR_2 == (VAR_0->num_buckets << VAR_0->shift))
    {
        if(VAR_0->num_buckets == VAR_0->buckets_allocated)
        {

            unsigned VAR_3;
            void* VAR_4;

            VAR_3 = 2*VAR_0->buckets_allocated;
            if(VAR_3 == 0) VAR_3 = 1;



            VAR_4 = FUNC_2(VAR_1, VAR_3 * sizeof(void*));
            FUNC_1(VAR_4, VAR_0->buckets, VAR_0->buckets_allocated * sizeof(void*));
            VAR_0->buckets = VAR_4;
            VAR_0->buckets_allocated = VAR_3;
        }
        VAR_0->buckets[VAR_0->num_buckets] = FUNC_2(VAR_1, VAR_0->elt_size << VAR_0->shift);
        return VAR_0->buckets[VAR_0->num_buckets++];
    }
    return FUNC_3(VAR_0, VAR_2);
}
