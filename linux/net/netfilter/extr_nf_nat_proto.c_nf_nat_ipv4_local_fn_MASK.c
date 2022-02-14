
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nf_hook_state {int net; } ;
struct nf_conn {TYPE_8__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
struct TYPE_18__ {int flags; } ;
struct TYPE_14__ {scalar_t__ all; } ;
struct TYPE_11__ {scalar_t__ ip; } ;
struct TYPE_15__ {TYPE_5__ u; TYPE_2__ u3; } ;
struct TYPE_12__ {scalar_t__ all; } ;
struct TYPE_10__ {scalar_t__ ip; } ;
struct TYPE_13__ {scalar_t__ protonum; TYPE_3__ u; TYPE_1__ u3; } ;
struct TYPE_16__ {TYPE_6__ src; TYPE_4__ dst; } ;
struct TYPE_17__ {TYPE_7__ tuple; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_9__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int ,struct sk_buff*,int ) ;
 struct nf_conn* FUNC_4 (struct sk_buff*,int*) ;
 unsigned int FUNC_5 (void*,struct sk_buff*,struct nf_hook_state const*) ;
 int FUNC_6 (int ,struct sk_buff*,int ) ;

__attribute__((used)) static unsigned int
FUNC_7(void *VAR_5, struct sk_buff *VAR_6,
       const struct nf_hook_state *VAR_7)
{
 const struct nf_conn *VAR_8;
 enum ip_conntrack_info VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 VAR_10 = FUNC_5(VAR_5, VAR_6, VAR_7);
 if (VAR_10 != VAR_3)
  return VAR_10;

 VAR_8 = FUNC_4(VAR_6, &VAR_9);
 if (VAR_8) {
  enum ip_conntrack_dir VAR_12 = FUNC_0(VAR_9);

  if (VAR_8->tuplehash[VAR_12].tuple.dst.u3.ip !=
      VAR_8->tuplehash[!VAR_12].tuple.src.u3.ip) {
   VAR_11 = FUNC_3(VAR_7->net, VAR_6, VAR_4);
   if (VAR_11 < 0)
    VAR_10 = FUNC_2(VAR_11);
  }
 }
 return VAR_10;
}
