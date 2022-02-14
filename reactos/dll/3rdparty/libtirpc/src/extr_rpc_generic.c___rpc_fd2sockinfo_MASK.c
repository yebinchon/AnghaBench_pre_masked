
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr {int dummy; } ;
struct __rpc_sockinfo {int si_alen; scalar_t__ si_af; int si_proto; int si_socktype; } ;
typedef int socklen_t ;
typedef int proto_info ;
struct TYPE_2__ {int iMaxSockAddr; scalar_t__ iAddressFamily; } ;
typedef TYPE_1__ WSAPROTOCOL_INFO ;
typedef int SOCKET ;
typedef scalar_t__ ADDRESS_FAMILY ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,char*,int*) ;

int
FUNC_3(SOCKET VAR_9, struct __rpc_sockinfo *VAR_10)
{
 socklen_t VAR_11;
 int VAR_12, VAR_13;
 struct sockaddr_storage VAR_14;
 VAR_11 = sizeof VAR_14;
 if (FUNC_1(VAR_9, (struct sockaddr *)&VAR_14, &VAR_11) == VAR_3) {
  return 0;
 }

 VAR_10->si_alen = VAR_11;

 VAR_11 = sizeof VAR_12;
 if (FUNC_2(VAR_9, VAR_6, VAR_8, (char *)&VAR_12, &VAR_11) == VAR_3) {

  int VAR_15 = FUNC_0();

  return 0;
 }





  if (VAR_12 == VAR_5)
   VAR_13 = VAR_1;
  else if (VAR_12 == VAR_4)
   VAR_13 = VAR_2;
  else
   return 0;





 VAR_10->si_af = VAR_14.ss_family;
 VAR_10->si_proto = VAR_13;
 VAR_10->si_socktype = VAR_12;

 return 1;
}
