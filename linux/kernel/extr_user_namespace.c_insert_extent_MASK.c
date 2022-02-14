
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uid_gid_map {int nr_extents; struct uid_gid_extent* forward; struct uid_gid_extent* extent; int * reverse; } ;
struct uid_gid_extent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct uid_gid_extent* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct uid_gid_extent*,struct uid_gid_extent*,int) ;

__attribute__((used)) static int FUNC_2(struct uid_gid_map *VAR_4, struct uid_gid_extent *VAR_5)
{
 struct uid_gid_extent *VAR_6;

 if (VAR_4->nr_extents == VAR_2) {
  struct uid_gid_extent *VAR_7;


  VAR_7 = FUNC_0(VAR_3,
     sizeof(struct uid_gid_extent),
     VAR_1);
  if (!VAR_7)
   return -VAR_0;




  FUNC_1(VAR_7, VAR_4->extent,
         VAR_4->nr_extents * sizeof(VAR_4->extent[0]));

  VAR_4->forward = VAR_7;
  VAR_4->reverse = ((void*)0);
 }

 if (VAR_4->nr_extents < VAR_2)
  VAR_6 = &VAR_4->extent[VAR_4->nr_extents];
 else
  VAR_6 = &VAR_4->forward[VAR_4->nr_extents];

 *VAR_6 = *VAR_5;
 VAR_4->nr_extents++;
 return 0;
}
