
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {struct ebt_nflog_info* targinfo; } ;
struct ebt_nflog_info {int flags; char* prefix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(const struct xt_tgchk_param *VAR_3)
{
 struct ebt_nflog_info *VAR_4 = VAR_3->targinfo;

 if (VAR_4->flags & ~VAR_0)
  return -VAR_2;
 VAR_4->prefix[VAR_1 - 1] = '\0';
 return 0;
}
