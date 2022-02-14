
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_osd_linger_request {int linger_id; struct ceph_osd_client* osdc; } ;
struct ceph_osd_client {TYPE_1__* client; int linger_map_checks; } ;
struct TYPE_2__ {int monc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *,struct ceph_osd_linger_request*) ;
 int FUNC_3 (struct ceph_osd_linger_request*) ;
 int VAR_0 ;
 struct ceph_osd_linger_request* FUNC_4 (int *,int ) ;
 int FUNC_5 (struct ceph_osd_client*) ;

__attribute__((used)) static void FUNC_6(struct ceph_osd_linger_request *VAR_1)
{
 struct ceph_osd_client *VAR_2 = VAR_1->osdc;
 struct ceph_osd_linger_request *VAR_3;
 int VAR_4;

 FUNC_5(VAR_2);

 VAR_3 = FUNC_4(&VAR_2->linger_map_checks,
           VAR_1->linger_id);
 if (VAR_3) {
  FUNC_0(VAR_3 != VAR_1);
  return;
 }

 FUNC_3(VAR_1);
 FUNC_2(&VAR_2->linger_map_checks, VAR_1);
 VAR_4 = FUNC_1(&VAR_2->client->monc, "osdmap",
       VAR_0, VAR_1->linger_id);
 FUNC_0(VAR_4);
}
