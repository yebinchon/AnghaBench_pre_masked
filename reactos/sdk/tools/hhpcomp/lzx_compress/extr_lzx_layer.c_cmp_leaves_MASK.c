
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct h_elem {scalar_t__ freq; int sym; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
  const struct h_elem *VAR_2 = VAR_0;
  const struct h_elem *VAR_3 = VAR_1;

  if (!VAR_2->freq && VAR_3->freq)
    return 1;
  if (VAR_2->freq && !VAR_3->freq)
    return -1;

  if (VAR_2->freq == VAR_3->freq)
    return VAR_2->sym - VAR_3->sym;

  return VAR_2->freq - VAR_3->freq;
}
