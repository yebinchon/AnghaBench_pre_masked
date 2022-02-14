
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
typedef void* u16 ;
struct task_security_struct {int dummy; } ;
struct socket {TYPE_1__* sk; } ;
struct sk_security_struct {scalar_t__ sclass; int sctp_assoc_state; void* sid; } ;
struct inode_security_struct {int initialized; void* sid; void* sclass; } ;
struct TYPE_2__ {struct sk_security_struct* sk_security; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (struct socket*) ;
 int FUNC_1 () ;
 struct inode_security_struct* FUNC_2 (int ) ;
 struct task_security_struct* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (struct task_security_struct const*,void*,void**) ;
 void* FUNC_6 (int,int,int) ;

__attribute__((used)) static int FUNC_7(struct socket *VAR_4, int VAR_5,
          int VAR_6, int VAR_7, int VAR_8)
{
 const struct task_security_struct *VAR_9 = FUNC_3(FUNC_1());
 struct inode_security_struct *VAR_10 = FUNC_2(FUNC_0(VAR_4));
 struct sk_security_struct *VAR_11;
 u16 VAR_12 = FUNC_6(VAR_5, VAR_6, VAR_7);
 u32 VAR_13 = VAR_3;
 int VAR_14 = 0;

 if (!VAR_8) {
  VAR_14 = FUNC_5(VAR_9, VAR_12, &VAR_13);
  if (VAR_14)
   return VAR_14;
 }

 VAR_10->sclass = VAR_12;
 VAR_10->sid = VAR_13;
 VAR_10->initialized = VAR_0;

 if (VAR_4->sk) {
  VAR_11 = VAR_4->sk->sk_security;
  VAR_11->sclass = VAR_12;
  VAR_11->sid = VAR_13;

  if (VAR_11->sclass == VAR_2)
   VAR_11->sctp_assoc_state = VAR_1;

  VAR_14 = FUNC_4(VAR_4->sk, VAR_5);
 }

 return VAR_14;
}
