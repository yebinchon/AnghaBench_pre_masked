
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_module_info {int bin_path; int data_path; } ;
typedef int obs_module_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_2, const struct obs_module_info *VAR_3)
{
 obs_module_t *VAR_4;

 int VAR_5 = FUNC_3(&VAR_4, VAR_3->bin_path, VAR_3->data_path);
 if (VAR_5 != VAR_1) {
  FUNC_1(VAR_0, "Failed to load module file '%s': %d",
       VAR_3->bin_path, VAR_5);
  return;
 }

 FUNC_2(VAR_4);

 FUNC_0(VAR_2);
}
