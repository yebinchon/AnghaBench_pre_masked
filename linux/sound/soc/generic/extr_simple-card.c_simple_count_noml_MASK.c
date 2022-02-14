
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_info {int link; int dais; } ;
struct device_node {int dummy; } ;
struct asoc_simple_priv {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct asoc_simple_priv *VAR_0,
        struct device_node *VAR_1,
        struct device_node *VAR_2,
        struct link_info *VAR_3, bool VAR_4)
{
 VAR_3->dais++;
 if (VAR_1 != VAR_2)
  VAR_3->link++;

 return 0;
}
