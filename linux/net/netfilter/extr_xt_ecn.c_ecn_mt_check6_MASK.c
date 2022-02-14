
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ip6t_ip6* entryinfo; struct xt_ecn_info* matchinfo; } ;
struct xt_ecn_info {int operation; int invert; } ;
struct ip6t_ip6 {scalar_t__ proto; int invflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(const struct xt_mtchk_param *VAR_6)
{
 const struct xt_ecn_info *VAR_7 = VAR_6->matchinfo;
 const struct ip6t_ip6 *VAR_8 = VAR_6->entryinfo;

 if (VAR_7->operation & VAR_5)
  return -VAR_0;

 if (VAR_7->invert & VAR_5)
  return -VAR_0;

 if (VAR_7->operation & (VAR_4 | VAR_3) &&
     (VAR_8->proto != VAR_2 || VAR_8->invflags & VAR_1)) {
  FUNC_0("cannot match TCP bits for non-tcp packets\n");
  return -VAR_0;
 }

 return 0;
}
