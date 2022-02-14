
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int unit_addr ;
typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ val; } ;
struct property {TYPE_1__ val; } ;
struct node {struct node* parent; int * bus; } ;
struct dt_info {int dummy; } ;
struct check {int dummy; } ;
typedef int cell_t ;


 int FUNC_0 (struct check*,struct dt_info*,struct node*,char*,...) ;
 int FUNC_1 (int ) ;
 struct property* FUNC_2 (struct node*,char*) ;
 char* FUNC_3 (struct node*) ;
 int FUNC_4 (char*,int,char*,int) ;
 int VAR_0 ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static void FUNC_6(struct check *VAR_1, struct dt_info *VAR_2, struct node *VAR_3)
{
 struct property *VAR_4;
 const char *VAR_5 = FUNC_3(VAR_3);
 char VAR_6[9];
 uint32_t VAR_7 = 0;
 cell_t *VAR_8 = ((void*)0);

 if (!VAR_3->parent || (VAR_3->parent->bus != &VAR_0))
  return;

 if (FUNC_2(VAR_3->parent, "spi-slave"))
  return;

 VAR_4 = FUNC_2(VAR_3, "reg");
 if (VAR_4)
  VAR_8 = (cell_t *)VAR_4->val.val;

 if (!VAR_8) {
  FUNC_0(VAR_1, VAR_2, VAR_3, "missing or empty reg property");
  return;
 }

 VAR_7 = FUNC_1(*VAR_8);
 FUNC_4(VAR_6, sizeof(VAR_6), "%x", VAR_7);
 if (!FUNC_5(VAR_5, VAR_6))
  FUNC_0(VAR_1, VAR_2, VAR_3, "SPI bus unit address format error, expected \"%s\"",
       VAR_6);
}
