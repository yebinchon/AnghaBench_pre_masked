
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unix_address {int len; int name; } ;
struct sock {int dummy; } ;
struct msghdr {int msg_name; int msg_namelen; } ;
struct TYPE_2__ {int addr; } ;


 int FUNC_0 (int ,int ,int ) ;
 struct unix_address* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct msghdr *VAR_0, struct sock *VAR_1)
{
 struct unix_address *VAR_2 = FUNC_1(&FUNC_2(VAR_1)->addr);

 if (VAR_2) {
  VAR_0->msg_namelen = VAR_2->len;
  FUNC_0(VAR_0->msg_name, VAR_2->name, VAR_2->len);
 }
}
