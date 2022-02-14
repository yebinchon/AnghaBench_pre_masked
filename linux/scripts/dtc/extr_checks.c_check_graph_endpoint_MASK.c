
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct node {int fullpath; int basenamelen; int name; TYPE_1__* parent; } ;
struct dt_info {int dummy; } ;
struct check {int dummy; } ;
struct TYPE_2__ {int * bus; } ;


 int FUNC_0 (struct check*,struct dt_info*,struct node*,char*,...) ;
 int FUNC_1 (struct check*,struct dt_info*,struct node*) ;
 struct node* FUNC_2 (struct check*,struct dt_info*,struct node*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,char*) ;

__attribute__((used)) static void FUNC_4(struct check *VAR_1, struct dt_info *VAR_2,
     struct node *VAR_3)
{
 struct node *VAR_4;

 if (!VAR_3->parent || VAR_3->parent->bus != &VAR_0)
  return;

 if (!FUNC_3(VAR_3->name, VAR_3->basenamelen, "endpoint"))
  FUNC_0(VAR_1, VAR_2, VAR_3, "graph endpoint node name should be 'endpoint'");

 FUNC_1(VAR_1, VAR_2, VAR_3);

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (!VAR_4)
  return;

 if (FUNC_2(VAR_1, VAR_2, VAR_4) != VAR_3)
  FUNC_0(VAR_1, VAR_2, VAR_3, "graph connection to node '%s' is not bidirectional",
       VAR_4->fullpath);
}
