
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int ss_family; } ;
struct in6_addr {int dummy; } ;
struct sockaddr_in6 {struct in6_addr sin6_addr; } ;
struct in_addr {int s_addr; } ;
struct sockaddr_in {struct in_addr sin_addr; } ;
struct ceph_entity_addr {struct sockaddr_storage in_addr; } ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct in6_addr*) ;

__attribute__((used)) static bool FUNC_2(struct ceph_entity_addr *VAR_1)
{
 struct sockaddr_storage VAR_2 = VAR_1->in_addr;
 struct in_addr *VAR_3 = &((struct sockaddr_in *)&VAR_2)->sin_addr;
 struct in6_addr *VAR_4 = &((struct sockaddr_in6 *)&VAR_2)->sin6_addr;

 switch (VAR_2.ss_family) {
 case 129:
  return VAR_3->s_addr == FUNC_0(VAR_0);
 case 128:
  return FUNC_1(VAR_4);
 default:
  return 1;
 }
}
