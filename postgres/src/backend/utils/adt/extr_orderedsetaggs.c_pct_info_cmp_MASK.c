
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pct_info {scalar_t__ first_row; scalar_t__ second_row; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct pct_info *VAR_2 = (const struct pct_info *) VAR_0;
 const struct pct_info *VAR_3 = (const struct pct_info *) VAR_1;

 if (VAR_2->first_row != VAR_3->first_row)
  return (VAR_2->first_row < VAR_3->first_row) ? -1 : 1;
 if (VAR_2->second_row != VAR_3->second_row)
  return (VAR_2->second_row < VAR_3->second_row) ? -1 : 1;
 return 0;
}
