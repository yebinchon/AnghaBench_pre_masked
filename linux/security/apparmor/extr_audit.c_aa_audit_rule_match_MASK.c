
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aa_label {int dummy; } ;
struct aa_audit_rule {int label; } ;





 int VAR_0 ;
 scalar_t__ FUNC_0 (struct aa_label*,int ) ;
 struct aa_label* FUNC_1 (int) ;

int FUNC_2(u32 VAR_1, u32 VAR_2, u32 VAR_3, void *VAR_4)
{
 struct aa_audit_rule *VAR_5 = VAR_4;
 struct aa_label *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_1(VAR_1);

 if (!VAR_6)
  return -VAR_0;

 if (FUNC_0(VAR_6, VAR_5->label))
  VAR_7 = 1;

 switch (VAR_2) {
 case 130:
  switch (VAR_3) {
  case 129:
   return VAR_7;
  case 128:
   return !VAR_7;
  }
 }
 return 0;
}
