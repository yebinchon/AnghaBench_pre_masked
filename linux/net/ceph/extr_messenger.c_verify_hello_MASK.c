
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_connection {char* error_msg; int peer_addr; int in_banner; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ceph_connection *VAR_1)
{
 if (FUNC_1(VAR_1->in_banner, VAR_0, FUNC_3(VAR_0))) {
  FUNC_2("connect to %s got bad banner\n",
         FUNC_0(&VAR_1->peer_addr));
  VAR_1->error_msg = "protocol error, bad banner";
  return -1;
 }
 return 0;
}
