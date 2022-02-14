
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct float_pair {int s; scalar_t__ x; } ;



__attribute__((used)) static void
FUNC_0(struct float_pair *VAR_0, struct float_pair const *VAR_1,
         struct float_pair const *VAR_2)
{
  VAR_0->s = VAR_1->s / VAR_2->s;
  VAR_0->x = VAR_1->x - VAR_2->x;
}
