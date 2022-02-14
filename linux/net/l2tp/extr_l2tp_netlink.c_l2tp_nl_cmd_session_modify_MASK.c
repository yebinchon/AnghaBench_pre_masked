
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct l2tp_session {int reorder_timeout; void* lns_mode; TYPE_1__* tunnel; void* send_seq; void* recv_seq; int debug; } ;
struct genl_info {scalar_t__* attrs; } ;
struct TYPE_2__ {int version; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct l2tp_session* FUNC_0 (struct genl_info*) ;
 int FUNC_1 (struct l2tp_session*) ;
 int FUNC_2 (int *,struct genl_info*,struct l2tp_session*,int ) ;
 int FUNC_3 (struct l2tp_session*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 void* FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_8, struct genl_info *VAR_9)
{
 int VAR_10 = 0;
 struct l2tp_session *VAR_11;

 VAR_11 = FUNC_0(VAR_9);
 if (VAR_11 == ((void*)0)) {
  VAR_10 = -VAR_0;
  goto out;
 }

 if (VAR_9->attrs[VAR_1])
  VAR_11->debug = FUNC_5(VAR_9->attrs[VAR_1]);

 if (VAR_9->attrs[VAR_3])
  VAR_11->recv_seq = FUNC_6(VAR_9->attrs[VAR_3]);

 if (VAR_9->attrs[VAR_5]) {
  VAR_11->send_seq = FUNC_6(VAR_9->attrs[VAR_5]);
  FUNC_3(VAR_11, VAR_11->tunnel->version);
 }

 if (VAR_9->attrs[VAR_2])
  VAR_11->lns_mode = FUNC_6(VAR_9->attrs[VAR_2]);

 if (VAR_9->attrs[VAR_4])
  VAR_11->reorder_timeout = FUNC_4(VAR_9->attrs[VAR_4]);

 VAR_10 = FUNC_2(&VAR_7, VAR_9,
      VAR_11, VAR_6);

 FUNC_1(VAR_11);

out:
 return VAR_10;
}
