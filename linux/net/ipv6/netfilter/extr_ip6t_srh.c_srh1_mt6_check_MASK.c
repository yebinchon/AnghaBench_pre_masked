
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ip6t_srh1* matchinfo; } ;
struct ip6t_srh1 {int mt_flags; int mt_invflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(const struct xt_mtchk_param *VAR_3)
{
 const struct ip6t_srh1 *VAR_4 = VAR_3->matchinfo;

 if (VAR_4->mt_flags & ~VAR_2) {
  FUNC_0("unknown srh match flags  %X\n",
        VAR_4->mt_flags);
  return -VAR_0;
 }

 if (VAR_4->mt_invflags & ~VAR_1) {
  FUNC_0("unknown srh invflags %X\n",
        VAR_4->mt_invflags);
  return -VAR_0;
 }

 return 0;
}
