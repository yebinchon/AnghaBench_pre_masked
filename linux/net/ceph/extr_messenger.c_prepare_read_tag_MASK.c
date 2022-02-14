
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_connection {int in_tag; scalar_t__ in_base_pos; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct ceph_connection*) ;

__attribute__((used)) static void FUNC_1(struct ceph_connection *VAR_1)
{
 FUNC_0("prepare_read_tag %p\n", VAR_1);
 VAR_1->in_base_pos = 0;
 VAR_1->in_tag = VAR_0;
}
