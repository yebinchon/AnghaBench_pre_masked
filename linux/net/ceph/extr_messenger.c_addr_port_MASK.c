
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct TYPE_2__ {int ss_family; } ;
struct ceph_entity_addr {TYPE_1__ in_addr; } ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct ceph_entity_addr *VAR_0)
{
 switch (FUNC_0(&VAR_0->in_addr.ss_family)) {
 case 129:
  return FUNC_1(FUNC_0(&((struct sockaddr_in *)&VAR_0->in_addr)->sin_port));
 case 128:
  return FUNC_1(FUNC_0(&((struct sockaddr_in6 *)&VAR_0->in_addr)->sin6_port));
 }
 return 0;
}
