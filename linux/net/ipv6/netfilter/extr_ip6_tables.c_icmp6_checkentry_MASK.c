
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ip6t_icmp* matchinfo; } ;
struct ip6t_icmp {int invflags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const struct xt_mtchk_param *VAR_2)
{
 const struct ip6t_icmp *VAR_3 = VAR_2->matchinfo;


 return (VAR_3->invflags & ~VAR_1) ? -VAR_0 : 0;
}
