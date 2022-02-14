
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
typedef int u16 ;
struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int sid; } ;
struct sk_buff {int dummy; } ;
struct request_sock {void* peer_secid; void* secid; TYPE_1__* rsk_ops; } ;
struct TYPE_2__ {int family; } ;


 int FUNC_0 (int ,void*,void**) ;
 int FUNC_1 (struct request_sock*,int ) ;
 int FUNC_2 (struct sk_buff*,int ,void**) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_0, struct sk_buff *VAR_1,
         struct request_sock *VAR_2)
{
 struct sk_security_struct *VAR_3 = VAR_0->sk_security;
 int VAR_4;
 u16 VAR_5 = VAR_2->rsk_ops->family;
 u32 VAR_6;
 u32 VAR_7;

 VAR_4 = FUNC_2(VAR_1, VAR_5, &VAR_7);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_0(VAR_3->sid, VAR_7, &VAR_6);
 if (VAR_4)
  return VAR_4;
 VAR_2->secid = VAR_6;
 VAR_2->peer_secid = VAR_7;

 return FUNC_1(VAR_2, VAR_5);
}
