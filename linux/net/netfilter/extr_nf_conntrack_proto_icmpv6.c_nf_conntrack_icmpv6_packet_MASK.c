
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int valid_new ;
typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nf_hook_state {scalar_t__ pf; } ;
struct nf_conn {TYPE_4__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_6__ {int type; } ;
struct TYPE_7__ {TYPE_1__ icmp; } ;
struct TYPE_8__ {TYPE_2__ u; } ;
struct TYPE_10__ {TYPE_3__ dst; } ;
struct TYPE_9__ {TYPE_5__ tuple; } ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (struct nf_conn*) ;
 int FUNC_3 (struct nf_conn*) ;
 int FUNC_4 (struct nf_conn*,int,struct sk_buff*,unsigned int) ;
 unsigned int* FUNC_5 (struct nf_conn*) ;
 int FUNC_6 (char*,int) ;

int FUNC_7(struct nf_conn *VAR_2,
          struct sk_buff *VAR_3,
          enum ip_conntrack_info VAR_4,
          const struct nf_hook_state *VAR_5)
{
 unsigned int *VAR_6 = FUNC_5(VAR_2);
 static const u8 VAR_7[] = {
  [129 - 128] = 1,
  [128 - 128] = 1
 };

 if (VAR_5->pf != VAR_0)
  return -VAR_1;

 if (!FUNC_2(VAR_2)) {
  int VAR_8 = VAR_2->tuplehash[0].tuple.dst.u.icmp.type - 128;

  if (VAR_8 < 0 || VAR_8 >= sizeof(VAR_7) || !VAR_7[VAR_8]) {

   FUNC_6("icmpv6: can't create new conn with type %u\n",
     VAR_8 + 128);
   FUNC_1(&VAR_2->tuplehash[0].tuple);
   return -VAR_1;
  }
 }

 if (!VAR_6)
  VAR_6 = FUNC_0(FUNC_3(VAR_2));




 FUNC_4(VAR_2, VAR_4, VAR_3, *VAR_6);

 return VAR_1;
}
