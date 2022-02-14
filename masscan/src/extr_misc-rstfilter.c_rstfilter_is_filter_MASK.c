
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
struct ResetFilter {size_t seed; size_t bucket_mask; unsigned char* buckets; int counter; } ;
typedef int input ;


 size_t FUNC_0 (unsigned int*,int,size_t*) ;

int
FUNC_1(struct ResetFilter *VAR_0,
                    unsigned VAR_1, unsigned VAR_2,
                    unsigned VAR_3, unsigned VAR_4)
{
    uint64_t VAR_5;
    unsigned VAR_6[4];
    uint64_t VAR_7[2];
    size_t VAR_8;
    unsigned char *VAR_9;
    int VAR_10 = 0;




    VAR_6[0] = VAR_1;
    VAR_6[1] = VAR_2;
    VAR_6[2] = VAR_3;
    VAR_6[3] = VAR_4;
    VAR_7[0] = VAR_0->seed;
    VAR_7[1] = VAR_0->seed;




    VAR_5 = FUNC_0(VAR_6, sizeof(VAR_6), VAR_7);
    VAR_8 = VAR_5 & VAR_0->bucket_mask;




    VAR_9 = &VAR_0->buckets[VAR_8/2];
    if (VAR_8 & 1) {
        if ((*VAR_9 & 0x0F) == 0x0F)
            VAR_10 = 1;
        else
            *VAR_9 = (*VAR_9) + 0x01;
    } else {
        if ((*VAR_9 & 0xF0) == 0xF0)
            VAR_10 = 1;
        else
            *VAR_9 = (*VAR_9) + 0x10;
    }




    VAR_6[0] = (unsigned)VAR_5;
    VAR_6[1] = VAR_0->counter++;
    VAR_5 = FUNC_0(VAR_6, sizeof(VAR_6), VAR_7);
    VAR_8 = VAR_5 & VAR_0->bucket_mask;
    VAR_9 = &VAR_0->buckets[VAR_8/2];
    if (VAR_8 & 1) {
        if ((*VAR_9 & 0x0F))
            *VAR_9 = (*VAR_9) - 0x01;
    } else {
        if ((*VAR_9 & 0xF0))
            *VAR_9 = (*VAR_9) - 0x10;
    }

    return VAR_10;
}
