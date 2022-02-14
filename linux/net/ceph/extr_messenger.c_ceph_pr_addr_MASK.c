
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int ss_family; } ;
struct sockaddr_in6 {int sin6_port; int sin6_addr; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct ceph_entity_addr {int type; struct sockaddr_storage in_addr; } ;


 int VAR_0 ;


 int VAR_1 ;
 char** VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,char*,int,...) ;

const char *FUNC_4(const struct ceph_entity_addr *VAR_4)
{
 int VAR_5;
 char *VAR_6;
 struct sockaddr_storage VAR_7 = VAR_4->in_addr;
 struct sockaddr_in *VAR_8 = (struct sockaddr_in *)&VAR_7;
 struct sockaddr_in6 *VAR_9 = (struct sockaddr_in6 *)&VAR_7;

 VAR_5 = FUNC_0(&VAR_3) & VAR_0;
 VAR_6 = VAR_2[VAR_5];

 switch (VAR_7.ss_family) {
 case 129:
  FUNC_3(VAR_6, VAR_1, "(%d)%pI4:%hu",
    FUNC_1(VAR_4->type), &VAR_8->sin_addr,
    FUNC_2(VAR_8->sin_port));
  break;

 case 128:
  FUNC_3(VAR_6, VAR_1, "(%d)[%pI6c]:%hu",
    FUNC_1(VAR_4->type), &VAR_9->sin6_addr,
    FUNC_2(VAR_9->sin6_port));
  break;

 default:
  FUNC_3(VAR_6, VAR_1, "(unknown sockaddr family %hu)",
    VAR_7.ss_family);
 }

 return VAR_6;
}
