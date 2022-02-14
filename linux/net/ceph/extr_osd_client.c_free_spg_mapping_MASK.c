
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_spg_mapping {int backoffs; int node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ceph_spg_mapping*) ;

__attribute__((used)) static void FUNC_4(struct ceph_spg_mapping *VAR_0)
{
 FUNC_2(!FUNC_0(&VAR_0->node));
 FUNC_2(!FUNC_1(&VAR_0->backoffs));

 FUNC_3(VAR_0);
}
