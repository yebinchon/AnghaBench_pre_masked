
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_family; int * sk_prot; } ;
struct TYPE_2__ {scalar_t__ msg_parser; } ;
struct sk_psock {TYPE_1__ progs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int ** VAR_5 ;

__attribute__((used)) static void FUNC_0(struct sock *VAR_6, struct sk_psock *VAR_7)
{
 int VAR_8 = VAR_6->sk_family == VAR_0 ? VAR_3 : VAR_2;
 int VAR_9 = VAR_7->progs.msg_parser ? VAR_4 : VAR_1;





 VAR_6->sk_prot = &VAR_5[VAR_8][VAR_9];
}
