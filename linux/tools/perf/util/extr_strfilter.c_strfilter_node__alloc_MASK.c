
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strfilter_node {char const* p; struct strfilter_node* r; struct strfilter_node* l; } ;


 struct strfilter_node* FUNC_0 (int) ;

__attribute__((used)) static struct strfilter_node *FUNC_1(const char *VAR_0,
          struct strfilter_node *VAR_1,
          struct strfilter_node *VAR_2)
{
 struct strfilter_node *VAR_3 = FUNC_0(sizeof(*VAR_3));

 if (VAR_3) {
  VAR_3->p = VAR_0;
  VAR_3->l = VAR_1;
  VAR_3->r = VAR_2;
 }

 return VAR_3;
}
