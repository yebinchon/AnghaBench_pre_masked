
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_spg_mapping {int backoffs; int node; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct ceph_spg_mapping* FUNC_1 (int,int ) ;

__attribute__((used)) static struct ceph_spg_mapping *FUNC_2(void)
{
 struct ceph_spg_mapping *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(&VAR_2->node);
 VAR_2->backoffs = VAR_1;
 return VAR_2;
}
