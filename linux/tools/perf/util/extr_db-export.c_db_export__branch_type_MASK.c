
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct db_export {int (* export_branch_type ) (struct db_export*,int ,char const*) ;} ;


 int FUNC_0 (struct db_export*,int ,char const*) ;

int FUNC_1(struct db_export *VAR_0, u32 VAR_1,
      const char *VAR_2)
{
 if (VAR_0->export_branch_type)
  return VAR_0->export_branch_type(VAR_0, VAR_1, VAR_2);

 return 0;
}
