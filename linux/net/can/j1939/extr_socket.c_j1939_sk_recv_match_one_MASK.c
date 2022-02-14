
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct j1939_sock {int state; } ;
struct j1939_sk_buff_cb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct j1939_sock*,struct j1939_sk_buff_cb const*) ;
 int FUNC_1 (struct j1939_sock*,struct j1939_sk_buff_cb const*) ;

__attribute__((used)) static bool FUNC_2(struct j1939_sock *VAR_1,
        const struct j1939_sk_buff_cb *VAR_2)
{
 if (!(VAR_1->state & VAR_0))
  return 0;

 if (!FUNC_0(VAR_1, VAR_2))
  return 0;

 if (!FUNC_1(VAR_1, VAR_2))
  return 0;

 return 1;
}
