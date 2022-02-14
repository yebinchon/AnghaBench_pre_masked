
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
struct TYPE_15__ {scalar_t__ protonum; TYPE_5__ u; TYPE_2__ u3; } ;
struct TYPE_12__ {scalar_t__ all; } ;
struct TYPE_10__ {scalar_t__ ip; } ;
struct TYPE_13__ {TYPE_3__ u; TYPE_1__ u3; } ;
struct TYPE_16__ {TYPE_6__ dst; TYPE_4__ src; } ;
struct TYPE_17__ {TYPE_7__ tuple; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_9__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_2 (int) ;
 struct nf_conn* FUNC_3 (struct sk_buff*,int*) ;
 unsigned int FUNC_4 (void*,struct sk_buff*,struct nf_hook_state const*) ;
 int FUNC_5 (int ,struct sk_buff*,int ) ;

__attribute__((used)) static unsigned int
FUNC_6(void *VAR_4, struct sk_buff *VAR_5,
  const struct nf_hook_state *VAR_6)
{





 unsigned int VAR_7;

 VAR_7 = FUNC_4(VAR_4, VAR_5, VAR_6);
 return VAR_7;
}
