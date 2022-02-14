
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_connection {scalar_t__ connect_seq; } ;



bool FUNC_0(struct ceph_connection *VAR_0)
{
 return VAR_0->connect_seq > 0;
}
