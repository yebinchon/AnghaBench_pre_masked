
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct TYPE_5__ {scalar_t__ a_addr; void* a_len; } ;
struct TYPE_6__ {TYPE_2__ sdn_add; void* sdn_objnamel; int sdn_objname; scalar_t__ sdn_objnum; scalar_t__ sdn_flags; } ;
struct TYPE_4__ {int acc_accl; int acc_acc; } ;
struct dn_scp {TYPE_3__ addr; TYPE_1__ accessdata; } ;
typedef int __le16 ;


 struct dn_scp* FUNC_0 (struct sock*) ;
 int VAR_0 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_9(struct socket *VAR_1)
{
 struct sock *VAR_2 = VAR_1->sk;
 struct dn_scp *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 FUNC_7(VAR_2, VAR_0);

 VAR_3->addr.sdn_flags = 0;
 VAR_3->addr.sdn_objnum = 0;





 if ((VAR_3->accessdata.acc_accl != 0) &&
  (VAR_3->accessdata.acc_accl <= 12)) {

  VAR_3->addr.sdn_objnamel = FUNC_1(VAR_3->accessdata.acc_accl);
  FUNC_5(VAR_3->addr.sdn_objname, VAR_3->accessdata.acc_acc, FUNC_4(VAR_3->addr.sdn_objnamel));

  VAR_3->accessdata.acc_accl = 0;
  FUNC_6(VAR_3->accessdata.acc_acc, 0, 40);
 }


 VAR_3->addr.sdn_add.a_len = FUNC_1(2);
 VAR_4 = FUNC_2((__le16 *)VAR_3->addr.sdn_add.a_addr);
 if (VAR_4 == 0) {
  VAR_4 = FUNC_3(VAR_2);
  if (VAR_4)
   FUNC_8(VAR_2, VAR_0);
 }

 return VAR_4;
}
