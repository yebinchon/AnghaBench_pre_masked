
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct nn_chunk {size_t size; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 struct nn_chunk* FUNC_1 (void*) ;
 int FUNC_2 (int *,int ) ;

void *FUNC_3 (void *VAR_2, size_t VAR_3)
{
    struct nn_chunk *VAR_4;
    const size_t VAR_5 = sizeof (struct nn_chunk) + 2 * sizeof (uint32_t);
    size_t VAR_6;

    VAR_4 = FUNC_1 (VAR_2);


    FUNC_0 (VAR_3 <= VAR_4->size);


    VAR_2 = ((uint8_t*) VAR_2) + VAR_3;
    FUNC_2 ((uint8_t*) (((uint32_t*) VAR_2) - 1), VAR_0);
    VAR_6 = (uint8_t*) VAR_2 - (uint8_t*) VAR_4 - VAR_5;
    FUNC_0(VAR_6 < VAR_1);
    FUNC_2 ((uint8_t*) (((uint32_t*) VAR_2) - 2), (uint32_t) VAR_6);


    VAR_4->size -= VAR_3;

    return VAR_2;
}
