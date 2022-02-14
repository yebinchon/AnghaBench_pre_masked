
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct netif_saddr_data {int dummy; } ;
struct ifaddrs {int ifa_name; TYPE_1__* ifa_addr; struct ifaddrs* ifa_next; } ;
struct TYPE_3__ {unsigned int sa_family; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ifaddrs*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct ifaddrs**) ;
 unsigned int FUNC_3 (TYPE_1__*,int,char*,int,int *,int ,int ) ;
 scalar_t__ FUNC_4 (struct ifaddrs*) ;
 int FUNC_5 (TYPE_1__*,struct netif_saddr_data*,int ) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static inline void FUNC_7(struct netif_saddr_data *VAR_4)
{
 struct ifaddrs *VAR_5, *VAR_6;
 unsigned int VAR_7, VAR_8;
 char VAR_9[VAR_2];

 if (FUNC_2(&VAR_5) == -1) {
  FUNC_6("getifaddrs() failed");
  return;
 }

 for (VAR_6 = VAR_5; VAR_6 != ((void*)0); VAR_6 = VAR_6->ifa_next) {
  if (VAR_6->ifa_addr == ((void*)0) || FUNC_4(VAR_6))
   continue;

  VAR_7 = VAR_6->ifa_addr->sa_family;

  if ((VAR_7 == VAR_0) || (VAR_7 == VAR_1)) {
   VAR_8 = FUNC_3(VAR_6->ifa_addr,
     (VAR_7 == VAR_0)
      ? sizeof(struct sockaddr_in)
      : sizeof(struct sockaddr_in6),
     VAR_9, VAR_2, ((void*)0), 0,
     VAR_3);
   if (VAR_8 != 0) {
    FUNC_6("getnameinfo() failed: %s",
         FUNC_1(VAR_8));
    continue;
   }

   FUNC_5(VAR_6->ifa_addr, VAR_4, VAR_6->ifa_name);
  }
 }

 FUNC_0(VAR_5);
}
