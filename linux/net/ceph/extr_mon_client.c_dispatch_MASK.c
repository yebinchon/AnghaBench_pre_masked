
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
struct ceph_msg {TYPE_1__ hdr; } ;
struct ceph_mon_client {TYPE_2__* client; } ;
struct ceph_connection {struct ceph_mon_client* private; } ;
struct TYPE_4__ {int (* extra_mon_dispatch ) (TYPE_2__*,struct ceph_msg*) ;int osdc; } ;
 int FUNC_0 (struct ceph_mon_client*,struct ceph_msg*) ;
 int FUNC_1 (struct ceph_msg*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,struct ceph_msg*) ;
 int FUNC_4 (struct ceph_mon_client*,struct ceph_msg*) ;
 int FUNC_5 (struct ceph_mon_client*,struct ceph_msg*) ;
 int FUNC_6 (struct ceph_mon_client*,struct ceph_msg*) ;
 int FUNC_7 (struct ceph_mon_client*,struct ceph_msg*) ;
 int FUNC_8 (struct ceph_mon_client*,struct ceph_msg*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int,int ) ;
 int FUNC_11 (TYPE_2__*,struct ceph_msg*) ;

__attribute__((used)) static void FUNC_12(struct ceph_connection *VAR_0, struct ceph_msg *VAR_1)
{
 struct ceph_mon_client *VAR_2 = VAR_0->private;
 int VAR_3 = FUNC_9(VAR_1->hdr.type);

 if (!VAR_2)
  return;

 switch (VAR_3) {
 case 134:
  FUNC_4(VAR_2, VAR_1);
  break;

 case 130:
  FUNC_8(VAR_2, VAR_1);
  break;

 case 128:
  FUNC_7(VAR_2, VAR_1);
  break;

 case 132:
  FUNC_6(VAR_2, VAR_1);
  break;

 case 133:
  FUNC_5(VAR_2, VAR_1);
  break;

 case 131:
  FUNC_0(VAR_2, VAR_1);
  break;

 case 129:
  FUNC_3(&VAR_2->client->osdc, VAR_1);
  break;

 default:

  if (VAR_2->client->extra_mon_dispatch &&
      VAR_2->client->extra_mon_dispatch(VAR_2->client, VAR_1) == 0)
   break;

  FUNC_10("received unknown message type %d %s\n", VAR_3,
         FUNC_2(VAR_3));
 }
 FUNC_1(VAR_1);
}
