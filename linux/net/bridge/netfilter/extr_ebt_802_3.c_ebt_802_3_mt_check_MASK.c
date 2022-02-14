
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ebt_802_3_info* matchinfo; } ;
struct ebt_802_3_info {int bitmask; int invflags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const struct xt_mtchk_param *VAR_2)
{
 const struct ebt_802_3_info *VAR_3 = VAR_2->matchinfo;

 if (VAR_3->bitmask & ~VAR_0 || VAR_3->invflags & ~VAR_0)
  return -VAR_1;

 return 0;
}
