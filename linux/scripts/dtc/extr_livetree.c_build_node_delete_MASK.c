
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcpos {int dummy; } ;
struct node {int deleted; int srcpos; } ;


 int FUNC_0 (struct node*,int ,int) ;
 int FUNC_1 (struct srcpos*) ;
 struct node* FUNC_2 (int) ;

struct node *FUNC_3(struct srcpos *VAR_0)
{
 struct node *VAR_1 = FUNC_2(sizeof(*VAR_1));

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->deleted = 1;
 VAR_1->srcpos = FUNC_1(VAR_0);

 return VAR_1;
}
