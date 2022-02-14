
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {struct xt_audit_info* targinfo; } ;
struct xt_audit_info {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(const struct xt_tgchk_param *VAR_2)
{
 const struct xt_audit_info *VAR_3 = VAR_2->targinfo;

 if (VAR_3->type > VAR_1) {
  FUNC_0("Audit type out of range (valid range: 0..%hhu)\n",
        VAR_1);
  return -VAR_0;
 }

 return 0;
}
