
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int sclass; void* sid; void* peer_sid; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 struct sk_security_struct* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sk_security_struct*) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_3, int VAR_4, gfp_t VAR_5)
{
 struct sk_security_struct *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_5);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->peer_sid = VAR_2;
 VAR_6->sid = VAR_2;
 VAR_6->sclass = VAR_1;
 FUNC_1(VAR_6);
 VAR_3->sk_security = VAR_6;

 return 0;
}
