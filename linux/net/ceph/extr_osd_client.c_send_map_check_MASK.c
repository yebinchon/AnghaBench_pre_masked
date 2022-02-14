
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_osd_request {int r_tid; struct ceph_osd_client* r_osdc; } ;
struct ceph_osd_client {TYPE_1__* client; int map_checks; } ;
struct TYPE_2__ {int monc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (struct ceph_osd_request*) ;
 int FUNC_3 (int *,struct ceph_osd_request*) ;
 struct ceph_osd_request* FUNC_4 (int *,int ) ;
 int VAR_0 ;
 int FUNC_5 (struct ceph_osd_client*) ;

__attribute__((used)) static void FUNC_6(struct ceph_osd_request *VAR_1)
{
 struct ceph_osd_client *VAR_2 = VAR_1->r_osdc;
 struct ceph_osd_request *VAR_3;
 int VAR_4;

 FUNC_5(VAR_2);

 VAR_3 = FUNC_4(&VAR_2->map_checks, VAR_1->r_tid);
 if (VAR_3) {
  FUNC_0(VAR_3 != VAR_1);
  return;
 }

 FUNC_2(VAR_1);
 FUNC_3(&VAR_2->map_checks, VAR_1);
 VAR_4 = FUNC_1(&VAR_2->client->monc, "osdmap",
       VAR_0, VAR_1->r_tid);
 FUNC_0(VAR_4);
}
