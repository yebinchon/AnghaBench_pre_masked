
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct in_addr {scalar_t__ s_addr; } ;
struct in6_addr {scalar_t__ s_addr; } ;
typedef int addrstr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,struct in_addr*,char*,int) ;
 int FUNC_1 (char*,char const*,...) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (int *,struct in_addr*,int) ;

__attribute__((used)) static int FUNC_4(struct sockaddr *VAR_2, void *VAR_3,
          const char *VAR_4)
{
 char VAR_5[64];
 int VAR_6 = 0;

 if (VAR_2->sa_family == VAR_0) {
  struct sockaddr_in *VAR_7 = (struct sockaddr_in *) VAR_2;
  struct in_addr *VAR_8 = (struct in_addr *) VAR_3;

  if (VAR_7->sin_addr.s_addr != VAR_8->s_addr) {
   FUNC_1("%s address does not match expected %s",
      VAR_4,
      FUNC_0(VAR_0, VAR_8,
         VAR_5, sizeof(VAR_5)));
   VAR_6 = 1;
  }
 } else if (VAR_2->sa_family == VAR_1) {
  struct sockaddr_in6 *VAR_9 = (struct sockaddr_in6 *) VAR_2;
  struct in6_addr *VAR_10 = (struct in6_addr *) VAR_3;

  if (FUNC_3(&VAR_9->sin6_addr, VAR_10, sizeof(*VAR_10))) {
   FUNC_1("%s address does not match expected %s",
      VAR_4,
      FUNC_0(VAR_1, VAR_10,
         VAR_5, sizeof(VAR_5)));
   VAR_6 = 1;
  }
 } else {
  FUNC_1("%s address does not match expected - unknown family",
     VAR_4);
  VAR_6 = 1;
 }

 if (!VAR_6)
  FUNC_2("%s address matches expected\n", VAR_4);

 return VAR_6;
}
