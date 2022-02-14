
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct dst_entry {TYPE_2__* lwtstate; } ;
struct TYPE_3__ {scalar_t__ prog; } ;
struct bpf_lwt {TYPE_1__ in; } ;
struct TYPE_4__ {int (* orig_input ) (struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 struct bpf_lwt* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,TYPE_1__*,struct dst_entry*,int ) ;
 struct dst_entry* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_3)
{
 struct dst_entry *VAR_4 = FUNC_4(VAR_3);
 struct bpf_lwt *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_4->lwtstate);
 if (VAR_5->in.prog) {
  VAR_6 = FUNC_3(VAR_3, &VAR_5->in, VAR_4, VAR_2);
  if (VAR_6 < 0)
   return VAR_6;
  if (VAR_6 == VAR_0)
   return FUNC_0(VAR_3);
 }

 if (FUNC_6(!VAR_4->lwtstate->orig_input)) {
  FUNC_2(VAR_3);
  return -VAR_1;
 }

 return VAR_4->lwtstate->orig_input(VAR_3);
}
