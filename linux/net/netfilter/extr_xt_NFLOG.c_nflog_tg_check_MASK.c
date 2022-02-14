
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {int family; struct xt_nflog_info* targinfo; } ;
struct xt_nflog_info {int flags; char* prefix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const struct xt_tgchk_param *VAR_3)
{
 const struct xt_nflog_info *VAR_4 = VAR_3->targinfo;

 if (VAR_4->flags & ~VAR_2)
  return -VAR_0;
 if (VAR_4->prefix[sizeof(VAR_4->prefix) - 1] != '\0')
  return -VAR_0;

 return FUNC_0(VAR_3->family, VAR_1);
}
