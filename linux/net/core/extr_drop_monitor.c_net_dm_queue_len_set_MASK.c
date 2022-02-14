
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genl_info {int * attrs; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct genl_info *VAR_2)
{
 if (!VAR_2->attrs[VAR_0])
  return;

 VAR_1 = FUNC_0(VAR_2->attrs[VAR_0]);
}
