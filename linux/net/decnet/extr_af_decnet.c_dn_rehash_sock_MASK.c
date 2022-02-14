
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct hlist_head {int dummy; } ;
struct TYPE_2__ {int sdn_flags; } ;
struct dn_scp {TYPE_1__ addr; scalar_t__ addrloc; } ;


 struct dn_scp* FUNC_0 (struct sock*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct hlist_head* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct sock*,struct hlist_head*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_2)
{
 struct hlist_head *VAR_3;
 struct dn_scp *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->addr.sdn_flags & VAR_0)
  return;

 FUNC_4(&VAR_1);
 FUNC_3(VAR_2);
 FUNC_0(VAR_2)->addrloc = 0;
 VAR_3 = FUNC_1(&FUNC_0(VAR_2)->addr);
 FUNC_2(VAR_2, VAR_3);
 FUNC_5(&VAR_1);
}
