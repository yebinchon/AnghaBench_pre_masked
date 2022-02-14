
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_extended_err {scalar_t__ ee_errno; scalar_t__ ee_origin; int ee_data; int ee_info; } ;
struct scm_timestamping {int dummy; } ;
struct msghdr {int dummy; } ;
struct in_pktinfo {int ipi_addr; int ipi_spec_dst; int ipi_ifindex; } ;
struct in6_pktinfo {int ipi6_addr; int ipi6_ifindex; } ;
struct cmsghdr {scalar_t__ cmsg_level; scalar_t__ cmsg_type; scalar_t__ cmsg_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 struct cmsghdr* FUNC_2 (struct msghdr*,struct cmsghdr*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (int ,char*,int,...) ;
 int FUNC_4 (int ,int ,int *,int *) ;
 int FUNC_5 (struct scm_timestamping*,int ,int ,int) ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_6(struct msghdr *VAR_15, int VAR_16)
{
 struct sock_extended_err *VAR_17 = ((void*)0);
 struct scm_timestamping *VAR_18 = ((void*)0);
 struct cmsghdr *VAR_19;
 int VAR_20 = 0;

 for (VAR_19 = FUNC_1(VAR_15);
      VAR_19 && VAR_19->cmsg_len;
      VAR_19 = FUNC_2(VAR_15, VAR_19)) {
  if (VAR_19->cmsg_level == VAR_12 &&
      VAR_19->cmsg_type == VAR_8) {
   VAR_18 = (void *) FUNC_0(VAR_19);
  } else if ((VAR_19->cmsg_level == VAR_9 &&
       VAR_19->cmsg_type == VAR_6) ||
      (VAR_19->cmsg_level == VAR_10 &&
       VAR_19->cmsg_type == VAR_4) ||
      (VAR_19->cmsg_level == VAR_11 &&
       VAR_19->cmsg_type == VAR_7)) {
   VAR_17 = (void *) FUNC_0(VAR_19);
   if (VAR_17->ee_errno != VAR_2 ||
       VAR_17->ee_origin != VAR_13) {
    FUNC_3(VAR_14, "unknown ip error %d %ld\n",
      VAR_17->ee_errno,
      VAR_17->ee_origin);
    VAR_17 = ((void*)0);
   }
  } else if (VAR_19->cmsg_level == VAR_9 &&
      VAR_19->cmsg_type == VAR_5) {
   struct in_pktinfo *VAR_21 = (void *) FUNC_0(VAR_19);
   FUNC_4(VAR_0, VAR_21->ipi_ifindex,
          &VAR_21->ipi_spec_dst, &VAR_21->ipi_addr);
  } else if (VAR_19->cmsg_level == VAR_10 &&
      VAR_19->cmsg_type == VAR_3) {
   struct in6_pktinfo *VAR_22 = (void *) FUNC_0(VAR_19);
   FUNC_4(VAR_1, VAR_22->ipi6_ifindex,
          ((void*)0), &VAR_22->ipi6_addr);
  } else
   FUNC_3(VAR_14, "unknown cmsg %d,%ld\n",
     VAR_19->cmsg_level, VAR_19->cmsg_type);

  if (VAR_17 && VAR_18) {
   FUNC_5(VAR_18, VAR_17->ee_info, VAR_17->ee_data,
     VAR_16);
   VAR_17 = ((void*)0);
   VAR_18 = ((void*)0);
   VAR_20++;
  }
 }

 if (VAR_20 > 1)
  FUNC_3(VAR_14, "batched %d timestamps\n", VAR_20);
}
