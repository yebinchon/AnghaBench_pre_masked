
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct word_at_a_time {unsigned long one_bits; unsigned long high_bits; } ;



__attribute__((used)) static inline unsigned long FUNC_0(unsigned long VAR_0, unsigned long *VAR_1, const struct word_at_a_time *VAR_2)
{
 unsigned long VAR_3 = ((VAR_0 - VAR_2->one_bits) & ~VAR_0) & VAR_2->high_bits;
 *VAR_1 = VAR_3;
 return VAR_3;
}
