
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct qfq_group {unsigned int S; unsigned int slot_shift; unsigned int full_slots; unsigned int front; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct qfq_group *VAR_1, u64 VAR_2)
{
 unsigned int VAR_3 = (VAR_1->S - VAR_2) >> VAR_1->slot_shift;

 VAR_1->full_slots <<= VAR_3;
 VAR_1->front = (VAR_1->front - VAR_3) % VAR_0;
}
