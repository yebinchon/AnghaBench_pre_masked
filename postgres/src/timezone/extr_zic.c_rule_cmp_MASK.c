
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rule {scalar_t__ r_hiyear; scalar_t__ r_month; int r_dayofmonth; } ;



__attribute__((used)) static int
FUNC_0(struct rule const *VAR_0, struct rule const *VAR_1)
{
 if (!VAR_0)
  return -!!VAR_1;
 if (!VAR_1)
  return 1;
 if (VAR_0->r_hiyear != VAR_1->r_hiyear)
  return VAR_0->r_hiyear < VAR_1->r_hiyear ? -1 : 1;
 if (VAR_0->r_month - VAR_1->r_month != 0)
  return VAR_0->r_month - VAR_1->r_month;
 return VAR_0->r_dayofmonth - VAR_1->r_dayofmonth;
}
