
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int unit_addr ;
typedef int uint32_t ;
struct TYPE_4__ {int len; scalar_t__ val; } ;
struct property {TYPE_2__ val; } ;
struct node {TYPE_1__* parent; } ;
struct dt_info {int dummy; } ;
struct check {int dummy; } ;
typedef int cell_t ;
struct TYPE_3__ {int * bus; } ;


 int FUNC_0 (struct check*,struct dt_info*,struct node*,char*,...) ;
 int FUNC_1 (struct check*,struct dt_info*,struct node*,struct property*,char*,int) ;
 int FUNC_2 (int ) ;
 struct property* FUNC_3 (struct node*,char*) ;
 char* FUNC_4 (struct node*) ;
 int VAR_0 ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static void FUNC_7(struct check *VAR_1, struct dt_info *VAR_2, struct node *VAR_3)
{
 struct property *VAR_4;
 const char *VAR_5 = FUNC_4(VAR_3);
 char VAR_6[17];
 uint32_t VAR_7 = 0;
 int VAR_8;
 cell_t *VAR_9 = ((void*)0);

 if (!VAR_3->parent || (VAR_3->parent->bus != &VAR_0))
  return;

 VAR_4 = FUNC_3(VAR_3, "reg");
 if (VAR_4)
  VAR_9 = (cell_t *)VAR_4->val.val;

 if (!VAR_9) {
  FUNC_0(VAR_1, VAR_2, VAR_3, "missing or empty reg property");
  return;
 }

 VAR_7 = FUNC_2(*VAR_9);
 FUNC_5(VAR_6, sizeof(VAR_6), "%x", VAR_7);
 if (!FUNC_6(VAR_5, VAR_6))
  FUNC_0(VAR_1, VAR_2, VAR_3, "I2C bus unit address format error, expected \"%s\"",
       VAR_6);

 for (VAR_8 = VAR_4->val.len; VAR_8 > 0; VAR_8 -= 4) {
  VAR_7 = FUNC_2(*(VAR_9++));
  if (VAR_7 > 0x3ff)
   FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, "I2C address must be less than 10-bits, got \"0x%x\"",
      VAR_7);

 }
}
