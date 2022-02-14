
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ probe_size; scalar_t__ search_high; } ;
struct inet_connection_sock {TYPE_1__ icsk_mtup; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_1)
{
 struct inet_connection_sock *VAR_2 = FUNC_1(VAR_1);

 VAR_2->icsk_mtup.search_high = VAR_2->icsk_mtup.probe_size - 1;
 VAR_2->icsk_mtup.probe_size = 0;
 FUNC_0(FUNC_2(VAR_1), VAR_0);
}
