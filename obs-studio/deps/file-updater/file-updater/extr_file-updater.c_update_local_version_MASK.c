
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct update_info {int local_package; int cache_package; } ;


 int FUNC_0 (struct update_info*,char*) ;
 int FUNC_1 (int ,int ,struct update_info*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct update_info *VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;

 VAR_2 = (int)FUNC_3(VAR_1->local_package, "version");
 VAR_3 = (int)FUNC_3(VAR_1->cache_package, "version");


 if (VAR_3 < VAR_2) {
  FUNC_1(VAR_1->local_package, VAR_0, VAR_1);
  FUNC_0(VAR_1, "package.json");

  FUNC_4(VAR_1->cache_package);
  FUNC_2(VAR_1->local_package);
  VAR_1->cache_package = VAR_1->local_package;

  return VAR_2;
 }

 return VAR_3;
}
