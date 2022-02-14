
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ebt_mark_m_info* matchinfo; } ;
struct ebt_mark_m_info {int bitmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(const struct xt_mtchk_param *VAR_4)
{
 const struct ebt_mark_m_info *VAR_5 = VAR_4->matchinfo;

 if (VAR_5->bitmask & ~VAR_1)
  return -VAR_3;
 if ((VAR_5->bitmask & VAR_2) && (VAR_5->bitmask & VAR_0))
  return -VAR_3;
 if (!VAR_5->bitmask)
  return -VAR_3;
 return 0;
}
