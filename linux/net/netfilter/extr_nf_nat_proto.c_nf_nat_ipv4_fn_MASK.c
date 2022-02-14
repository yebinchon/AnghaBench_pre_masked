
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nf_hook_state {int hook; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_2__ {scalar_t__ protocol; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 struct nf_conn* FUNC_1 (struct sk_buff*,int*) ;
 int FUNC_2 (struct sk_buff*,struct nf_conn*,int,int ) ;
 unsigned int FUNC_3 (void*,struct sk_buff*,struct nf_hook_state const*) ;

__attribute__((used)) static unsigned int
FUNC_4(void *VAR_5, struct sk_buff *VAR_6,
        const struct nf_hook_state *VAR_7)
{
 struct nf_conn *VAR_8;
 enum ip_conntrack_info VAR_9;

 VAR_8 = FUNC_1(VAR_6, &VAR_9);
 if (!VAR_8)
  return VAR_3;

 if (VAR_9 == VAR_1 || VAR_9 == VAR_2) {
  if (FUNC_0(VAR_6)->protocol == VAR_0) {
   if (!FUNC_2(VAR_6, VAR_8, VAR_9,
          VAR_7->hook))
    return VAR_4;
   else
    return VAR_3;
  }
 }

 return FUNC_3(VAR_5, VAR_6, VAR_7);
}
