
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch_tree {int dummy; } ;
struct dsa_switch {struct dsa_switch_tree* dst; } ;


 int FUNC_0 (struct dsa_switch_tree*,struct dsa_switch*) ;

__attribute__((used)) static int FUNC_1(struct dsa_switch *VAR_0)
{
 struct dsa_switch_tree *VAR_1 = VAR_0->dst;

 return FUNC_0(VAR_1, VAR_0);
}
