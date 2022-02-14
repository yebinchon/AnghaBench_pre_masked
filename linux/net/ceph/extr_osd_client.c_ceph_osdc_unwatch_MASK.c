
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ceph_osd_request {int r_mtime; int r_flags; int r_base_oloc; int r_base_oid; } ;
struct TYPE_4__ {int base_oloc; int base_oid; } ;
struct ceph_osd_linger_request {int linger_id; TYPE_2__ t; } ;
struct ceph_osd_client {TYPE_1__* client; } ;
struct ceph_options {int mount_timeout; } ;
struct TYPE_3__ {struct ceph_options* options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct ceph_osd_request*,int ) ;
 struct ceph_osd_request* FUNC_3 (struct ceph_osd_client*,int *,int,int,int ) ;
 int FUNC_4 (struct ceph_osd_request*) ;
 int FUNC_5 (struct ceph_osd_client*,struct ceph_osd_request*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ceph_osd_linger_request*) ;
 int FUNC_8 (struct ceph_osd_linger_request*) ;
 int FUNC_9 (struct ceph_osd_request*,int ,int ,int ) ;
 int FUNC_10 (struct ceph_osd_request*,int ) ;

int FUNC_11(struct ceph_osd_client *VAR_4,
        struct ceph_osd_linger_request *VAR_5)
{
 struct ceph_options *VAR_6 = VAR_4->client->options;
 struct ceph_osd_request *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_4, ((void*)0), 1, 0, VAR_3);
 if (!VAR_7)
  return -VAR_2;

 FUNC_0(&VAR_7->r_base_oid, &VAR_5->t.base_oid);
 FUNC_1(&VAR_7->r_base_oloc, &VAR_5->t.base_oloc);
 VAR_7->r_flags = VAR_0;
 FUNC_6(&VAR_7->r_mtime);
 FUNC_9(VAR_7, 0, VAR_5->linger_id,
         VAR_1);

 VAR_8 = FUNC_2(VAR_7, VAR_3);
 if (VAR_8)
  goto out_put_req;

 FUNC_5(VAR_4, VAR_7, 0);
 FUNC_7(VAR_5);
 FUNC_8(VAR_5);
 VAR_8 = FUNC_10(VAR_7, VAR_6->mount_timeout);

out_put_req:
 FUNC_4(VAR_7);
 return VAR_8;
}
