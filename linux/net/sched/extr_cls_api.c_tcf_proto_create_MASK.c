
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct tcf_proto {TYPE_1__* ops; int refcnt; int lock; struct tcf_chain* chain; void* prio; void* protocol; int classify; } ;
struct tcf_chain {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_4__ {int (* init ) (struct tcf_proto*) ;int owner; int classify; } ;


 int VAR_0 ;
 struct tcf_proto* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct tcf_proto*) ;
 struct tcf_proto* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct tcf_proto*) ;
 TYPE_1__* FUNC_9 (char const*,int,struct netlink_ext_ack*) ;

__attribute__((used)) static struct tcf_proto *FUNC_10(const char *VAR_2, u32 VAR_3,
       u32 VAR_4, struct tcf_chain *VAR_5,
       bool VAR_6,
       struct netlink_ext_ack *VAR_7)
{
 struct tcf_proto *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_8->ops = FUNC_9(VAR_2, VAR_6, VAR_7);
 if (FUNC_1(VAR_8->ops)) {
  VAR_9 = FUNC_2(VAR_8->ops);
  goto errout;
 }
 VAR_8->classify = VAR_8->ops->classify;
 VAR_8->protocol = VAR_3;
 VAR_8->prio = VAR_4;
 VAR_8->chain = VAR_5;
 FUNC_7(&VAR_8->lock);
 FUNC_6(&VAR_8->refcnt, 1);

 VAR_9 = VAR_8->ops->init(VAR_8);
 if (VAR_9) {
  FUNC_5(VAR_8->ops->owner);
  goto errout;
 }
 return VAR_8;

errout:
 FUNC_3(VAR_8);
 return FUNC_0(VAR_9);
}
