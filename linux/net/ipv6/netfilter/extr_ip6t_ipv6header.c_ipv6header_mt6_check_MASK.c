
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ip6t_ipv6header_info* matchinfo; } ;
struct ip6t_ipv6header_info {int invflags; int modeflag; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct xt_mtchk_param *VAR_1)
{
 const struct ip6t_ipv6header_info *VAR_2 = VAR_1->matchinfo;


 if ((!VAR_2->modeflag) && VAR_2->invflags != 0x00 &&
     VAR_2->invflags != 0xFF)
  return -VAR_0;

 return 0;
}
