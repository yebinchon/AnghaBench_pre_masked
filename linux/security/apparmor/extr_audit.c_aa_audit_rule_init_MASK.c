
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct aa_audit_rule {int label; } ;
struct TYPE_4__ {TYPE_1__* unconfined; } ;
struct TYPE_3__ {int label; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct aa_audit_rule*) ;
 int FUNC_3 (int *,char*,int ,int,int) ;
 struct aa_audit_rule* FUNC_4 (int,int ) ;
 TYPE_2__* VAR_5 ;

int FUNC_5(u32 VAR_6, u32 VAR_7, char *VAR_8, void **VAR_9)
{
 struct aa_audit_rule *VAR_10;

 switch (VAR_6) {
 case 128:
  if (VAR_7 != VAR_0 && VAR_7 != VAR_1)
   return -VAR_2;
  break;
 default:
  return -VAR_2;
 }

 VAR_10 = FUNC_4(sizeof(struct aa_audit_rule), VAR_4);

 if (!VAR_10)
  return -VAR_3;


 VAR_10->label = FUNC_3(&VAR_5->unconfined->label, VAR_8,
         VAR_4, 1, 0);
 if (FUNC_0(VAR_10->label)) {
  FUNC_2(VAR_10);
  return FUNC_1(VAR_10->label);
 }

 *VAR_9 = VAR_10;
 return 0;
}
