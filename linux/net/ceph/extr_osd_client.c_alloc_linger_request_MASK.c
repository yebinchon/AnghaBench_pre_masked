
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_osd_request {int r_base_oloc; int r_base_oid; } ;
struct TYPE_2__ {int base_oloc; int base_oid; } ;
struct ceph_osd_linger_request {TYPE_1__ t; int osdc; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 struct ceph_osd_request* FUNC_2 (int ,int *,int,int,int ) ;

__attribute__((used)) static struct ceph_osd_request *
FUNC_3(struct ceph_osd_linger_request *VAR_1)
{
 struct ceph_osd_request *VAR_2;

 VAR_2 = FUNC_2(VAR_1->osdc, ((void*)0), 1, 0, VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(&VAR_2->r_base_oid, &VAR_1->t.base_oid);
 FUNC_1(&VAR_2->r_base_oloc, &VAR_1->t.base_oloc);
 return VAR_2;
}
