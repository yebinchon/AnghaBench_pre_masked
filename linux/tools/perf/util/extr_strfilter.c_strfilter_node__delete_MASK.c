
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strfilter_node {struct strfilter_node* r; struct strfilter_node* l; int * p; } ;


 int FUNC_0 (struct strfilter_node*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char**) ;

__attribute__((used)) static void FUNC_3(struct strfilter_node *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->p && !FUNC_1(*VAR_0->p))
   FUNC_2((char **)&VAR_0->p);
  FUNC_3(VAR_0->l);
  FUNC_3(VAR_0->r);
  FUNC_0(VAR_0);
 }
}
