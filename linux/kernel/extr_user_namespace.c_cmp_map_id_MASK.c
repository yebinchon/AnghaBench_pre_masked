
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct uid_gid_extent {scalar_t__ lower_first; scalar_t__ first; scalar_t__ count; } ;
struct idmap_key {scalar_t__ id; scalar_t__ count; scalar_t__ map_up; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4;
 const struct idmap_key *VAR_5 = VAR_0;
 const struct uid_gid_extent *VAR_6 = VAR_1;

 VAR_4 = VAR_5->id + VAR_5->count - 1;


 if (VAR_5->map_up)
  VAR_2 = VAR_6->lower_first;
 else
  VAR_2 = VAR_6->first;

 VAR_3 = VAR_2 + VAR_6->count - 1;

 if (VAR_5->id >= VAR_2 && VAR_5->id <= VAR_3 &&
     (VAR_4 >= VAR_2 && VAR_4 <= VAR_3))
  return 0;

 if (VAR_5->id < VAR_2 || VAR_4 < VAR_2)
  return -1;

 return 1;
}
