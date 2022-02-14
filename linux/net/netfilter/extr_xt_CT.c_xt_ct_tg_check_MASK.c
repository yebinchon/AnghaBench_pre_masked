
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zone ;
struct xt_tgchk_param {int family; int net; } ;
struct xt_ct_target_info_v1 {int flags; struct nf_conn* ct; scalar_t__* timeout; scalar_t__* helper; int exp_events; int ct_events; scalar_t__ zone; } ;
struct nf_conntrack_zone {int flags; int dir; scalar_t__ id; } ;
struct nf_conn_help {int helper; } ;
struct nf_conn {int ct_general; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct nf_conntrack_zone*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nf_conn*,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 struct nf_conn* FUNC_7 (int ,struct nf_conntrack_zone*,int ) ;
 int FUNC_8 (struct nf_conn*) ;
 struct nf_conn_help* FUNC_9 (struct nf_conn*) ;
 int FUNC_10 (scalar_t__*,int) ;
 int FUNC_11 (struct xt_ct_target_info_v1*) ;
 int FUNC_12 (struct nf_conn*,scalar_t__*,struct xt_tgchk_param const*) ;
 int FUNC_13 (struct nf_conn*,struct xt_tgchk_param const*,scalar_t__*) ;

__attribute__((used)) static int FUNC_14(const struct xt_tgchk_param *VAR_11,
     struct xt_ct_target_info_v1 *VAR_12)
{
 struct nf_conntrack_zone VAR_13;
 struct nf_conn_help *VAR_14;
 struct nf_conn *VAR_15;
 int VAR_16 = -VAR_3;

 if (VAR_12->flags & VAR_7) {
  VAR_15 = ((void*)0);
  goto out;
 }


 if (VAR_12->zone || VAR_12->flags & (VAR_8 |
      VAR_9 |
      VAR_10))
  goto err1;


 VAR_16 = FUNC_5(VAR_11->net, VAR_11->family);
 if (VAR_16 < 0)
  goto err1;

 FUNC_1(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.id = VAR_12->zone;
 VAR_13.dir = FUNC_11(VAR_12);
 if (VAR_12->flags & VAR_10)
  VAR_13.flags |= VAR_6;

 VAR_15 = FUNC_7(VAR_11->net, &VAR_13, VAR_4);
 if (!VAR_15) {
  VAR_16 = -VAR_2;
  goto err2;
 }

 VAR_16 = 0;
 if ((VAR_12->ct_events || VAR_12->exp_events) &&
     !FUNC_4(VAR_15, VAR_12->ct_events, VAR_12->exp_events,
      VAR_4)) {
  VAR_16 = -VAR_0;
  goto err3;
 }

 if (VAR_12->helper[0]) {
  if (FUNC_10(VAR_12->helper, sizeof(VAR_12->helper)) == sizeof(VAR_12->helper)) {
   VAR_16 = -VAR_1;
   goto err3;
  }

  VAR_16 = FUNC_12(VAR_15, VAR_12->helper, VAR_11);
  if (VAR_16 < 0)
   goto err3;
 }

 if (VAR_12->timeout[0]) {
  if (FUNC_10(VAR_12->timeout, sizeof(VAR_12->timeout)) == sizeof(VAR_12->timeout)) {
   VAR_16 = -VAR_1;
   goto err4;
  }

  VAR_16 = FUNC_13(VAR_15, VAR_11, VAR_12->timeout);
  if (VAR_16 < 0)
   goto err4;
 }
 FUNC_0(VAR_5, &VAR_15->status);
 FUNC_2(&VAR_15->ct_general);
out:
 VAR_12->ct = VAR_15;
 return 0;

err4:
 VAR_14 = FUNC_9(VAR_15);
 if (VAR_14)
  FUNC_3(VAR_14->helper);
err3:
 FUNC_8(VAR_15);
err2:
 FUNC_6(VAR_11->net, VAR_11->family);
err1:
 return VAR_16;
}
