
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct uid_gid_map {struct uid_gid_extent* extent; } ;
struct uid_gid_extent {scalar_t__ first; scalar_t__ count; } ;



__attribute__((used)) static struct uid_gid_extent *
FUNC_0(unsigned VAR_0, struct uid_gid_map *VAR_1, u32 VAR_2, u32 VAR_3)
{
 unsigned VAR_4;
 u32 VAR_5, VAR_6, VAR_7;

 VAR_7 = VAR_2 + VAR_3 - 1;


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = VAR_1->extent[VAR_4].first;
  VAR_6 = VAR_5 + VAR_1->extent[VAR_4].count - 1;
  if (VAR_2 >= VAR_5 && VAR_2 <= VAR_6 &&
      (VAR_7 >= VAR_5 && VAR_7 <= VAR_6))
   return &VAR_1->extent[VAR_4];
 }
 return ((void*)0);
}
