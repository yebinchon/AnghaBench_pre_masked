
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct uid_gid_map {int forward; } ;
struct uid_gid_extent {int dummy; } ;
struct idmap_key {int map_up; void* id; void* count; } ;


 struct uid_gid_extent* FUNC_0 (struct idmap_key*,int ,unsigned int,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct uid_gid_extent *
FUNC_1(unsigned VAR_1, struct uid_gid_map *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct idmap_key VAR_5;

 VAR_5.map_up = 0;
 VAR_5.count = VAR_4;
 VAR_5.id = VAR_3;

 return FUNC_0(&VAR_5, VAR_2->forward, VAR_1,
         sizeof(struct uid_gid_extent), VAR_0);
}
