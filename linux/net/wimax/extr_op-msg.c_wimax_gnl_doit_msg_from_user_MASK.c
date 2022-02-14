
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {int (* op_msg_from_user ) (struct wimax_dev*,char*,void*,size_t,struct genl_info*) ;int net_dev; int mutex; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_pid; int nlmsg_seq; int nlmsg_flags; int nlmsg_type; int nlmsg_len; } ;
struct nlattr {int dummy; } ;
struct genl_info {struct nlattr** attrs; struct nlmsghdr* nlhdr; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int,struct device*,void*,size_t) ;
 int FUNC_1 (int,int *,char*,struct sk_buff*,struct genl_info*,int) ;
 int FUNC_2 (int,int *,char*,struct sk_buff*,struct genl_info*) ;
 int FUNC_3 (int,struct device*,char*,size_t,...) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (void*,size_t,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 void* FUNC_11 (struct nlattr*) ;
 int FUNC_12 (struct nlattr*) ;
 size_t FUNC_13 (struct nlattr*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (struct wimax_dev*,char*,void*,size_t,struct genl_info*) ;
 struct wimax_dev* FUNC_16 (struct genl_info*,int) ;
 int FUNC_17 (struct wimax_dev*) ;
 struct device* FUNC_18 (struct wimax_dev*) ;

int FUNC_19(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{
 int VAR_11, VAR_12;
 struct wimax_dev *VAR_13;
 struct device *VAR_14;
 struct nlmsghdr *VAR_15 = VAR_10->nlhdr;
 char *VAR_16;
 void *VAR_17;
 size_t VAR_18;

 FUNC_8();
 FUNC_2(3, ((void*)0), "(skb %p info %p)\n", VAR_9, VAR_10);
 VAR_11 = -VAR_1;
 if (VAR_10->attrs[VAR_7] == ((void*)0)) {
  FUNC_14("WIMAX_GNL_MSG_FROM_USER: can't find IFIDX attribute\n");
  goto error_no_wimax_dev;
 }
 VAR_12 = FUNC_12(VAR_10->attrs[VAR_7]);
 VAR_13 = FUNC_16(VAR_10, VAR_12);
 if (VAR_13 == ((void*)0))
  goto error_no_wimax_dev;
 VAR_14 = FUNC_18(VAR_13);


 VAR_11 = -VAR_0;
 if (VAR_10->attrs[VAR_6] == ((void*)0)) {
  FUNC_4(VAR_14, "WIMAX_GNL_MSG_FROM_USER: can't find MSG_DATA "
   "attribute\n");
  goto error_no_data;
 }
 VAR_17 = FUNC_11(VAR_10->attrs[VAR_6]);
 VAR_18 = FUNC_13(VAR_10->attrs[VAR_6]);

 if (VAR_10->attrs[VAR_8] == ((void*)0))
  VAR_16 = ((void*)0);
 else {
  struct nlattr *VAR_19 = VAR_10->attrs[VAR_8];
  size_t VAR_20 = FUNC_13(VAR_19);

  VAR_11 = -VAR_3;
  VAR_16 = FUNC_7(FUNC_11(VAR_19), VAR_20 + 1, VAR_5);
  if (VAR_16 == ((void*)0))
   goto error_alloc;
  VAR_16[VAR_20] = 0;
 }
 FUNC_9(&VAR_13->mutex);
 VAR_11 = FUNC_17(VAR_13);
 if (VAR_11 == -VAR_2)
  VAR_11 = 0;
 if (VAR_11 < 0)
  goto error_not_ready;
 VAR_11 = -VAR_4;
 if (VAR_13->op_msg_from_user == ((void*)0))
  goto error_noop;

 FUNC_3(1, VAR_14,
   "CRX: nlmsghdr len %u type %u flags 0x%04x seq 0x%x pid %u\n",
   VAR_15->nlmsg_len, VAR_15->nlmsg_type, VAR_15->nlmsg_flags,
   VAR_15->nlmsg_seq, VAR_15->nlmsg_pid);
 FUNC_3(1, VAR_14, "CRX: wimax message %zu bytes\n", VAR_18);
 FUNC_0(2, VAR_14, VAR_17, VAR_18);

 VAR_11 = VAR_13->op_msg_from_user(VAR_13, VAR_16,
          VAR_17, VAR_18, VAR_10);
error_noop:
error_not_ready:
 FUNC_10(&VAR_13->mutex);
error_alloc:
 FUNC_6(VAR_16);
error_no_data:
 FUNC_5(VAR_13->net_dev);
error_no_wimax_dev:
 FUNC_1(3, ((void*)0), "(skb %p info %p) = %d\n", VAR_9, VAR_10, VAR_11);
 return VAR_11;
}
