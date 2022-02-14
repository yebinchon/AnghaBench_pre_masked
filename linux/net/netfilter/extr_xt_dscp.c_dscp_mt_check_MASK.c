
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct xt_dscp_info* matchinfo; } ;
struct xt_dscp_info {scalar_t__ dscp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(const struct xt_mtchk_param *VAR_2)
{
 const struct xt_dscp_info *VAR_3 = VAR_2->matchinfo;

 if (VAR_3->dscp > VAR_1)
  return -VAR_0;

 return 0;
}
