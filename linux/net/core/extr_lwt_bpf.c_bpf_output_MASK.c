
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct dst_entry {TYPE_2__* lwtstate; } ;
struct TYPE_3__ {int name; scalar_t__ prog; } ;
struct bpf_lwt {TYPE_1__ out; } ;
struct TYPE_4__ {int (* orig_output ) (struct net*,struct sock*,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct bpf_lwt* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct sk_buff*,TYPE_1__*,struct dst_entry*,int ) ;
 struct dst_entry* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct net*,struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct net *VAR_2, struct sock *VAR_3, struct sk_buff *VAR_4)
{
 struct dst_entry *VAR_5 = FUNC_4(VAR_4);
 struct bpf_lwt *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_5->lwtstate);
 if (VAR_6->out.prog) {
  VAR_7 = FUNC_3(VAR_4, &VAR_6->out, VAR_5, VAR_1);
  if (VAR_7 < 0)
   return VAR_7;
 }

 if (FUNC_6(!VAR_5->lwtstate->orig_output)) {
  FUNC_2("orig_output not set on dst for prog %s\n",
        VAR_6->out.name);
  FUNC_1(VAR_4);
  return -VAR_0;
 }

 return VAR_5->lwtstate->orig_output(VAR_2, VAR_3, VAR_4);
}
