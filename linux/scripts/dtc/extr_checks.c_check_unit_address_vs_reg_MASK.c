
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct property {TYPE_1__ val; } ;
struct node {int dummy; } ;
struct dt_info {int dummy; } ;
struct check {int dummy; } ;


 int FUNC_0 (struct check*,struct dt_info*,struct node*,char*) ;
 struct property* FUNC_1 (struct node*,char*) ;
 scalar_t__ FUNC_2 (struct node*,char*) ;
 char* FUNC_3 (struct node*) ;

__attribute__((used)) static void FUNC_4(struct check *VAR_0, struct dt_info *VAR_1,
          struct node *VAR_2)
{
 const char *VAR_3 = FUNC_3(VAR_2);
 struct property *VAR_4 = FUNC_1(VAR_2, "reg");

 if (FUNC_2(VAR_2, "__overlay__")) {

  return;
 }

 if (!VAR_4) {
  VAR_4 = FUNC_1(VAR_2, "ranges");
  if (VAR_4 && !VAR_4->val.len)
   VAR_4 = ((void*)0);
 }

 if (VAR_4) {
  if (!VAR_3[0])
   FUNC_0(VAR_0, VAR_1, VAR_2, "node has a reg or ranges property, but no unit name");
 } else {
  if (VAR_3[0])
   FUNC_0(VAR_0, VAR_1, VAR_2, "node has a unit name, but no reg property");
 }
}
