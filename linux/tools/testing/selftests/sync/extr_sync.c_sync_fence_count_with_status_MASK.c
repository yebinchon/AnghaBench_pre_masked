
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sync_file_info {unsigned int num_fences; scalar_t__ sync_fence_info; } ;
struct sync_fence_info {int status; } ;


 struct sync_file_info* FUNC_0 (int) ;
 int FUNC_1 (struct sync_file_info*) ;

int FUNC_2(int VAR_0, int VAR_1)
{
 unsigned int VAR_2, VAR_3 = 0;
 struct sync_fence_info *VAR_4 = ((void*)0);
 struct sync_file_info *VAR_5 = FUNC_0(VAR_0);

 if (!VAR_5)
  return -1;

 VAR_4 = (struct sync_fence_info *)VAR_5->sync_fence_info;
 for (VAR_2 = 0 ; VAR_2 < VAR_5->num_fences ; VAR_2++) {
  if (VAR_4[VAR_2].status == VAR_1)
   VAR_3++;
 }

 FUNC_1(VAR_5);

 return VAR_3;
}
