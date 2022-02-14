
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int s6_addr; } ;
struct sockaddr_in6 {TYPE_2__ sin6_addr; } ;
struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct TYPE_6__ {int ss_family; } ;
struct ceph_entity_addr {TYPE_3__ in_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,size_t,int *,char,char const**) ;
 scalar_t__ FUNC_1 (char const*,size_t,int *,char,char const**) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(const char *VAR_3, size_t VAR_4, struct ceph_entity_addr *VAR_5,
  char VAR_6, const char **VAR_7)
{
 FUNC_2(&VAR_5->in_addr, 0, sizeof(VAR_5->in_addr));

 if (FUNC_0(VAR_3, VAR_4, (u8 *)&((struct sockaddr_in *)&VAR_5->in_addr)->sin_addr.s_addr, VAR_6, VAR_7)) {
  FUNC_3(VAR_0, &VAR_5->in_addr.ss_family);
  return 0;
 }

 if (FUNC_1(VAR_3, VAR_4, (u8 *)&((struct sockaddr_in6 *)&VAR_5->in_addr)->sin6_addr.s6_addr, VAR_6, VAR_7)) {
  FUNC_3(VAR_1, &VAR_5->in_addr.ss_family);
  return 0;
 }

 return -VAR_2;
}
