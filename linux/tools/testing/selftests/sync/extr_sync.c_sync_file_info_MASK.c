
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct sync_file_info {int num_fences; scalar_t__ sync_fence_info; scalar_t__ flags; } ;
struct sync_fence_info {int num_fences; scalar_t__ sync_fence_info; scalar_t__ flags; } ;


 int VAR_0 ;
 struct sync_file_info* FUNC_0 (int,int) ;
 int FUNC_1 (struct sync_file_info*) ;
 int FUNC_2 (int,int ,struct sync_file_info*) ;

__attribute__((used)) static struct sync_file_info *FUNC_3(int VAR_1)
{
 struct sync_file_info *VAR_2;
 struct sync_fence_info *VAR_3;
 int VAR_4, VAR_5;

 VAR_2 = FUNC_0(1, sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_4 = FUNC_2(VAR_1, VAR_0, VAR_2);
 if (VAR_4 < 0) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }

 VAR_5 = VAR_2->num_fences;

 if (VAR_5) {
  VAR_2->flags = 0;
  VAR_2->num_fences = VAR_5;

  VAR_3 = FUNC_0(VAR_5, sizeof(*VAR_3));
  if (!VAR_3) {
   FUNC_1(VAR_2);
   return ((void*)0);
  }

  VAR_2->sync_fence_info = (uint64_t)VAR_3;

  VAR_4 = FUNC_2(VAR_1, VAR_0, VAR_2);
  if (VAR_4 < 0) {
   FUNC_1(VAR_3);
   FUNC_1(VAR_2);
   return ((void*)0);
  }
 }

 return VAR_2;
}
