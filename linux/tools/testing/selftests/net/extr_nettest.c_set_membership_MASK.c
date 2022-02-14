
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ s_addr; } ;
struct TYPE_3__ {scalar_t__ s_addr; } ;
struct ip_mreqn {int imr_ifindex; TYPE_2__ imr_address; TYPE_1__ imr_multiaddr; } ;
typedef int mreq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int ,int ,struct ip_mreqn*,int) ;

__attribute__((used)) static int FUNC_4(int VAR_3, uint32_t VAR_4, uint32_t VAR_5, int VAR_6)
{
 uint32_t VAR_7 = VAR_5;
 struct ip_mreqn VAR_8;
 int VAR_9;

 if (VAR_5 == FUNC_0(VAR_0) && !VAR_6) {
  FUNC_2("Either local address or device needs to be given for multicast membership\n");
  return -1;
 }

 VAR_8.imr_multiaddr.s_addr = VAR_4;
 VAR_8.imr_address.s_addr = VAR_7;
 VAR_8.imr_ifindex = VAR_6;

 VAR_9 = FUNC_3(VAR_3, VAR_1, VAR_2, &VAR_8, sizeof(VAR_8));
 if (VAR_9 < 0) {
  FUNC_1("setsockopt(IP_ADD_MEMBERSHIP)");
  return -1;
 }

 return 0;
}
