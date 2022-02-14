
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ unichar ;
struct Interval {scalar_t__ start; scalar_t__ end; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  unichar VAR_2 = (unichar) (long) (VAR_0);
  struct Interval *VAR_3 = (struct Interval *)VAR_1;

  if (VAR_2 < VAR_3->start)
    return -1;
  if (VAR_2 > VAR_3->end)
    return +1;

  return 0;
}
