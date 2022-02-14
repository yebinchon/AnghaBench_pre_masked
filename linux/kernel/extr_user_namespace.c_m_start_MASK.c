
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uid_gid_map {unsigned int nr_extents; void* extent; void* forward; } ;
struct seq_file {int dummy; } ;
typedef unsigned int loff_t ;


 unsigned int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_1, loff_t *VAR_2,
       struct uid_gid_map *VAR_3)
{
 loff_t VAR_4 = *VAR_2;
 unsigned VAR_5 = VAR_3->nr_extents;
 FUNC_0();

 if (VAR_4 >= VAR_5)
  return ((void*)0);

 if (VAR_5 <= VAR_0)
  return &VAR_3->extent[VAR_4];

 return &VAR_3->forward[VAR_4];
}
