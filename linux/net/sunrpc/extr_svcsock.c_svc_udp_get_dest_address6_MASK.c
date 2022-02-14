
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct sockaddr_in6 {int sin6_scope_id; int sin6_addr; int sin6_family; } ;
struct in6_pktinfo {int ipi6_ifindex; int ipi6_addr; } ;
struct cmsghdr {scalar_t__ cmsg_type; } ;


 int VAR_0 ;
 struct in6_pktinfo* FUNC_0 (struct cmsghdr*) ;
 scalar_t__ VAR_1 ;
 struct sockaddr_in6* FUNC_1 (struct svc_rqst*) ;

__attribute__((used)) static int FUNC_2(struct svc_rqst *VAR_2,
         struct cmsghdr *VAR_3)
{
 struct in6_pktinfo *VAR_4 = FUNC_0(VAR_3);
 struct sockaddr_in6 *VAR_5 = FUNC_1(VAR_2);

 if (VAR_3->cmsg_type != VAR_1)
  return 0;

 VAR_5->sin6_family = VAR_0;
 VAR_5->sin6_addr = VAR_4->ipi6_addr;
 VAR_5->sin6_scope_id = VAR_4->ipi6_ifindex;
 return 1;
}
