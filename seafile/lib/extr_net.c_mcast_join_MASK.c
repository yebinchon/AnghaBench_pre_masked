
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct sockaddr {int sa_family; } ;
struct sockaddr_in6 {struct sockaddr const sin6_addr; } ;
struct sockaddr_in {struct sockaddr const sin_addr; } ;
struct TYPE_4__ {int s_addr; } ;
struct TYPE_3__ {TYPE_2__ s_addr; } ;
struct ipv6_mreq {scalar_t__ gr_interface; scalar_t__ ipv6mr_interface; TYPE_2__ ipv6mr_multiaddr; TYPE_2__ imr_interface; TYPE_1__ imr_multiaddr; TYPE_2__ gr_group; } ;
struct ip_mreq {scalar_t__ gr_interface; scalar_t__ ipv6mr_interface; TYPE_2__ ipv6mr_multiaddr; TYPE_2__ imr_interface; TYPE_1__ imr_multiaddr; TYPE_2__ gr_group; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ifreq {int ifr_addr; int ifr_name; } ;
struct group_req {scalar_t__ gr_interface; scalar_t__ ipv6mr_interface; TYPE_2__ ipv6mr_multiaddr; TYPE_2__ imr_interface; TYPE_1__ imr_multiaddr; TYPE_2__ gr_group; } ;
typedef int socklen_t ;
typedef int req ;
typedef int mreq6 ;
typedef int mreq ;
typedef int evutil_socket_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int ,int ,struct ifreq*) ;
 int FUNC_5 (TYPE_2__*,struct sockaddr const*,int) ;
 int FUNC_6 (int ,int ,int ,struct ipv6_mreq*,int) ;
 int FUNC_7 (int ,char const*,int ) ;

__attribute__((used)) static int
FUNC_8(evutil_socket_t VAR_12, const struct sockaddr *VAR_13, socklen_t VAR_14,
     const char *VAR_15, u_int VAR_16)
{
 switch (VAR_13->sa_family) {
 case 129: {
  struct ip_mreq VAR_17;
  struct ifreq VAR_18;

  FUNC_5(&VAR_17.imr_multiaddr.s_addr,
      &((const struct sockaddr_in *) VAR_13)->sin_addr,
      sizeof(struct in_addr));

  if (VAR_16 > 0) {
   if (FUNC_2(VAR_16, VAR_18.ifr_name) == ((void*)0)) {
    VAR_11 = VAR_2;
    return(-1);
   }
   goto doioctl;
  } else if (VAR_15 != ((void*)0)) {
   FUNC_7(VAR_18.ifr_name, VAR_15, VAR_3);
doioctl:
   if (FUNC_4(VAR_12, VAR_10, &VAR_18) < 0)
    return(-1);
   FUNC_5(&VAR_17.imr_interface,
       &((struct sockaddr_in *) &VAR_18.ifr_addr)->sin_addr,
       sizeof(struct in_addr));
  } else
   VAR_17.imr_interface.s_addr = FUNC_1(VAR_4);

  return(FUNC_6(VAR_12, VAR_5, VAR_8,
        &VAR_17, sizeof(VAR_17)));
 }
 default:
  VAR_11 = VAR_0;
  return(-1);
 }


    return -1;
}
