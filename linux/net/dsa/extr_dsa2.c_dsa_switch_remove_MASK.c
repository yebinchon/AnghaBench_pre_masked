
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch_tree {int dummy; } ;
struct dsa_switch {unsigned int index; struct dsa_switch_tree* dst; } ;


 int FUNC_0 (struct dsa_switch_tree*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct dsa_switch *VAR_0)
{
 struct dsa_switch_tree *VAR_1 = VAR_0->dst;
 unsigned int VAR_2 = VAR_0->index;

 FUNC_0(VAR_1, VAR_2);
}
