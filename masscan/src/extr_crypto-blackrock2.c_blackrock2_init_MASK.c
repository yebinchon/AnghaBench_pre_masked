
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double uint64_t ;
struct BlackRock {double range; double a; unsigned long long a_mask; double b; unsigned int rounds; double seed; scalar_t__ b_mask; void* b_bits; void* a_bits; } ;


 void* FUNC_0 (double) ;
 double FUNC_1 (double) ;
 scalar_t__ FUNC_2 (double) ;

void
FUNC_3(struct BlackRock *VAR_0, uint64_t VAR_1, uint64_t VAR_2, unsigned VAR_3)
{
    uint64_t VAR_4;
    uint64_t VAR_5;

    VAR_4 = FUNC_1(
                                (uint64_t)FUNC_2(VAR_1 * 1.0)
                          );
    VAR_5 = FUNC_1(VAR_1/VAR_4);



    VAR_0->range = VAR_1;

    VAR_0->a = VAR_4;
    VAR_0->a_bits = FUNC_0(VAR_0->a);
    VAR_0->a_mask = VAR_0->a - 1ULL;

    VAR_0->b = VAR_5;
    VAR_0->b_bits = FUNC_0(VAR_0->b);
    VAR_0->b_mask = VAR_0->b - 1ULL;




    VAR_0->rounds = VAR_3;
    VAR_0->seed = VAR_2;
    VAR_0->range = VAR_1;
}
