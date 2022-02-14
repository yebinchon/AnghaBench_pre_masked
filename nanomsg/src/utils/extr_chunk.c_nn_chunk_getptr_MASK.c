
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int * uint32_t ;
struct nn_chunk {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static struct nn_chunk *FUNC_2 (void *VAR_1)
{
    uint32_t VAR_2;

    FUNC_0 (FUNC_1 ((uint8_t*) VAR_1 - sizeof (uint32_t)) == VAR_0);
    VAR_2 = FUNC_1 ((uint8_t*) VAR_1 - 2 * sizeof (uint32_t));

    return (struct nn_chunk*) ((uint8_t*) VAR_1 - 2 *sizeof (uint32_t) - VAR_2 -
        sizeof (struct nn_chunk));
}
