
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 struct device_node* FUNC_0 (struct device_node*,int ) ;
 struct device_node* FUNC_1 (struct device_node*,int *) ;
 int FUNC_2 (struct device_node*) ;
 struct device* FUNC_3 (struct rsnd_priv*) ;

__attribute__((used)) static struct device_node *FUNC_4(struct rsnd_priv *VAR_1,
         int *VAR_2)
{
 struct device *VAR_3 = FUNC_3(VAR_1);
 struct device_node *VAR_4 = VAR_3->of_node;
 struct device_node *VAR_5;
 struct device_node *VAR_6;

 *VAR_2 = 0;





 VAR_5 = FUNC_0(VAR_4, VAR_0);
 if (VAR_5) {
  VAR_6 = VAR_5;
  goto of_node_compatible;
 }

 VAR_6 = VAR_4;

 VAR_5 = FUNC_1(VAR_4, ((void*)0));
 if (VAR_5)
  goto of_node_graph;

 return ((void*)0);

of_node_graph:
 *VAR_2 = 1;
of_node_compatible:
 FUNC_2(VAR_5);

 return VAR_6;
}
