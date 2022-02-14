
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_nl_compat_msg {int dst_sk; } ;
struct tipc_nl_compat_cmd_doit {int (* transcode ) (struct tipc_nl_compat_cmd_doit*,struct sk_buff*,struct tipc_nl_compat_msg*) ;int (* doit ) (struct sk_buff*,struct genl_info*) ;} ;
struct sk_buff {int sk; int len; scalar_t__ data; } ;
struct nlattr {int dummy; } ;
struct genl_info {struct nlattr** attrs; } ;
typedef int info ;
struct TYPE_2__ {scalar_t__ maxattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct nlattr**) ;
 int FUNC_2 (struct sk_buff*) ;
 struct nlattr** FUNC_3 (scalar_t__,int,int ) ;
 int FUNC_4 (struct genl_info*,int ,int) ;
 int FUNC_5 (struct nlattr**,scalar_t__,struct nlattr const*,int ,int *,int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct tipc_nl_compat_cmd_doit*,struct sk_buff*,struct tipc_nl_compat_msg*) ;
 int FUNC_9 (struct sk_buff*,struct genl_info*) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_10(struct tipc_nl_compat_cmd_doit *VAR_4,
     struct tipc_nl_compat_msg *VAR_5)
{
 int VAR_6;
 struct sk_buff *VAR_7;
 struct sk_buff *VAR_8;
 struct nlattr **VAR_9;
 struct genl_info VAR_10;

 VAR_8 = FUNC_0(VAR_2, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_3.maxattr + 1,
    sizeof(struct nlattr *),
    VAR_1);
 if (!VAR_9) {
  VAR_6 = -VAR_0;
  goto trans_out;
 }

 VAR_7 = FUNC_0(VAR_2, VAR_1);
 if (!VAR_7) {
  VAR_6 = -VAR_0;
  goto attrbuf_out;
 }

 FUNC_4(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.attrs = VAR_9;

 FUNC_6();
 VAR_6 = (*VAR_4->transcode)(VAR_4, VAR_8, VAR_5);
 if (VAR_6)
  goto doit_out;

 VAR_6 = FUNC_5(VAR_9, VAR_3.maxattr,
       (const struct nlattr *)VAR_8->data,
       VAR_8->len, ((void*)0), ((void*)0));
 if (VAR_6)
  goto doit_out;

 VAR_7->sk = VAR_5->dst_sk;

 VAR_6 = (*VAR_4->doit)(VAR_7, &VAR_10);
doit_out:
 FUNC_7();

 FUNC_2(VAR_7);
attrbuf_out:
 FUNC_1(VAR_9);
trans_out:
 FUNC_2(VAR_8);

 return VAR_6;
}
