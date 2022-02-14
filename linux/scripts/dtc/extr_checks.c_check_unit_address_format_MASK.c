
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct node {TYPE_1__* parent; } ;
struct dt_info {int dummy; } ;
struct check {int dummy; } ;
struct TYPE_2__ {scalar_t__ bus; } ;


 int FUNC_0 (struct check*,struct dt_info*,struct node*,char*) ;
 char* FUNC_1 (struct node*) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (char const*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct check *VAR_0, struct dt_info *VAR_1,
          struct node *VAR_2)
{
 const char *VAR_3 = FUNC_1(VAR_2);

 if (VAR_2->parent && VAR_2->parent->bus)
  return;

 if (!VAR_3[0])
  return;

 if (!FUNC_3(VAR_3, "0x", 2)) {
  FUNC_0(VAR_0, VAR_1, VAR_2, "unit name should not have leading \"0x\"");

  VAR_3 += 2;
 }
 if (VAR_3[0] == '0' && FUNC_2(VAR_3[1]))
  FUNC_0(VAR_0, VAR_1, VAR_2, "unit name should not have leading 0s");
}
