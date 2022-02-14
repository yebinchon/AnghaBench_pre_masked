
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mon_client {int cur_mon; int monmap; int m_subscribe_ack; int m_subscribe; int m_auth_reply; int m_auth; int generic_request_tree; int auth; int mutex; int delayed_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ceph_mon_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct ceph_mon_client *VAR_0)
{
 FUNC_7("stop\n");
 FUNC_3(&VAR_0->delayed_work);

 FUNC_9(&VAR_0->mutex);
 FUNC_2(VAR_0);
 VAR_0->cur_mon = -1;
 FUNC_10(&VAR_0->mutex);







 FUNC_6();

 FUNC_4(VAR_0->auth);

 FUNC_1(!FUNC_0(&VAR_0->generic_request_tree));

 FUNC_5(VAR_0->m_auth);
 FUNC_5(VAR_0->m_auth_reply);
 FUNC_5(VAR_0->m_subscribe);
 FUNC_5(VAR_0->m_subscribe_ack);

 FUNC_8(VAR_0->monmap);
}
