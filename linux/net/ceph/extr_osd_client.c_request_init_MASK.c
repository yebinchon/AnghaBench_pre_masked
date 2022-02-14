
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_osd_request {int r_t; int r_private_item; int r_mc_node; int r_node; int r_completion; int r_kref; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ceph_osd_request*,int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ceph_osd_request *VAR_0)
{

 FUNC_4(VAR_0, 0, sizeof(*VAR_0));

 FUNC_3(&VAR_0->r_kref);
 FUNC_2(&VAR_0->r_completion);
 FUNC_1(&VAR_0->r_node);
 FUNC_1(&VAR_0->r_mc_node);
 FUNC_0(&VAR_0->r_private_item);

 FUNC_5(&VAR_0->r_t);
}
