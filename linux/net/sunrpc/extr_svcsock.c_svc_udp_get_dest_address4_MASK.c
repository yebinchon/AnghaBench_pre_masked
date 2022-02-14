
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_family; } ;
struct TYPE_4__ {int s_addr; } ;
struct in_pktinfo {TYPE_2__ ipi_spec_dst; } ;
struct cmsghdr {scalar_t__ cmsg_type; } ;


 int VAR_0 ;
 struct in_pktinfo* FUNC_0 (struct cmsghdr*) ;
 scalar_t__ VAR_1 ;
 struct sockaddr_in* FUNC_1 (struct svc_rqst*) ;

__attribute__((used)) static int FUNC_2(struct svc_rqst *VAR_2,
         struct cmsghdr *VAR_3)
{
 struct in_pktinfo *VAR_4 = FUNC_0(VAR_3);
 struct sockaddr_in *VAR_5 = FUNC_1(VAR_2);

 if (VAR_3->cmsg_type != VAR_1)
  return 0;

 VAR_5->sin_family = VAR_0;
 VAR_5->sin_addr.s_addr = VAR_4->ipi_spec_dst.s_addr;
 return 1;
}
