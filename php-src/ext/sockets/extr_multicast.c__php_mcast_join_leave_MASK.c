
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct in_addr {int s_addr; } ;
struct ipv6_mreq {unsigned int ipv6mr_interface; int ipv6mr_multiaddr; int imr_multiaddr; struct in_addr imr_interface; } ;
struct ip_mreq {unsigned int ipv6mr_interface; int ipv6mr_multiaddr; int imr_multiaddr; struct in_addr imr_interface; } ;
struct TYPE_6__ {scalar_t__ ss_family; } ;
struct group_req {unsigned int gr_interface; TYPE_3__ gr_group; int member_0; } ;
typedef int socklen_t ;
struct TYPE_5__ {scalar_t__ type; int bsd_socket; } ;
typedef TYPE_1__ php_socket ;
typedef int mreq ;
typedef int greq ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,struct sockaddr*,int) ;
 int FUNC_3 (struct ipv6_mreq*,int ,int) ;
 int FUNC_4 (int *,int ,char*,char*) ;
 scalar_t__ FUNC_5 (unsigned int,TYPE_1__*,struct in_addr*) ;
 int FUNC_6 (int ,int,int ,char*,int) ;

__attribute__((used)) static int FUNC_7(
 php_socket *VAR_11,
 int VAR_12,
 struct sockaddr *VAR_13,
 socklen_t VAR_14,
 unsigned int VAR_15,
 int VAR_16)
{
 if (VAR_11->type == VAR_0) {
  struct ip_mreq VAR_17;
  struct in_addr VAR_18;
  FUNC_3(&VAR_17, 0, sizeof(struct ip_mreq));

  FUNC_0(VAR_14 == sizeof(struct sockaddr_in));

  if (VAR_15 != 0) {
   if (FUNC_5(VAR_15, VAR_11, &VAR_18) ==
     VAR_3)
    return -2;
   VAR_17.imr_interface = VAR_18;
  } else {
   VAR_17.imr_interface.s_addr = FUNC_1(VAR_4);
  }
  VAR_17.imr_multiaddr = ((struct sockaddr_in*)VAR_13)->sin_addr;
  return FUNC_6(VAR_11->bsd_socket, VAR_12,
    VAR_16 ? VAR_7 : VAR_8, (char*)&VAR_17,
    sizeof(VAR_17));
 }
 else {
  FUNC_4(((void*)0), VAR_2,
   "Option %s is inapplicable to this socket type",
   VAR_16 ? "MCAST_JOIN_GROUP" : "MCAST_LEAVE_GROUP");
  return -2;
 }

}
