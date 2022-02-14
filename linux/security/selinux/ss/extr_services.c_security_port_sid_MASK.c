
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct sidtab {int dummy; } ;
struct selinux_state {TYPE_3__* ss; } ;
struct policydb {struct ocontext** ocontexts; } ;
struct TYPE_4__ {scalar_t__ protocol; scalar_t__ low_port; scalar_t__ high_port; } ;
struct TYPE_5__ {TYPE_1__ port; } ;
struct ocontext {scalar_t__* sid; int * context; struct ocontext* next; TYPE_2__ u; } ;
struct TYPE_6__ {int policy_rwlock; struct sidtab* sidtab; struct policydb policydb; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sidtab*,int *,scalar_t__*) ;

int FUNC_3(struct selinux_state *VAR_2,
        u8 VAR_3, u16 VAR_4, u32 *VAR_5)
{
 struct policydb *VAR_6;
 struct sidtab *VAR_7;
 struct ocontext *VAR_8;
 int VAR_9 = 0;

 FUNC_0(&VAR_2->ss->policy_rwlock);

 VAR_6 = &VAR_2->ss->policydb;
 VAR_7 = VAR_2->ss->sidtab;

 VAR_8 = VAR_6->ocontexts[VAR_0];
 while (VAR_8) {
  if (VAR_8->u.port.protocol == VAR_3 &&
      VAR_8->u.port.low_port <= VAR_4 &&
      VAR_8->u.port.high_port >= VAR_4)
   break;
  VAR_8 = VAR_8->next;
 }

 if (VAR_8) {
  if (!VAR_8->sid[0]) {
   VAR_9 = FUNC_2(VAR_7,
         &VAR_8->context[0],
         &VAR_8->sid[0]);
   if (VAR_9)
    goto out;
  }
  *VAR_5 = VAR_8->sid[0];
 } else {
  *VAR_5 = VAR_1;
 }

out:
 FUNC_1(&VAR_2->ss->policy_rwlock);
 return VAR_9;
}
