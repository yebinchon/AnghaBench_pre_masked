
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct uid_gid_map {struct uid_gid_extent* extent; } ;
struct uid_gid_extent {scalar_t__ lower_first; scalar_t__ count; } ;



__attribute__((used)) static struct uid_gid_extent *
FUNC_0(unsigned VAR_0, struct uid_gid_map *VAR_1, u32 VAR_2)
{
 unsigned VAR_3;
 u32 VAR_4, VAR_5;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = VAR_1->extent[VAR_3].lower_first;
  VAR_5 = VAR_4 + VAR_1->extent[VAR_3].count - 1;
  if (VAR_2 >= VAR_4 && VAR_2 <= VAR_5)
   return &VAR_1->extent[VAR_3];
 }
 return ((void*)0);
}
