
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_info {int dais; int conf; int link; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct asoc_simple_priv {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 struct device* FUNC_1 (struct asoc_simple_priv*) ;

__attribute__((used)) static int FUNC_2(struct asoc_simple_priv *VAR_0,
       struct device_node *VAR_1,
       struct device_node *VAR_2,
       struct link_info *VAR_3,
       int VAR_4)
{
 struct device *VAR_5 = FUNC_1(VAR_0);

 VAR_3->link++;
 VAR_3->dais++;

 if (!VAR_4) {
  VAR_3->link++;
  VAR_3->conf++;
  VAR_3->dais++;
 }

 FUNC_0(VAR_5, "Count As DPCM\n");

 return 0;
}
