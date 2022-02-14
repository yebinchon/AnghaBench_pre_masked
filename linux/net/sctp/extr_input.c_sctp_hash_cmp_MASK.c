
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sctp_transport {TYPE_3__* asoc; int ipaddr; } ;
struct sctp_hash_cmp_arg {scalar_t__ lport; int net; int paddr; } ;
struct rhashtable_compare_arg {struct sctp_hash_cmp_arg* key; } ;
struct TYPE_4__ {int port; } ;
struct TYPE_5__ {TYPE_1__ bind_addr; int sk; } ;
struct TYPE_6__ {TYPE_2__ base; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct sctp_transport*) ;
 int FUNC_4 (struct sctp_transport*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static inline int FUNC_6(struct rhashtable_compare_arg *VAR_0,
    const void *VAR_1)
{
 struct sctp_transport *VAR_2 = (struct sctp_transport *)VAR_1;
 const struct sctp_hash_cmp_arg *VAR_3 = VAR_0->key;
 int VAR_4 = 1;

 if (!FUNC_2(&VAR_2->ipaddr, VAR_3->paddr))
  return VAR_4;
 if (!FUNC_3(VAR_2))
  return VAR_4;

 if (!FUNC_1(FUNC_5(VAR_2->asoc->base.sk), VAR_3->net))
  goto out;
 if (VAR_3->lport != FUNC_0(VAR_2->asoc->base.bind_addr.port))
  goto out;

 VAR_4 = 0;
out:
 FUNC_4(VAR_2);
 return VAR_4;
}
