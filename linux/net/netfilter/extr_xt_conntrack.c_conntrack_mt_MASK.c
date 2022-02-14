
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct xt_conntrack_mtinfo2 {int match_flags; int invert_flags; unsigned long expires_min; unsigned long expires_max; } ;
struct xt_action_param {struct xt_conntrack_mtinfo2* matchinfo; TYPE_1__* match; } ;
struct sk_buff {int dummy; } ;
struct nf_conn {unsigned int status; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_2__ {int revision; } ;


 scalar_t__ FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int FUNC_1 (int) ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct nf_conn const*,struct xt_conntrack_mtinfo2 const*,int ) ;
 int FUNC_3 (struct nf_conn const*,struct xt_conntrack_mtinfo2 const*,int ) ;
 int FUNC_4 (struct nf_conn const*,struct xt_conntrack_mtinfo2 const*,int ) ;
 int FUNC_5 (struct nf_conn const*,struct xt_conntrack_mtinfo2 const*,int ) ;
 int FUNC_6 (struct xt_conntrack_mtinfo2 const*,struct nf_conn const*) ;
 int FUNC_7 (struct xt_conntrack_mtinfo2*,struct nf_conn const*) ;
 unsigned long FUNC_8 (struct nf_conn const*) ;
 struct nf_conn* FUNC_9 (struct sk_buff const*,int*) ;
 scalar_t__ FUNC_10 (int ,unsigned int*) ;
 int FUNC_11 (struct xt_action_param*) ;

__attribute__((used)) static bool
FUNC_12(const struct sk_buff *VAR_17, struct xt_action_param *VAR_18,
             u16 VAR_19, u16 VAR_20)
{
 const struct xt_conntrack_mtinfo2 *VAR_21 = VAR_18->matchinfo;
 enum ip_conntrack_info VAR_22;
 const struct nf_conn *VAR_23;
 unsigned int VAR_24;

 VAR_23 = FUNC_9(VAR_17, &VAR_22);

 if (VAR_23)
  VAR_24 = FUNC_1(VAR_22);
 else if (VAR_22 == VAR_4)
  VAR_24 = VAR_15;
 else
  VAR_24 = VAR_13;

 if (VAR_21->match_flags & VAR_11) {
  if (VAR_23 != ((void*)0)) {
   if (FUNC_10(VAR_2, &VAR_23->status))
    VAR_24 |= VAR_14;
   if (FUNC_10(VAR_1, &VAR_23->status))
    VAR_24 |= VAR_12;
  }
  if (!!(VAR_19 & VAR_24) ^
      !(VAR_21->invert_flags & VAR_11))
   return 0;
 }

 if (VAR_23 == ((void*)0))
  return VAR_21->match_flags & VAR_11;
 if ((VAR_21->match_flags & VAR_5) &&
     (FUNC_0(VAR_22) == VAR_3) ^
     !(VAR_21->invert_flags & VAR_5))
  return 0;

 if (VAR_21->match_flags & VAR_8)
  if (FUNC_3(VAR_23, VAR_21, FUNC_11(VAR_18)) ^
      !(VAR_21->invert_flags & VAR_8))
   return 0;

 if (VAR_21->match_flags & VAR_7)
  if (FUNC_2(VAR_23, VAR_21, FUNC_11(VAR_18)) ^
      !(VAR_21->invert_flags & VAR_7))
   return 0;

 if (VAR_21->match_flags & VAR_10)
  if (FUNC_5(VAR_23, VAR_21, FUNC_11(VAR_18)) ^
      !(VAR_21->invert_flags & VAR_10))
   return 0;

 if (VAR_21->match_flags & VAR_9)
  if (FUNC_4(VAR_23, VAR_21, FUNC_11(VAR_18)) ^
      !(VAR_21->invert_flags & VAR_9))
   return 0;

 if (VAR_18->match->revision != 3) {
  if (!FUNC_6(VAR_21, VAR_23))
   return 0;
 } else {
  if (!FUNC_7(VAR_18->matchinfo, VAR_23))
   return 0;
 }

 if ((VAR_21->match_flags & VAR_16) &&
     (!!(VAR_20 & VAR_23->status) ^
     !(VAR_21->invert_flags & VAR_16)))
  return 0;

 if (VAR_21->match_flags & VAR_6) {
  unsigned long VAR_25 = FUNC_8(VAR_23) / VAR_0;

  if ((VAR_25 >= VAR_21->expires_min &&
      VAR_25 <= VAR_21->expires_max) ^
      !(VAR_21->invert_flags & VAR_6))
   return 0;
 }
 return 1;
}
