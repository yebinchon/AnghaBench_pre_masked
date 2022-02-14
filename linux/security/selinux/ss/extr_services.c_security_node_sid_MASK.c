
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct sidtab {int dummy; } ;
struct selinux_state {TYPE_4__* ss; } ;
struct policydb {struct ocontext** ocontexts; } ;
struct TYPE_6__ {int mask; int addr; } ;
struct TYPE_5__ {int addr; int mask; } ;
struct TYPE_7__ {TYPE_2__ node6; TYPE_1__ node; } ;
struct ocontext {int* sid; int * context; struct ocontext* next; TYPE_3__ u; } ;
struct TYPE_8__ {int policy_rwlock; struct sidtab* sidtab; struct policydb policydb; } ;




 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sidtab*,int *,int*) ;

int FUNC_4(struct selinux_state *VAR_4,
        u16 VAR_5,
        void *VAR_6,
        u32 VAR_7,
        u32 *VAR_8)
{
 struct policydb *VAR_9;
 struct sidtab *VAR_10;
 int VAR_11;
 struct ocontext *VAR_12;

 FUNC_1(&VAR_4->ss->policy_rwlock);

 VAR_9 = &VAR_4->ss->policydb;
 VAR_10 = VAR_4->ss->sidtab;

 switch (VAR_5) {
 case 129: {
  u32 VAR_13;

  VAR_11 = -VAR_0;
  if (VAR_7 != sizeof(u32))
   goto out;

  VAR_13 = *((u32 *)VAR_6);

  VAR_12 = VAR_9->ocontexts[VAR_1];
  while (VAR_12) {
   if (VAR_12->u.node.addr == (VAR_13 & VAR_12->u.node.mask))
    break;
   VAR_12 = VAR_12->next;
  }
  break;
 }

 case 128:
  VAR_11 = -VAR_0;
  if (VAR_7 != sizeof(u64) * 2)
   goto out;
  VAR_12 = VAR_9->ocontexts[VAR_2];
  while (VAR_12) {
   if (FUNC_0(VAR_6, VAR_12->u.node6.addr,
      VAR_12->u.node6.mask))
    break;
   VAR_12 = VAR_12->next;
  }
  break;

 default:
  VAR_11 = 0;
  *VAR_8 = VAR_3;
  goto out;
 }

 if (VAR_12) {
  if (!VAR_12->sid[0]) {
   VAR_11 = FUNC_3(VAR_10,
         &VAR_12->context[0],
         &VAR_12->sid[0]);
   if (VAR_11)
    goto out;
  }
  *VAR_8 = VAR_12->sid[0];
 } else {
  *VAR_8 = VAR_3;
 }

 VAR_11 = 0;
out:
 FUNC_2(&VAR_4->ss->policy_rwlock);
 return VAR_11;
}
