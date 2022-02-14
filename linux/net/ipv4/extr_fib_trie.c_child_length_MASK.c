
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_vector {unsigned long bits; } ;



__attribute__((used)) static inline unsigned long FUNC_0(const struct key_vector *VAR_0)
{
 return (1ul << VAR_0->bits) & ~(1ul);
}
