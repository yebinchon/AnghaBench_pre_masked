
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct j1939_priv {int tp_max_packet_size; int active_session_list; int active_session_list_lock; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct j1939_priv *VAR_1)
{
 FUNC_1(&VAR_1->active_session_list_lock);
 FUNC_0(&VAR_1->active_session_list);
 VAR_1->tp_max_packet_size = VAR_0;
}
