
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int dummy; } ;
struct dt_info {int dummy; } ;
struct check {int dummy; } ;


 int FUNC_0 (struct check*,struct dt_info*,struct node*,char*) ;
 int FUNC_1 (struct node*) ;
 scalar_t__ FUNC_2 (int ,char) ;

__attribute__((used)) static void FUNC_3(struct check *VAR_0, struct dt_info *VAR_1,
       struct node *VAR_2)
{
 if (FUNC_2(FUNC_1(VAR_2), '@'))
  FUNC_0(VAR_0, VAR_1, VAR_2, "multiple '@' characters in node name");
}
