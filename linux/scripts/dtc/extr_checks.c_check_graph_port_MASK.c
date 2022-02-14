
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int basenamelen; int name; int * bus; } ;
struct dt_info {int dummy; } ;
struct check {int dummy; } ;


 int FUNC_0 (struct check*,struct dt_info*,struct node*,char*) ;
 int FUNC_1 (struct check*,struct dt_info*,struct node*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,char*) ;

__attribute__((used)) static void FUNC_3(struct check *VAR_1, struct dt_info *VAR_2,
        struct node *VAR_3)
{
 if (VAR_3->bus != &VAR_0)
  return;

 if (!FUNC_2(VAR_3->name, VAR_3->basenamelen, "port"))
  FUNC_0(VAR_1, VAR_2, VAR_3, "graph port node name should be 'port'");

 FUNC_1(VAR_1, VAR_2, VAR_3);
}
