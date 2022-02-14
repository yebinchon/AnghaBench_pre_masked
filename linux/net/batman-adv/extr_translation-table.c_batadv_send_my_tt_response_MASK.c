
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef float u8 ;
typedef scalar_t__ u16 ;
struct batadv_tvlv_tt_data {float ttvn; int flags; } ;
struct batadv_tvlv_tt_change {int dummy; } ;
struct TYPE_4__ {int last_changeset_len; int commit_lock; int last_changeset_lock; int local_hash; int vn; int last_changeset; } ;
struct batadv_priv {TYPE_2__ tt; } ;
struct batadv_orig_node {float* orig; } ;
struct batadv_hard_iface {TYPE_1__* net_dev; } ;
typedef int s32 ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,struct batadv_priv*,char*,float*,float,float) ;
 int FUNC_2 (struct batadv_hard_iface*) ;
 int FUNC_3 (struct batadv_priv*,int ) ;
 struct batadv_orig_node* FUNC_4 (struct batadv_priv*,float*) ;
 int FUNC_5 (struct batadv_orig_node*) ;
 struct batadv_hard_iface* FUNC_6 (struct batadv_priv*) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (struct batadv_priv*,struct batadv_tvlv_tt_data**,struct batadv_tvlv_tt_change**,int*) ;
 int FUNC_8 (struct batadv_priv*,int ,struct batadv_tvlv_tt_change*,int,int ,int *) ;
 int FUNC_9 (struct batadv_priv*,int ,float*,int ,int,struct batadv_tvlv_tt_data*,scalar_t__) ;
 int FUNC_10 (struct batadv_tvlv_tt_data*) ;
 int FUNC_11 (struct batadv_tvlv_tt_change*,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static bool FUNC_14(struct batadv_priv *VAR_6,
           struct batadv_tvlv_tt_data *VAR_7,
           u8 *VAR_8)
{
 struct batadv_tvlv_tt_data *VAR_9 = ((void*)0);
 struct batadv_hard_iface *VAR_10 = ((void*)0);
 struct batadv_tvlv_tt_change *VAR_11;
 struct batadv_orig_node *VAR_12;
 u8 VAR_13, VAR_14;
 u16 VAR_15;
 bool VAR_16;
 s32 VAR_17;

 FUNC_1(VAR_1, VAR_6,
     "Received TT_REQUEST from %pM for ttvn: %u (me) [%c]\n",
     VAR_8, VAR_7->ttvn,
     ((VAR_7->flags & VAR_2) ? 'F' : '.'));

 FUNC_12(&VAR_6->tt.commit_lock);

 VAR_13 = (u8)FUNC_0(&VAR_6->tt.vn);
 VAR_14 = VAR_7->ttvn;

 VAR_12 = FUNC_4(VAR_6, VAR_8);
 if (!VAR_12)
  goto out;

 VAR_10 = FUNC_6(VAR_6);
 if (!VAR_10)
  goto out;




 if (VAR_7->flags & VAR_2 || VAR_13 != VAR_14 ||
     !VAR_6->tt.last_changeset)
  VAR_16 = 1;
 else
  VAR_16 = 0;




 if (!VAR_16) {
  FUNC_12(&VAR_6->tt.last_changeset_lock);

  VAR_17 = VAR_6->tt.last_changeset_len;
  VAR_15 = FUNC_7(VAR_6,
            &VAR_9,
            &VAR_11,
            &VAR_17);
  if (!VAR_17 || !VAR_15)
   goto unlock;


  FUNC_11(VAR_11, VAR_6->tt.last_changeset,
         VAR_6->tt.last_changeset_len);
  FUNC_13(&VAR_6->tt.last_changeset_lock);
 } else {
  VAR_14 = (u8)FUNC_0(&VAR_6->tt.vn);




  VAR_17 = -1;
  VAR_15 = FUNC_7(VAR_6,
            &VAR_9,
            &VAR_11,
            &VAR_17);
  if (!VAR_17 || !VAR_15)
   goto out;


  FUNC_8(VAR_6, VAR_6->tt.local_hash,
     VAR_11, VAR_17,
     VAR_5, ((void*)0));
 }

 VAR_9->flags = VAR_3;
 VAR_9->ttvn = VAR_14;

 if (VAR_16)
  VAR_9->flags |= VAR_2;

 FUNC_1(VAR_1, VAR_6,
     "Sending TT_RESPONSE to %pM [%c] (ttvn: %u)\n",
     VAR_12->orig, VAR_16 ? 'F' : '.', VAR_14);

 FUNC_3(VAR_6, VAR_0);

 FUNC_9(VAR_6, VAR_10->net_dev->dev_addr,
     VAR_8, VAR_4, 1, VAR_9,
     VAR_15);

 goto out;

unlock:
 FUNC_13(&VAR_6->tt.last_changeset_lock);
out:
 FUNC_13(&VAR_6->tt.commit_lock);
 if (VAR_12)
  FUNC_5(VAR_12);
 if (VAR_10)
  FUNC_2(VAR_10);
 FUNC_10(VAR_9);

 return 1;
}
