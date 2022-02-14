
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_dn {int dummy; } ;
struct sock {int sk_allocation; } ;
struct dn_scp {int state; } ;







 struct dn_scp* FUNC_0 (struct sock*) ;
 int VAR_0 ;
 int FUNC_1 (struct sock*,struct sockaddr_dn*,int,long*,int) ;
 int FUNC_2 (struct sock*,long*,int ) ;
 int FUNC_3 (struct sock*,long*) ;

__attribute__((used)) static inline int FUNC_4(struct sock *VAR_1, struct sockaddr_dn *VAR_2, int VAR_3, long *VAR_4, int VAR_5)
{
 struct dn_scp *VAR_6 = FUNC_0(VAR_1);

 switch (VAR_6->state) {
 case 128:
  return 0;
 case 130:
  return FUNC_2(VAR_1, VAR_4, VAR_1->sk_allocation);
 case 131:
 case 132:
  return FUNC_3(VAR_1, VAR_4);
 case 129:
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 }

 return -VAR_0;
}
