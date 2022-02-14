
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_pktinfo {int ipi6_addr; int ipi_spec_dst; } ;
struct in6_pktinfo {int ipi6_addr; int ipi_spec_dst; } ;
struct cmsghdr {void* cmsg_len; int cmsg_type; int cmsg_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 void* FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int,int ,void*) ;
 int FUNC_3 (struct in_pktinfo*,int ,int) ;

int FUNC_4(int VAR_8, struct cmsghdr *VAR_9)
{
 struct in6_pktinfo *VAR_10;
 struct in_pktinfo *VAR_11;

 if (VAR_8 == VAR_0) {
  VAR_9->cmsg_level = VAR_4;
  VAR_9->cmsg_type = VAR_3;
  VAR_9->cmsg_len = FUNC_1(sizeof(struct in_pktinfo));
  VAR_11 = (struct in_pktinfo *)FUNC_0(VAR_9);
  FUNC_3(VAR_11, 0, sizeof(struct in_pktinfo));
  if (FUNC_2(VAR_8, VAR_6,
         (void *)&VAR_11->ipi_spec_dst) != 1)
   return -1;
 } else if (VAR_8 == VAR_1) {
  VAR_9->cmsg_level = VAR_5;
  VAR_9->cmsg_type = VAR_2;
  VAR_9->cmsg_len = FUNC_1(sizeof(struct in6_pktinfo));
  VAR_10 = (struct in6_pktinfo *)FUNC_0(VAR_9);
  FUNC_3(VAR_10, 0, sizeof(struct in6_pktinfo));
  if (FUNC_2(VAR_8, VAR_7,
         (void *)&VAR_10->ipi6_addr) != 1)
   return -1;
 } else {
  return -1;
 }

 return 0;
}
