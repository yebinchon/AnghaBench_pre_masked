
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_connection {int in_temp_ack; } ;


 int FUNC_0 (struct ceph_connection*,int,int,int *) ;

__attribute__((used)) static int FUNC_1(struct ceph_connection *VAR_0)
{
 int VAR_1 = sizeof (VAR_0->in_temp_ack);
 int VAR_2 = VAR_1;

 return FUNC_0(VAR_0, VAR_2, VAR_1, &VAR_0->in_temp_ack);
}
