
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; struct devlink** user_ptr; } ;
struct devlink_dpipe_headers {int headers_count; int * headers; } ;
struct devlink {int dummy; } ;
typedef enum devlink_command { ____Placeholder_devlink_command } devlink_command ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff**,struct genl_info*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct devlink*) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int *,int,int) ;
 int FUNC_5 (struct sk_buff*,struct genl_info*) ;
 int FUNC_6 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 struct nlmsghdr* FUNC_9 (struct sk_buff*,int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_10(struct genl_info *VAR_5,
          enum devlink_command VAR_6, int VAR_7,
          struct devlink_dpipe_headers *
          VAR_8)
{
 struct devlink *VAR_9 = VAR_5->user_ptr[0];
 struct nlattr *VAR_10;
 struct sk_buff *VAR_11 = ((void*)0);
 struct nlmsghdr *VAR_12;
 void *VAR_13;
 int VAR_14, VAR_15;
 int VAR_16;

 VAR_14 = 0;
start_again:
 VAR_16 = FUNC_1(&VAR_11, VAR_5);
 if (VAR_16)
  return VAR_16;

 VAR_13 = FUNC_4(VAR_11, VAR_5->snd_portid, VAR_5->snd_seq,
     &VAR_4, VAR_3, VAR_6);
 if (!VAR_13) {
  FUNC_8(VAR_11);
  return -VAR_1;
 }

 if (FUNC_2(VAR_11, VAR_9))
  goto nla_put_failure;
 VAR_10 = FUNC_7(VAR_11, VAR_0);
 if (!VAR_10)
  goto nla_put_failure;

 VAR_15 = 0;
 for (; VAR_14 < VAR_8->headers_count; VAR_14++) {
  VAR_16 = FUNC_0(VAR_11, VAR_8->headers[VAR_14]);
  if (VAR_16) {
   if (!VAR_15)
    goto err_table_put;
   break;
  }
  VAR_15++;
 }
 FUNC_6(VAR_11, VAR_10);
 FUNC_3(VAR_11, VAR_13);
 if (VAR_14 != VAR_8->headers_count)
  goto start_again;

send_done:
 VAR_12 = FUNC_9(VAR_11, VAR_5->snd_portid, VAR_5->snd_seq,
   VAR_2, 0, VAR_7 | VAR_3);
 if (!VAR_12) {
  VAR_16 = FUNC_1(&VAR_11, VAR_5);
  if (VAR_16)
   return VAR_16;
  goto send_done;
 }
 return FUNC_5(VAR_11, VAR_5);

nla_put_failure:
 VAR_16 = -VAR_1;
err_table_put:
 FUNC_8(VAR_11);
 return VAR_16;
}
