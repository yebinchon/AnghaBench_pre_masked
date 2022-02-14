
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ip6t_frag* matchinfo; } ;
struct ip6t_frag {int invflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(const struct xt_mtchk_param *VAR_2)
{
 const struct ip6t_frag *VAR_3 = VAR_2->matchinfo;

 if (VAR_3->invflags & ~VAR_1) {
  FUNC_0("unknown flags %X\n", VAR_3->invflags);
  return -VAR_0;
 }
 return 0;
}
