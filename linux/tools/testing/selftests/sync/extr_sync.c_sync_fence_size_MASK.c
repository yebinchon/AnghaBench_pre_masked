
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sync_file_info {int num_fences; } ;


 struct sync_file_info* FUNC_0 (int) ;
 int FUNC_1 (struct sync_file_info*) ;

int FUNC_2(int VAR_0)
{
 int VAR_1;
 struct sync_file_info *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2)
  return 0;

 VAR_1 = VAR_2->num_fences;

 FUNC_1(VAR_2);

 return VAR_1;
}
