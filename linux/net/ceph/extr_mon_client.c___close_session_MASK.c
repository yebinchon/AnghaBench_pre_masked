
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mon_client {int auth; scalar_t__ pending_auth; int con; int m_subscribe_ack; int m_subscribe; int m_auth_reply; int m_auth; int cur_mon; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void FUNC_5(struct ceph_mon_client *VAR_0)
{
 FUNC_4("__close_session closing mon%d\n", VAR_0->cur_mon);
 FUNC_2(VAR_0->m_auth);
 FUNC_3(VAR_0->m_auth_reply);
 FUNC_2(VAR_0->m_subscribe);
 FUNC_3(VAR_0->m_subscribe_ack);
 FUNC_1(&VAR_0->con);

 VAR_0->pending_auth = 0;
 FUNC_0(VAR_0->auth);
}
