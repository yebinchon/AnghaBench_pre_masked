
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ quick; } ;
struct inet_connection_sock {TYPE_1__ icsk_ack; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 struct dst_entry* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct dst_entry const*,int ) ;
 struct inet_connection_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static bool FUNC_4(struct sock *VAR_1)
{
 const struct inet_connection_sock *VAR_2 = FUNC_2(VAR_1);
 const struct dst_entry *VAR_3 = FUNC_0(VAR_1);

 return (VAR_3 && FUNC_1(VAR_3, VAR_0)) ||
  (VAR_2->icsk_ack.quick && !FUNC_3(VAR_1));
}
