
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsa_switch {int dst; int index; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device_node*,char*,int *,int,int) ;

__attribute__((used)) static int FUNC_2(struct dsa_switch *VAR_3,
          struct device_node *VAR_4)
{
 u32 VAR_5[2] = { 0, 0 };
 int VAR_6;


 VAR_6 = FUNC_1(VAR_4, "dsa,member", VAR_5, 2, 2);
 if (VAR_6 < 0 && VAR_6 != -VAR_1)
  return VAR_6;

 VAR_3->index = VAR_5[1];
 if (VAR_3->index >= VAR_0)
  return -VAR_1;

 VAR_3->dst = FUNC_0(VAR_5[0]);
 if (!VAR_3->dst)
  return -VAR_2;

 return 0;
}
