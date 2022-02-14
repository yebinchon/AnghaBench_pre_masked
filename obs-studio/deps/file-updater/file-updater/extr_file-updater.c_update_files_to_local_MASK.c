
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct update_info {int cache_package; } ;
struct file_update_data {int version; int name; int found; scalar_t__ newer; } ;
typedef int obs_data_t ;


 int FUNC_0 (struct update_info*,int ) ;
 int FUNC_1 (int ,int ,struct file_update_data*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static bool FUNC_4(void *VAR_1, obs_data_t *VAR_2)
{
 struct update_info *VAR_3 = VAR_1;
 struct file_update_data VAR_4 = {
  .name = FUNC_3(VAR_2, "name"),
  .version = (int)FUNC_2(VAR_2, "version")};

 FUNC_1(VAR_3->cache_package, VAR_0, &VAR_4);
 if (VAR_4.newer || !VAR_4.found)
  FUNC_0(VAR_3, VAR_4.name);

 return 1;
}
