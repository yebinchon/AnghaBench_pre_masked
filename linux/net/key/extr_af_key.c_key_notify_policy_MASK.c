
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_policy {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct sadb_msg {int sadb_msg_pid; int sadb_msg_seq; scalar_t__ sadb_msg_errno; int sadb_msg_type; int sadb_msg_version; } ;
struct TYPE_2__ {scalar_t__ byid; } ;
struct km_event {scalar_t__ event; int portid; int seq; TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ,int ,int *,int ) ;
 int FUNC_5 (struct sk_buff*,struct xfrm_policy*,int) ;
 struct sk_buff* FUNC_6 (struct xfrm_policy*) ;
 int FUNC_7 (struct xfrm_policy*) ;

__attribute__((used)) static int FUNC_8(struct xfrm_policy *VAR_5, int VAR_6, const struct km_event *VAR_7)
{
 struct sk_buff *VAR_8;
 struct sadb_msg *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_6(VAR_5);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_10 = FUNC_5(VAR_8, VAR_5, VAR_6);
 if (VAR_10 < 0) {
  FUNC_3(VAR_8);
  return VAR_10;
 }

 VAR_9 = (struct sadb_msg *) VAR_8->data;
 VAR_9->sadb_msg_version = VAR_2;

 if (VAR_7->data.byid && VAR_7->event == VAR_4)
  VAR_9->sadb_msg_type = VAR_3;
 else
  VAR_9->sadb_msg_type = FUNC_2(VAR_7->event);
 VAR_9->sadb_msg_errno = 0;
 VAR_9->sadb_msg_seq = VAR_7->seq;
 VAR_9->sadb_msg_pid = VAR_7->portid;
 FUNC_4(VAR_8, VAR_1, VAR_0, ((void*)0), FUNC_7(VAR_5));
 return 0;

}
