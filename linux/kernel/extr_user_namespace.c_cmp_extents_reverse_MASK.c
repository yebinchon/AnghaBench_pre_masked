
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uid_gid_extent {scalar_t__ lower_first; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct uid_gid_extent *VAR_2 = VAR_0;
 const struct uid_gid_extent *VAR_3 = VAR_1;

 if (VAR_2->lower_first < VAR_3->lower_first)
  return -1;

 if (VAR_2->lower_first > VAR_3->lower_first)
  return 1;

 return 0;
}
