
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct BlackRock {scalar_t__ range; int seed; int b_mask; int b_bits; int a_mask; int a_bits; int rounds; } ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,scalar_t__,int ) ;

uint64_t
FUNC_1(const struct BlackRock *VAR_0, uint64_t VAR_1)
{
    uint64_t VAR_2;

    VAR_2 = FUNC_0(VAR_0->rounds, VAR_0->a_bits, VAR_0->a_mask, VAR_0->b_bits, VAR_0->b_mask, VAR_1, VAR_0->seed);
    while (VAR_2 >= VAR_0->range)
        VAR_2 = FUNC_0(VAR_0->rounds, VAR_0->a_bits, VAR_0->a_mask, VAR_0->b_bits, VAR_0->b_mask, VAR_2, VAR_0->seed);

    return VAR_2;
}
