
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dentry; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct path const*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(const struct path *VAR_1)
{
 if (FUNC_3(FUNC_0(FUNC_2(VAR_1->dentry))))
  return 0;
 return FUNC_1(VAR_0, 0, VAR_1);
}
