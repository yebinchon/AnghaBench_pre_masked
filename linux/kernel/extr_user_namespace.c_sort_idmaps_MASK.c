
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uid_gid_map {int nr_extents; int reverse; int forward; } ;
struct uid_gid_extent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int,int,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct uid_gid_map *VAR_5)
{
 if (VAR_5->nr_extents <= VAR_2)
  return 0;


 FUNC_1(VAR_5->forward, VAR_5->nr_extents, sizeof(struct uid_gid_extent),
      VAR_3, ((void*)0));


 VAR_5->reverse = FUNC_0(VAR_5->forward,
          VAR_5->nr_extents * sizeof(struct uid_gid_extent),
          VAR_1);
 if (!VAR_5->reverse)
  return -VAR_0;


 FUNC_1(VAR_5->reverse, VAR_5->nr_extents, sizeof(struct uid_gid_extent),
      VAR_4, ((void*)0));

 return 0;
}
