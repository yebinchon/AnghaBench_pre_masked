
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
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ceph_entity_addr *VAR_0, int VAR_1)
{
 switch (FUNC_0(&VAR_0->in_addr.ss_family)) {
 case 129:
  FUNC_2(FUNC_1(VAR_1), &((struct sockaddr_in *)&VAR_0->in_addr)->sin_port);
  break;
 case 128:
  FUNC_2(FUNC_1(VAR_1), &((struct sockaddr_in6 *)&VAR_0->in_addr)->sin6_port);
  break;
 }
}
