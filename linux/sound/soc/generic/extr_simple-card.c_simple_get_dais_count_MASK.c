
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_info {int link; int dais; int conf; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct asoc_simple_priv {int dummy; } ;


 int FUNC_0 (struct device*,char*,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct asoc_simple_priv*,struct link_info*,int ,int ) ;
 struct device* FUNC_2 (struct asoc_simple_priv*) ;

__attribute__((used)) static void FUNC_3(struct asoc_simple_priv *VAR_2,
      struct link_info *VAR_3)
{
 struct device *VAR_4 = FUNC_2(VAR_2);
 struct device_node *VAR_5 = VAR_4->of_node;
 if (!VAR_5) {
  VAR_3->link = 1;
  VAR_3->dais = 2;
  VAR_3->conf = 0;
  return;
 }

 FUNC_1(VAR_2, VAR_3,
        VAR_1,
        VAR_0);

 FUNC_0(VAR_4, "link %d, dais %d, ccnf %d\n",
  VAR_3->link, VAR_3->dais, VAR_3->conf);
}
