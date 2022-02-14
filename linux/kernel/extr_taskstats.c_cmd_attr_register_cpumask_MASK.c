
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genl_info {int snd_portid; int * attrs; } ;
typedef int cpumask_var_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct genl_info *VAR_4)
{
 cpumask_var_t VAR_5;
 int VAR_6;

 if (!FUNC_1(&VAR_5, VAR_1))
  return -VAR_0;
 VAR_6 = FUNC_3(VAR_4->attrs[VAR_3], VAR_5);
 if (VAR_6 < 0)
  goto out;
 VAR_6 = FUNC_0(VAR_4->snd_portid, VAR_5, VAR_2);
out:
 FUNC_2(VAR_5);
 return VAR_6;
}
