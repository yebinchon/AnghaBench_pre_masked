
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {scalar_t__ family; struct xt_log_info* targinfo; } ;
struct xt_log_info {int level; char* prefix; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(const struct xt_tgchk_param *VAR_4)
{
 const struct xt_log_info *VAR_5 = VAR_4->targinfo;

 if (VAR_4->family != VAR_1 && VAR_4->family != VAR_2)
  return -VAR_0;

 if (VAR_5->level >= 8) {
  FUNC_1("level %u >= 8\n", VAR_5->level);
  return -VAR_0;
 }

 if (VAR_5->prefix[sizeof(VAR_5->prefix)-1] != '\0') {
  FUNC_1("prefix is not null-terminated\n");
  return -VAR_0;
 }

 return FUNC_0(VAR_4->family, VAR_3);
}
