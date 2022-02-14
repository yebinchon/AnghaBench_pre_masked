
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct call_path_root {int blocks; int call_path; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *,int ,int) ;
 struct call_path_root* FUNC_2 (int) ;

struct call_path_root *FUNC_3(void)
{
 struct call_path_root *VAR_0;

 VAR_0 = FUNC_2(sizeof(struct call_path_root));
 if (!VAR_0)
  return ((void*)0);
 FUNC_1(&VAR_0->call_path, ((void*)0), ((void*)0), 0, 0);
 FUNC_0(&VAR_0->blocks);
 return VAR_0;
}
