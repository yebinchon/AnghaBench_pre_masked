
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_owner_match_info {int match; int invert; int gid_max; int gid_min; int uid_max; int uid_min; } ;
struct xt_action_param {struct xt_owner_match_info* matchinfo; } ;
struct sock {TYPE_1__* sk_socket; } ;
struct sk_buff {int dummy; } ;
struct net {int user_ns; } ;
struct group_info {unsigned int ngroups; int * gid; } ;
struct file {TYPE_2__* f_cred; } ;
typedef int kuid_t ;
typedef int kgid_t ;
struct TYPE_4__ {int fsgid; struct group_info* group_info; int fsuid; } ;
struct TYPE_3__ {struct file* file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct net*,int ) ;
 struct sock* FUNC_5 (struct sk_buff const*) ;
 int FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 struct net* FUNC_9 (struct xt_action_param*) ;

__attribute__((used)) static bool
FUNC_10(const struct sk_buff *VAR_4, struct xt_action_param *VAR_5)
{
 const struct xt_owner_match_info *VAR_6 = VAR_5->matchinfo;
 const struct file *VAR_7;
 struct sock *VAR_8 = FUNC_5(VAR_4);
 struct net *VAR_9 = FUNC_9(VAR_5);

 if (!VAR_8 || !VAR_8->sk_socket || !FUNC_4(VAR_9, FUNC_6(VAR_8)))
  return (VAR_6->match ^ VAR_6->invert) == 0;
 else if (VAR_6->match & VAR_6->invert & VAR_1)




  return 0;

 VAR_7 = VAR_8->sk_socket->file;
 if (VAR_7 == ((void*)0))
  return ((VAR_6->match ^ VAR_6->invert) &
         (VAR_3 | VAR_0)) == 0;

 if (VAR_6->match & VAR_3) {
  kuid_t VAR_10 = FUNC_3(VAR_9->user_ns, VAR_6->uid_min);
  kuid_t VAR_11 = FUNC_3(VAR_9->user_ns, VAR_6->uid_max);
  if ((FUNC_7(VAR_7->f_cred->fsuid, VAR_10) &&
       FUNC_8(VAR_7->f_cred->fsuid, VAR_11)) ^
      !(VAR_6->invert & VAR_3))
   return 0;
 }

 if (VAR_6->match & VAR_0) {
  unsigned int VAR_12, VAR_13 = 0;
  kgid_t VAR_14 = FUNC_2(VAR_9->user_ns, VAR_6->gid_min);
  kgid_t VAR_15 = FUNC_2(VAR_9->user_ns, VAR_6->gid_max);
  struct group_info *VAR_16 = VAR_7->f_cred->group_info;

  if (FUNC_0(VAR_7->f_cred->fsgid, VAR_14) &&
      FUNC_1(VAR_7->f_cred->fsgid, VAR_15))
   VAR_13 = 1;

  if (!VAR_13 && (VAR_6->match & VAR_2) && VAR_16) {
   for (VAR_12 = 0; VAR_12 < VAR_16->ngroups; ++VAR_12) {
    kgid_t VAR_17 = VAR_16->gid[VAR_12];

    if (FUNC_0(VAR_17, VAR_14) &&
        FUNC_1(VAR_17, VAR_15)) {
     VAR_13 = 1;
     break;
    }
   }
  }

  if (VAR_13 ^ !(VAR_6->invert & VAR_0))
   return 0;
 }

 return 1;
}
