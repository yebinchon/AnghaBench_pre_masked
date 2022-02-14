
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct uid_gid_map {unsigned int nr_extents; struct uid_gid_extent* forward; struct uid_gid_extent* extent; } ;
struct uid_gid_extent {scalar_t__ first; scalar_t__ lower_first; scalar_t__ count; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct uid_gid_map *VAR_1,
        struct uid_gid_extent *VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5, VAR_6;
 unsigned VAR_7;

 VAR_3 = VAR_2->first;
 VAR_4 = VAR_2->lower_first;
 VAR_5 = VAR_3 + VAR_2->count - 1;
 VAR_6 = VAR_4 + VAR_2->count - 1;

 for (VAR_7 = 0; VAR_7 < VAR_1->nr_extents; VAR_7++) {
  u32 VAR_8, VAR_9;
  u32 VAR_10, VAR_11;
  struct uid_gid_extent *VAR_12;

  if (VAR_1->nr_extents <= VAR_0)
   VAR_12 = &VAR_1->extent[VAR_7];
  else
   VAR_12 = &VAR_1->forward[VAR_7];

  VAR_8 = VAR_12->first;
  VAR_9 = VAR_12->lower_first;
  VAR_10 = VAR_8 + VAR_12->count - 1;
  VAR_11 = VAR_9 + VAR_12->count - 1;


  if ((VAR_8 <= VAR_5) &&
      (VAR_10 >= VAR_3))
   return 1;


  if ((VAR_9 <= VAR_6) &&
      (VAR_11 >= VAR_4))
   return 1;
 }
 return 0;
}
