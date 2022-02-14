
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_x_info {int starting; scalar_t__ server_challenge; } ;
struct ceph_auth_client {struct ceph_x_info* private; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct ceph_auth_client *VAR_0)
{
 struct ceph_x_info *VAR_1 = VAR_0->private;

 FUNC_0("reset\n");
 VAR_1->starting = 1;
 VAR_1->server_challenge = 0;
}
