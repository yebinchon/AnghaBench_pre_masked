
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_osd_request {int r_osd; int r_private_item; int r_mc_node; int r_node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ceph_osd_request *VAR_0)
{
 FUNC_1(!FUNC_0(&VAR_0->r_node));
 FUNC_1(!FUNC_0(&VAR_0->r_mc_node));
 FUNC_1(!FUNC_2(&VAR_0->r_private_item));
 FUNC_1(VAR_0->r_osd);
}
