
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_osd_backoff {int id_node; int spg_node; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct ceph_osd_backoff* FUNC_1 (int,int ) ;

__attribute__((used)) static struct ceph_osd_backoff *FUNC_2(void)
{
 struct ceph_osd_backoff *VAR_1;

 VAR_1 = FUNC_1(sizeof(*VAR_1), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 FUNC_0(&VAR_1->spg_node);
 FUNC_0(&VAR_1->id_node);
 return VAR_1;
}
