
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_family; int sin6_scope_id; int sin6_port; int sin6_addr; } ;
struct sockaddr_in {int sin_port; } ;
struct ifaddrs {int ifa_flags; scalar_t__ ifa_broadaddr; int ifa_name; TYPE_1__* ifa_addr; struct ifaddrs* ifa_next; } ;
struct broadif {int index; int broadaddr; } ;
struct addrinfo {int ai_family; int ai_protocol; int ai_socktype; scalar_t__ ai_addr; } ;
typedef int broadlist_t ;
struct TYPE_2__ {int sa_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct broadif*,int ) ;
 int FUNC_1 (struct broadif*) ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (struct ifaddrs*) ;
 scalar_t__ FUNC_4 (int *,char*,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_5 (struct ifaddrs**) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *,scalar_t__,int) ;
 int FUNC_10 (struct addrinfo*,int ,int) ;

int
FUNC_11(int VAR_6, int VAR_7, int VAR_8, broadlist_t *VAR_9)
{
 int VAR_10 = 0;
 struct broadif *VAR_11;
 struct ifaddrs *VAR_12, *VAR_13;



 struct sockaddr_in *VAR_14;
 struct addrinfo VAR_15, *VAR_16;
 FUNC_10(&VAR_15, 0, sizeof VAR_15);

 VAR_15.ai_family = VAR_6;
 VAR_15.ai_protocol = VAR_7;
 VAR_15.ai_socktype = VAR_8;

 if (FUNC_4(((void*)0), "sunrpc", &VAR_15, &VAR_16) != 0)
  return 0;

 for (VAR_12 = VAR_13; VAR_12 != ((void*)0); VAR_12 = VAR_12->ifa_next) {
  if (VAR_12->ifa_addr->sa_family != VAR_6 ||
      !(VAR_12->ifa_flags & VAR_3))
   continue;
  VAR_11 = (struct broadif *)FUNC_8(sizeof *VAR_11);
  if (VAR_11 == ((void*)0))
   break;
  VAR_11->index = FUNC_6(VAR_12->ifa_name);
  if (



  (VAR_12->ifa_flags & VAR_1) &&
   VAR_12->ifa_broadaddr) {


   FUNC_9(&VAR_11->broadaddr, VAR_12->ifa_broadaddr,
     sizeof(VAR_11->broadaddr));
   VAR_14 = (struct sockaddr_in *)(void *)&VAR_11->broadaddr;
   VAR_14->sin_port =
       ((struct sockaddr_in *)
       (void *)VAR_16->ai_addr)->sin_port;
  } else
  {
   FUNC_1(VAR_11);
   continue;
  }
  FUNC_0(VAR_9, VAR_11, VAR_5);
  VAR_10++;
 }
 FUNC_3(VAR_13);
 FUNC_2(VAR_16);

 return VAR_10;
}
