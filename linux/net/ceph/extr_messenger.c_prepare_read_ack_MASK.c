
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_connection {scalar_t__ in_base_pos; } ;


 int FUNC_0 (char*,struct ceph_connection*) ;

__attribute__((used)) static void FUNC_1(struct ceph_connection *VAR_0)
{
 FUNC_0("prepare_read_ack %p\n", VAR_0);
 VAR_0->in_base_pos = 0;
}
