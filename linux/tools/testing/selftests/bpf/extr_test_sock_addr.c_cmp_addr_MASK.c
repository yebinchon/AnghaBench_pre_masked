
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in6 {scalar_t__ sin6_port; int sin6_addr; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {scalar_t__ sin_port; TYPE_1__ sin_addr; } ;
struct in6_addr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int FUNC_1(const struct sockaddr_storage *VAR_2,
      const struct sockaddr_storage *VAR_3, int VAR_4)
{
 const struct sockaddr_in *VAR_5, *VAR_6;
 const struct sockaddr_in6 *VAR_7, *VAR_8;

 if (VAR_2->ss_family != VAR_3->ss_family)
  return -1;

 if (VAR_2->ss_family == VAR_0) {
  VAR_5 = (const struct sockaddr_in *)VAR_2;
  VAR_6 = (const struct sockaddr_in *)VAR_3;
  return !((VAR_5->sin_port == VAR_6->sin_port || !VAR_4) &&
    VAR_5->sin_addr.s_addr == VAR_6->sin_addr.s_addr);
 } else if (VAR_2->ss_family == VAR_1) {
  VAR_7 = (const struct sockaddr_in6 *)VAR_2;
  VAR_8 = (const struct sockaddr_in6 *)VAR_3;
  return !((VAR_7->sin6_port == VAR_8->sin6_port || !VAR_4) &&
    !FUNC_0(&VAR_7->sin6_addr, &VAR_8->sin6_addr,
     sizeof(struct in6_addr)));
 }

 return -1;
}
