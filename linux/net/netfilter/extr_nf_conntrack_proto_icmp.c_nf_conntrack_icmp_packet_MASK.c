
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int valid_new ;
typedef int u_int8_t ;
struct sk_buff {int dummy; } ;
struct nf_hook_state {scalar_t__ pf; } ;
struct nf_conn {TYPE_4__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_7__ {int type; } ;
struct TYPE_8__ {TYPE_1__ icmp; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
struct TYPE_12__ {TYPE_3__ dst; } ;
struct TYPE_11__ {unsigned int timeout; } ;
struct TYPE_10__ {TYPE_6__ tuple; } ;






 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (struct nf_conn*) ;
 int FUNC_2 (struct nf_conn*,int,struct sk_buff*,unsigned int) ;
 unsigned int* FUNC_3 (struct nf_conn*) ;
 TYPE_5__* FUNC_4 (int ) ;
 int FUNC_5 (char*,size_t) ;

int FUNC_6(struct nf_conn *VAR_2,
        struct sk_buff *VAR_3,
        enum ip_conntrack_info VAR_4,
        const struct nf_hook_state *VAR_5)
{



 unsigned int *VAR_6 = FUNC_3(VAR_2);
 static const u_int8_t VAR_7[] = {
  [130] = 1,
  [128] = 1,
  [129] = 1,
  [131] = 1
 };

 if (VAR_5->pf != VAR_0)
  return -VAR_1;

 if (VAR_2->tuplehash[0].tuple.dst.u.icmp.type >= sizeof(VAR_7) ||
     !VAR_7[VAR_2->tuplehash[0].tuple.dst.u.icmp.type]) {

  FUNC_5("icmp: can't create new conn with type %u\n",
    VAR_2->tuplehash[0].tuple.dst.u.icmp.type);
  FUNC_0(&VAR_2->tuplehash[0].tuple);
  return -VAR_1;
 }

 if (!VAR_6)
  VAR_6 = &FUNC_4(FUNC_1(VAR_2))->timeout;

 FUNC_2(VAR_2, VAR_4, VAR_3, *VAR_6);
 return VAR_1;
}
