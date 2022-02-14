
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int dummy; } ;
struct node {int dummy; } ;
struct dt_info {int dt; } ;
struct check {int dummy; } ;


 int FUNC_0 (struct check*,struct dt_info*,struct node*,struct property*,char*) ;
 struct node* FUNC_1 (int ,int) ;
 struct property* FUNC_2 (struct node*,char*) ;
 int FUNC_3 (struct property*) ;

__attribute__((used)) static struct node *FUNC_4(struct check *VAR_0, struct dt_info *VAR_1,
     struct node *VAR_2)
{
 int VAR_3;
 struct node *VAR_4;
 struct property *VAR_5;

 VAR_5 = FUNC_2(VAR_2, "remote-endpoint");
 if (!VAR_5)
  return ((void*)0);

 VAR_3 = FUNC_3(VAR_5);

 if (VAR_3 == 0 || VAR_3 == -1)
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_1->dt, VAR_3);
 if (!VAR_4)
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5, "graph phandle is not valid");

 return VAR_4;
}
