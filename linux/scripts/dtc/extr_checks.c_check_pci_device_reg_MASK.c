
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int unit_addr ;
struct TYPE_4__ {scalar_t__ val; } ;
struct property {TYPE_2__ val; } ;
struct node {TYPE_1__* parent; } ;
struct dt_info {int dummy; } ;
struct check {int dummy; } ;
typedef scalar_t__ cell_t ;
struct TYPE_3__ {int * bus; } ;


 int FUNC_0 (struct check*,struct dt_info*,struct node*,char*,...) ;
 int FUNC_1 (struct check*,struct dt_info*,struct node*,struct property*,char*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 struct property* FUNC_3 (struct node*,char*) ;
 char* FUNC_4 (struct node*) ;
 int VAR_0 ;
 int FUNC_5 (char*,int,char*,unsigned int,...) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static void FUNC_7(struct check *VAR_1, struct dt_info *VAR_2, struct node *VAR_3)
{
 struct property *VAR_4;
 const char *VAR_5 = FUNC_4(VAR_3);
 char VAR_6[5];
 unsigned int VAR_7, VAR_8, VAR_9;
 cell_t *VAR_10;

 if (!VAR_3->parent || (VAR_3->parent->bus != &VAR_0))
  return;

 VAR_4 = FUNC_3(VAR_3, "reg");
 if (!VAR_4) {
  FUNC_0(VAR_1, VAR_2, VAR_3, "missing PCI reg property");
  return;
 }

 VAR_10 = (cell_t *)VAR_4->val.val;
 if (VAR_10[1] || VAR_10[2])
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, "PCI reg config space address cells 2 and 3 must be 0");

 VAR_9 = FUNC_2(VAR_10[0]);
 VAR_7 = (VAR_9 & 0xf800) >> 11;
 VAR_8 = (VAR_9 & 0x700) >> 8;

 if (VAR_9 & 0xff000000)
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, "PCI reg address is not configuration space");
 if (VAR_9 & 0x000000ff)
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, "PCI reg config space address register number must be 0");

 if (VAR_8 == 0) {
  FUNC_5(VAR_6, sizeof(VAR_6), "%x", VAR_7);
  if (FUNC_6(VAR_5, VAR_6))
   return;
 }

 FUNC_5(VAR_6, sizeof(VAR_6), "%x,%x", VAR_7, VAR_8);
 if (FUNC_6(VAR_5, VAR_6))
  return;

 FUNC_0(VAR_1, VAR_2, VAR_3, "PCI unit address format error, expected \"%s\"",
      VAR_6);
}
