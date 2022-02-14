
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_msg_header {int tid; int front_len; int type; } ;
struct ceph_msg {int front_alloc_len; } ;
struct ceph_mon_client {int m_auth_reply; int m_subscribe_ack; } ;
struct TYPE_2__ {int num; scalar_t__ type; } ;
struct ceph_connection {TYPE_1__ peer_name; struct ceph_mon_client* private; } ;
 int VAR_0 ;
 struct ceph_msg* FUNC_0 (int ) ;
 struct ceph_msg* FUNC_1 (int,int,int ,int) ;
 int FUNC_2 (struct ceph_msg*) ;
 struct ceph_msg* FUNC_3 (struct ceph_connection*,struct ceph_msg_header*,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,int,int,unsigned int,int ) ;

__attribute__((used)) static struct ceph_msg *FUNC_9(struct ceph_connection *VAR_1,
          struct ceph_msg_header *VAR_2,
          int *VAR_3)
{
 struct ceph_mon_client *VAR_4 = VAR_1->private;
 int VAR_5 = FUNC_4(VAR_2->type);
 int VAR_6 = FUNC_5(VAR_2->front_len);
 struct ceph_msg *VAR_7 = ((void*)0);

 *VAR_3 = 0;

 switch (VAR_5) {
 case 130:
  VAR_7 = FUNC_0(VAR_4->m_subscribe_ack);
  break;
 case 128:
 case 133:
  return FUNC_3(VAR_1, VAR_2, VAR_3);
 case 136:
  VAR_7 = FUNC_0(VAR_4->m_auth_reply);
  break;
 case 132:
  if (FUNC_6(VAR_2->tid) != 0)
   return FUNC_3(VAR_1, VAR_2, VAR_3);







 case 131:
 case 134:
 case 129:
 case 135:
  VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_0, 0);
  if (!VAR_7)
   return ((void*)0);
  break;
 }

 if (!VAR_7) {
  FUNC_7("alloc_msg unknown type %d\n", VAR_5);
  *VAR_3 = 1;
 } else if (VAR_6 > VAR_7->front_alloc_len) {
  FUNC_8("mon_alloc_msg front %d > prealloc %d (%u#%llu)\n",
   VAR_6, VAR_7->front_alloc_len,
   (unsigned int)VAR_1->peer_name.type,
   FUNC_6(VAR_1->peer_name.num));
  FUNC_2(VAR_7);
  VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_0, 0);
 }

 return VAR_7;
}
