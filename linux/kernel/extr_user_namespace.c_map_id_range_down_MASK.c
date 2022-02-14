
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct uid_gid_map {unsigned int nr_extents; } ;
struct uid_gid_extent {scalar_t__ lower_first; scalar_t__ first; } ;


 unsigned int VAR_0 ;
 struct uid_gid_extent* FUNC_0 (unsigned int,struct uid_gid_map*,scalar_t__,scalar_t__) ;
 struct uid_gid_extent* FUNC_1 (unsigned int,struct uid_gid_map*,scalar_t__,scalar_t__) ;
 int FUNC_2 () ;

__attribute__((used)) static u32 FUNC_3(struct uid_gid_map *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct uid_gid_extent *VAR_4;
 unsigned VAR_5 = VAR_1->nr_extents;
 FUNC_2();

 if (VAR_5 <= VAR_0)
  VAR_4 = FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3);
 else
  VAR_4 = FUNC_1(VAR_5, VAR_1, VAR_2, VAR_3);


 if (VAR_4)
  VAR_2 = (VAR_2 - VAR_4->first) + VAR_4->lower_first;
 else
  VAR_2 = (u32) -1;

 return VAR_2;
}
