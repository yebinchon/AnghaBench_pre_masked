
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_owner_match_info {int match; scalar_t__ uid_min; scalar_t__ uid_max; scalar_t__ gid_min; scalar_t__ gid_max; } ;
struct xt_mtchk_param {struct net* net; struct xt_owner_match_info* matchinfo; } ;
struct net {scalar_t__ user_ns; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(const struct xt_mtchk_param *VAR_4)
{
 struct xt_owner_match_info *VAR_5 = VAR_4->matchinfo;
 struct net *VAR_6 = VAR_4->net;

 if (VAR_5->match & ~VAR_2)
  return -VAR_0;




 if ((VAR_5->match & (VAR_3|VAR_1)) &&
     (FUNC_0() != VAR_6->user_ns))
  return -VAR_0;


 if (VAR_5->match & VAR_3) {
  kuid_t VAR_7 = FUNC_4(VAR_6->user_ns, VAR_5->uid_min);
  kuid_t VAR_8 = FUNC_4(VAR_6->user_ns, VAR_5->uid_max);

  if (!FUNC_6(VAR_7) || !FUNC_6(VAR_8) ||
      (VAR_5->uid_max < VAR_5->uid_min) ||
      FUNC_5(VAR_8, VAR_7)) {
   return -VAR_0;
  }
 }


 if (VAR_5->match & VAR_1) {
  kgid_t VAR_9 = FUNC_3(VAR_6->user_ns, VAR_5->gid_min);
  kgid_t VAR_10 = FUNC_3(VAR_6->user_ns, VAR_5->gid_max);

  if (!FUNC_2(VAR_9) || !FUNC_2(VAR_10) ||
      (VAR_5->gid_max < VAR_5->gid_min) ||
      FUNC_1(VAR_10, VAR_9)) {
   return -VAR_0;
  }
 }

 return 0;
}
