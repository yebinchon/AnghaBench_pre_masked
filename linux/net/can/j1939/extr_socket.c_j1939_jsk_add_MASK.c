
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct j1939_sock {int list; struct j1939_priv* priv; int state; } ;
struct j1939_priv {int j1939_socks_lock; int j1939_socks; } ;


 int VAR_0 ;
 int FUNC_0 (struct j1939_priv*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct j1939_priv *VAR_1, struct j1939_sock *VAR_2)
{
 VAR_2->state |= VAR_0;
 FUNC_0(VAR_1);
 VAR_2->priv = VAR_1;

 FUNC_2(&VAR_1->j1939_socks_lock);
 FUNC_1(&VAR_2->list, &VAR_1->j1939_socks);
 FUNC_3(&VAR_1->j1939_socks_lock);
}
