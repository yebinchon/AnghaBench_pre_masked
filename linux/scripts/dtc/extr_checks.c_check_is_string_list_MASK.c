
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* val; int len; } ;
struct property {TYPE_1__ val; } ;
struct node {int dummy; } ;
struct dt_info {int dummy; } ;
struct check {char* data; } ;


 int FUNC_0 (struct check*,struct dt_info*,struct node*,struct property*,char*) ;
 struct property* FUNC_1 (struct node*,char*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(struct check *VAR_0, struct dt_info *VAR_1,
     struct node *VAR_2)
{
 int VAR_3, VAR_4;
 struct property *VAR_5;
 char *VAR_6 = VAR_0->data;
 char *VAR_7;

 VAR_5 = FUNC_1(VAR_2, VAR_6);
 if (!VAR_5)
  return;

 VAR_7 = VAR_5->val.val;
 VAR_3 = VAR_5->val.len;
 while (VAR_3 > 0) {
  VAR_4 = FUNC_2(VAR_7, VAR_3);
  if (VAR_4 == VAR_3) {
   FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5, "property is not a string list");
   break;
  }
  VAR_3 -= VAR_4 + 1;
  VAR_7 += VAR_4 + 1;
 }
}
