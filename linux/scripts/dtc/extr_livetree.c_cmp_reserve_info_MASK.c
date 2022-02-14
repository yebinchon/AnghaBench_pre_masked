
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reserve_info {scalar_t__ address; scalar_t__ size; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct reserve_info *VAR_2, *VAR_3;

 VAR_2 = *((const struct reserve_info * const *)VAR_0);
 VAR_3 = *((const struct reserve_info * const *)VAR_1);

 if (VAR_2->address < VAR_3->address)
  return -1;
 else if (VAR_2->address > VAR_3->address)
  return 1;
 else if (VAR_2->size < VAR_3->size)
  return -1;
 else if (VAR_2->size > VAR_3->size)
  return 1;
 else
  return 0;
}
