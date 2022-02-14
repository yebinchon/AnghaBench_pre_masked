
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edge_node {int flags; struct bb_node* dst; struct bb_node* src; } ;
struct bb_node {int dummy; } ;


 struct edge_node* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static struct edge_node *FUNC_2(struct bb_node *VAR_0, struct bb_node *VAR_1,
      int VAR_2)
{
 struct edge_node *VAR_3;

 VAR_3 = FUNC_0(1, sizeof(*VAR_3));
 if (!VAR_3) {
  FUNC_1("OOM when allocating edge node");
  return ((void*)0);
 }

 if (VAR_0)
  VAR_3->src = VAR_0;
 if (VAR_1)
  VAR_3->dst = VAR_1;

 VAR_3->flags |= VAR_2;

 return VAR_3;
}
