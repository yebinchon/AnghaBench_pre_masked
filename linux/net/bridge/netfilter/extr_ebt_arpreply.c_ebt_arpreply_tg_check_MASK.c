
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {struct ebt_entry* entryinfo; struct ebt_arpreply_info* targinfo; } ;
struct ebt_entry {scalar_t__ ethproto; int invflags; } ;
struct ebt_arpreply_info {scalar_t__ target; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const struct xt_tgchk_param *VAR_5)
{
 const struct ebt_arpreply_info *VAR_6 = VAR_5->targinfo;
 const struct ebt_entry *VAR_7 = VAR_5->entryinfo;

 if (VAR_0 && VAR_6->target == VAR_2)
  return -VAR_3;
 if (VAR_7->ethproto != FUNC_1(VAR_4) ||
     VAR_7->invflags & VAR_1)
  return -VAR_3;
 if (FUNC_0(VAR_6->target))
  return -VAR_3;

 return 0;
}
