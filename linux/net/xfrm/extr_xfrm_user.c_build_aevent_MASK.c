
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int reqid; int saddr; int family; } ;
struct TYPE_5__ {int proto; int spi; int daddr; } ;
struct xfrm_state {int replay_maxdiff; int replay_maxage; int if_id; int mark; int curlft; int replay; int * replay_esn; TYPE_2__ props; TYPE_1__ id; } ;
struct TYPE_8__ {int proto; int family; int spi; int daddr; } ;
struct xfrm_aevent_id {int flags; int reqid; int saddr; TYPE_4__ sa_id; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct TYPE_7__ {int aevent; } ;
struct km_event {TYPE_3__ data; int seq; int portid; } ;


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
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (struct sk_buff*,int ,int,int *) ;
 int FUNC_3 (struct sk_buff*,int ,int,int *,int ) ;
 int FUNC_4 (struct sk_buff*,int ,int) ;
 int FUNC_5 (struct sk_buff*,struct nlmsghdr*) ;
 struct xfrm_aevent_id* FUNC_6 (struct nlmsghdr*) ;
 int FUNC_7 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_8 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (struct sk_buff*,int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_11, struct xfrm_state *VAR_12, const struct km_event *VAR_13)
{
 struct xfrm_aevent_id *VAR_14;
 struct nlmsghdr *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_8(VAR_11, VAR_13->portid, VAR_13->seq, VAR_10, sizeof(*VAR_14), 0);
 if (VAR_15 == ((void*)0))
  return -VAR_0;

 VAR_14 = FUNC_6(VAR_15);
 FUNC_1(&VAR_14->sa_id, 0, sizeof(VAR_14->sa_id));
 FUNC_0(&VAR_14->sa_id.daddr, &VAR_12->id.daddr, sizeof(VAR_12->id.daddr));
 VAR_14->sa_id.spi = VAR_12->id.spi;
 VAR_14->sa_id.family = VAR_12->props.family;
 VAR_14->sa_id.proto = VAR_12->id.proto;
 FUNC_0(&VAR_14->saddr, &VAR_12->props.saddr, sizeof(VAR_12->props.saddr));
 VAR_14->reqid = VAR_12->props.reqid;
 VAR_14->flags = VAR_13->data.aevent;

 if (VAR_12->replay_esn) {
  VAR_16 = FUNC_2(VAR_11, VAR_5,
         FUNC_11(VAR_12->replay_esn),
         VAR_12->replay_esn);
 } else {
  VAR_16 = FUNC_2(VAR_11, VAR_7, sizeof(VAR_12->replay),
         &VAR_12->replay);
 }
 if (VAR_16)
  goto out_cancel;
 VAR_16 = FUNC_3(VAR_11, VAR_3, sizeof(VAR_12->curlft), &VAR_12->curlft,
       VAR_4);
 if (VAR_16)
  goto out_cancel;

 if (VAR_14->flags & VAR_9) {
  VAR_16 = FUNC_4(VAR_11, VAR_6, VAR_12->replay_maxdiff);
  if (VAR_16)
   goto out_cancel;
 }
 if (VAR_14->flags & VAR_8) {
  VAR_16 = FUNC_4(VAR_11, VAR_2,
      VAR_12->replay_maxage * 10 / VAR_1);
  if (VAR_16)
   goto out_cancel;
 }
 VAR_16 = FUNC_10(VAR_11, &VAR_12->mark);
 if (VAR_16)
  goto out_cancel;

 VAR_16 = FUNC_9(VAR_11, VAR_12->if_id);
 if (VAR_16)
  goto out_cancel;

 FUNC_7(VAR_11, VAR_15);
 return 0;

out_cancel:
 FUNC_5(VAR_11, VAR_15);
 return VAR_16;
}
