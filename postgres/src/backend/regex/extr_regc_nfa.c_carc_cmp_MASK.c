
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carc {scalar_t__ co; scalar_t__ to; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct carc *VAR_2 = (const struct carc *) VAR_0;
 const struct carc *VAR_3 = (const struct carc *) VAR_1;

 if (VAR_2->co < VAR_3->co)
  return -1;
 if (VAR_2->co > VAR_3->co)
  return +1;
 if (VAR_2->to < VAR_3->to)
  return -1;
 if (VAR_2->to > VAR_3->to)
  return +1;
 return 0;
}
