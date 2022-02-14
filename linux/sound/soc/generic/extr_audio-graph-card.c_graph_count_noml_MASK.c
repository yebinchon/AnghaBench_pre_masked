
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_info {int link; int dais; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct asoc_simple_priv {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 struct device* FUNC_1 (struct asoc_simple_priv*) ;

__attribute__((used)) static int FUNC_2(struct asoc_simple_priv *VAR_0,
       struct device_node *VAR_1,
       struct device_node *VAR_2,
       struct link_info *VAR_3)
{
 struct device *VAR_4 = FUNC_1(VAR_0);

 VAR_3->link += 1;
 VAR_3->dais += 2;

 FUNC_0(VAR_4, "Count As Normal\n");

 return 0;
}
