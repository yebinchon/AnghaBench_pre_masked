
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ip6t_rt* matchinfo; } ;
struct ip6t_rt {int invflags; int flags; scalar_t__ rt_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static int FUNC_1(const struct xt_mtchk_param *VAR_6)
{
 const struct ip6t_rt *VAR_7 = VAR_6->matchinfo;

 if (VAR_7->invflags & ~VAR_2) {
  FUNC_0("unknown flags %X\n", VAR_7->invflags);
  return -VAR_0;
 }
 if ((VAR_7->flags & (VAR_4 | VAR_1)) &&
     (!(VAR_7->flags & VAR_5) ||
      (VAR_7->rt_type != 0) ||
      (VAR_7->invflags & VAR_3))) {
  FUNC_0("`--rt-type 0' required before `--rt-0-*'");
  return -VAR_0;
 }

 return 0;
}
